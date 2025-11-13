#!/bin/bash

# 설정 파일 경로 (디버그 파일 시스템 마운트 필요)
TRACE_PATH=/sys/kernel/debug/tracing

# 추적할 함수 정의 (예: __arm64_sys_fork)
TARGET_FUNC="__arm64_sys_fork"
# ----------------------------------------------------------------------

echo "--- 1. 초기화 시작 ---"
# 1-1. 추적 중지
echo 0 > $TRACE_PATH/tracing_on
sleep 0.5

# 1-2. 모든 이벤트 및 버퍼 초기화
echo > $TRACE_PATH/trace
echo 0 > $TRACE_PATH/events/enable
sleep 0.5
echo "초기화 완료."

# ----------------------------------------------------------------------

echo "--- 2. 트레이서 및 필터 설정 ---"
# 2-1. function_graph 트레이서 설정
echo function_graph > $TRACE_PATH/current_tracer
echo "트레이서: function_graph 설정 완료."
sleep 0.5

# 2-2. 일반 필터 초기화 (가장 중요! 그래프 구조가 깨지는 것을 방지)
# set_graph_function에 지정되지 않은 함수를 제한하지 않도록 합니다.
echo > $TRACE_PATH/set_ftrace_filter
echo "set_ftrace_filter 초기화 완료."
sleep 0.5

# 2-3. 그래프 추적 시작 함수 설정
# 이 함수를 기점으로 호출 흐름(그래프)을 기록합니다.
echo $TARGET_FUNC > $TRACE_PATH/set_graph_function
echo "그래프 시작 함수: $TARGET_FUNC 설정 완료."
sleep 0.5

# ----------------------------------------------------------------------

echo "--- 3. 옵션 설정 ---"
# 3-1. 스택 트레이스 활성화 (콜러(Caller) 스택 정보 기록)
echo 1 > $TRACE_PATH/options/stacktrace
echo "옵션: stacktrace 활성화."

# 3-2. 함수 오프셋 출력 활성화
echo 1 > $TRACE_PATH/options/sym-offset
echo "옵션: sym-offset 활성화."
sleep 0.5

# ----------------------------------------------------------------------

echo "--- 4. 추적 시작 및 실행 ---"
echo 1 > $TRACE_PATH/tracing_on
echo "ftrace 추적 시작됨. 이제 $TARGET_FUNC가 실행되는 작업을 수행하세요 (예: fork() 호출)."

# 사용자 작업이 끝날 때까지 대기
# 예: sleep 5
# 예: /path/to/your/program
read -p "작업을 수행하신 후, 추적을 중지하려면 Enter 키를 누르세요..."

# ----------------------------------------------------------------------

echo "--- 5. 추적 중지 및 결과 출력 ---"
echo 0 > $TRACE_PATH/tracing_on
echo "ftrace 추적 중지."

echo "결과 출력:"
cat $TRACE_PATH/trace

# ----------------------------------------------------------------------

echo "--- 6. 정리 ---"
# 트레이서를 nop (No Operation)으로 되돌려 성능 영향을 최소화합니다.
echo nop > $TRACE_PATH/current_tracer
echo > $TRACE_PATH/set_graph_function
echo "트레이서 설정을 nop으로 정리 완료."
echo "스크립트 종료."
