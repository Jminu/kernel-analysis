#!/bin/bash

echo 0 > /sys/kernel/debug/tracing/tracing_on
sleep 1
echo "tracing_off"

echo 0 > /sys/kernel/debug/tracing/events/enable
sleep 1
echo "events disabled!"

echo function_graph > /sys/kernel/debug/tracing/current_tracer
sleep 1
echo "function tracer enabled!"

echo cpu_startup_entry > /sys/kernel/debug/tracing/set_ftrace_filter
sleep 1
echo "cpu_startup_entry enabled!"

#####################################################################


echo __arm64_sys_clone >> /sys/kernel/debug/tracing/set_ftrace_filter
sleep 1
echo "__arm64_sys_fork => enabled!"


#####################################################################

#echo 1 > /sys/kernel/debug/tracing/events/irq/irq_handler_entry/enable
#echo 1 > /sys/kernel/debug/tracing/events/irq/irq_handler_exit/enable
#echo "event enabled"

#echo 1 > /sys/kernel/debug/tracing/events/sched/sched_switch/enable
#sleep 1
#echo "sched switch enabled!"

echo 1 > /sys/kernel/debug/tracing/options/stacktrace
echo "function stack trace enabled"

echo 1 > /sys/kernel/debug/tracing/options/sym-offset
echo "function stack trace enabled"

echo 1 > /sys/kernel/debug/tracing/tracing_on
echo "tracing_on"

