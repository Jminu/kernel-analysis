# tracer: function
#
# entries-in-buffer/entries-written: 5342/5342   #P:4
#
#                                _-----=> irqs-off/BH-disabled
#                               / _----=> need-resched
#                              | / _---=> hardirq/softirq
#                              || / _--=> preempt-depth
#                              ||| / _-=> migrate-disable
#                              |||| /     delay
#           TASK-PID     CPU#  |||||  TIMESTAMP  FUNCTION
#              | |         |   |||||     |         |
   set_ftrace.sh-9825    [001] d..2. 312280.333958: sched_switch: prev_comm=set_ftrace.sh prev_pid=9825 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u18:0 next_pid=7592 next_prio=120
          <idle>-0       [000] d.h1. 312280.333967: irq_handler_entry: irq=2 name=IPI
   kworker/u18:0-7592    [001] d..2. 312280.333971: sched_switch: prev_comm=kworker/u18:0 prev_pid=7592 prev_prio=120 prev_state=I ==> next_comm=set_ftrace.sh next_pid=9825 next_prio=120
          <idle>-0       [000] dNh1. 312280.333972: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d..2. 312280.333975: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=9807 next_prio=120
   set_ftrace.sh-9825    [001] d..2. 312280.333976: sched_switch: prev_comm=set_ftrace.sh prev_pid=9825 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u18:0 next_pid=7592 next_prio=120
   kworker/u18:0-7592    [001] d..2. 312280.333979: sched_switch: prev_comm=kworker/u18:0 prev_pid=7592 prev_prio=120 prev_state=I ==> next_comm=set_ftrace.sh next_pid=9825 next_prio=120
            sshd-9807    [000] d..2. 312280.334083: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=S ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312280.334103: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312280.334105: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312280.334107: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312280.334108: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312280.334109: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312280.334118: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312280.334123: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312280.334351: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1. 312280.334355: irq_handler_exit: irq=2 ret=handled
   set_ftrace.sh-9825    [001] d..2. 312280.334357: sched_switch: prev_comm=set_ftrace.sh prev_pid=9825 prev_prio=120 prev_state=Z ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0       [000] d..2. 312280.334359: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=9820 next_prio=120
            bash-9820    [000] d..2. 312280.334700: sched_switch: prev_comm=bash prev_pid=9820 prev_prio=120 prev_state=S ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
   kworker/u17:1-9290    [000] d..2. 312280.334714: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d..2. 312280.334821: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312280.337121: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1. 312280.337129: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312280.337131: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312280.337146: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312280.337148: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312280.337151: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312280.337152: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312280.337153: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312280.337160: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312280.337185: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312280.337187: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312280.337199: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312280.337199: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312280.337200: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312280.337225: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312280.337228: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312280.337228: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312280.337228: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312280.337234: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312280.337248: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312280.337763: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1. 312280.337764: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312280.337774: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1. 312280.337774: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312280.337786: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d..2. 312280.337787: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
          <idle>-0       [003] dNh1. 312280.337791: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2. 312280.337794: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_preempt next_pid=18 next_prio=120
          <idle>-0       [002] d.h1. 312280.337797: irq_handler_entry: irq=2 name=IPI
     rcu_preempt-18      [003] d..2. 312280.337801: sched_switch: prev_comm=rcu_preempt prev_pid=18 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [002] dNh1. 312280.337803: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d..2. 312280.337806: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:1 next_pid=9595 next_prio=120
     kworker/0:2-9753    [000] d..2. 312280.337808: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312280.337810: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312280.337812: irq_handler_exit: irq=11 ret=handled
     kworker/2:1-9595    [002] d..2. 312280.337814: sched_switch: prev_comm=kworker/2:1 prev_pid=9595 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [002] d.h1. 312280.337816: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1. 312280.337817: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312280.341763: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1. 312280.341763: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312280.341766: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1. 312280.341766: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312280.345763: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1. 312280.345763: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312280.345765: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1. 312280.345766: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312280.345770: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1. 312280.345773: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2. 312280.345775: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_preempt next_pid=18 next_prio=120
     rcu_preempt-18      [003] d..2. 312280.345781: sched_switch: prev_comm=rcu_preempt prev_pid=18 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312280.345782: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312280.345784: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312280.346985: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1. 312280.346992: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1. 312280.346992: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312280.346993: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312280.346995: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
     kworker/0:2-9753    [000] d..2. 312280.347003: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312280.347005: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312280.347007: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312280.347007: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312280.347007: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312280.347012: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
     kworker/0:2-9753    [000] d..2. 312280.347027: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312280.347029: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312280.347033: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312280.347033: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312280.347034: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312280.347038: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
     kworker/0:2-9753    [000] d..2. 312280.347051: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312280.347053: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312280.347055: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312280.347055: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312280.347056: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312280.347057: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312280.347058: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312280.347059: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312280.347059: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312280.347064: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
     kworker/0:2-9753    [000] d..2. 312280.347073: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=I ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312280.347093: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312280.347095: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312280.347098: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312280.347099: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312280.347099: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312280.347100: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312280.347102: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312280.347102: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312280.347103: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312280.347108: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312280.347123: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312280.347124: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312280.347127: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312280.347127: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312280.347128: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312280.347128: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312280.347130: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312280.347131: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312280.347131: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312280.347136: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312280.347186: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312280.347188: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312280.347192: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312280.347192: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312280.347192: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312280.347193: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312280.347195: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312280.347196: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312280.347196: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312280.347201: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312280.347206: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [001] d.h1. 312280.349763: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312280.349763: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1. 312280.349766: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312280.349767: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312280.353763: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1. 312280.353763: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312280.353765: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1. 312280.353766: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312280.353769: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1. 312280.353771: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2. 312280.353774: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_preempt next_pid=18 next_prio=120
     rcu_preempt-18      [003] d..2. 312280.353779: sched_switch: prev_comm=rcu_preempt prev_pid=18 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [001] d.h1. 312280.357763: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312280.357765: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1. 312280.357766: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312280.357767: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312280.361763: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312280.361767: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312280.361778: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d..2. 312280.361778: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
          <idle>-0       [003] dNh1. 312280.361780: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2. 312280.361783: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_preempt next_pid=18 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312280.361785: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
     rcu_preempt-18      [003] d..2. 312280.361787: sched_switch: prev_comm=rcu_preempt prev_pid=18 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312280.365764: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312280.365767: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312280.369763: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312280.369766: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312280.369769: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1. 312280.369772: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2. 312280.369774: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_preempt next_pid=18 next_prio=120
     rcu_preempt-18      [003] d..2. 312280.369778: sched_switch: prev_comm=rcu_preempt prev_pid=18 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312280.373764: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312280.373767: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312280.377764: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312280.377766: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312280.377772: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1. 312280.377775: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d..2. 312280.377776: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
          <idle>-0       [003] d..2. 312280.377777: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_preempt next_pid=18 next_prio=120
     rcu_preempt-18      [003] d..2. 312280.377782: sched_switch: prev_comm=rcu_preempt prev_pid=18 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312280.377784: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312280.377786: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312280.377788: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312280.377788: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312280.377789: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312280.377794: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312280.377801: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312280.377802: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312280.377804: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312280.377804: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312280.377805: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312280.377810: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312280.377816: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312280.377818: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312280.377819: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312280.377820: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312280.377820: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312280.377825: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312280.377829: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312280.381764: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312280.381767: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312280.389765: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312280.389767: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312280.389771: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1. 312280.389774: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2. 312280.389776: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kcompactd0 next_pid=49 next_prio=120
      kcompactd0-49      [003] d..2. 312280.389782: sched_switch: prev_comm=kcompactd0 prev_pid=49 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312280.409764: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312280.409765: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312280.409767: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312280.409768: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d..2. 312280.409779: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1 next_pid=9750 next_prio=120
     kworker/3:1-9750    [003] d..2. 312280.409787: sched_switch: prev_comm=kworker/3:1 prev_pid=9750 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312280.409788: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312280.409790: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312280.485765: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312280.485765: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312280.485767: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312280.485767: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312280.485777: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
     kworker/0:2-9753    [000] d..2. 312280.485791: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312280.485792: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312280.485794: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312280.613765: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312280.613766: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312280.613768: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312280.613768: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312280.613778: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
     kworker/0:2-9753    [000] d..2. 312280.613795: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312280.613796: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312280.613798: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312280.613799: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312280.613799: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312280.613799: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312280.613805: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d..2. 312280.613808: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
     kworker/0:2-9753    [000] d..2. 312280.613814: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312280.614192: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312280.614193: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312280.617766: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312280.617769: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312280.658371: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1. 312280.658377: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312280.658380: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=smbd-notifyd next_pid=638 next_prio=120
    smbd-notifyd-638     [000] d..2. 312280.658412: sched_switch: prev_comm=smbd-notifyd prev_pid=638 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312280.773767: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312280.773768: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312280.773770: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312280.773771: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312280.773782: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
     kworker/0:2-9753    [000] d..2. 312280.773793: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312280.773794: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312280.773796: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312280.773797: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312280.773801: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312280.773803: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
     kworker/0:2-9753    [000] d..2. 312280.773809: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312280.773814: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312280.773817: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312280.773820: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
     kworker/0:2-9753    [000] d..2. 312280.773826: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312280.773830: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312280.773833: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312280.773836: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
     kworker/0:2-9753    [000] d..2. 312280.773842: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312280.773847: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312280.773849: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312280.773852: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
     kworker/0:2-9753    [000] d..2. 312280.773858: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312280.773862: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312280.773865: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312280.773868: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
     kworker/0:2-9753    [000] d..2. 312280.773874: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312280.775431: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312280.775432: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312280.901768: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312280.901769: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312280.901771: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312280.901771: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d..2. 312280.901780: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kcompactd0 next_pid=49 next_prio=120
      kcompactd0-49      [003] d..2. 312280.901785: sched_switch: prev_comm=kcompactd0 prev_pid=49 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312280.901786: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312280.901788: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1. 312281.231271: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1. 312281.231272: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1. 312281.231279: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1. 312281.231280: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312281.253770: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312281.253770: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312281.253771: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312281.253771: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312281.253773: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312281.253773: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312281.253775: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312281.253776: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312281.253785: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
          <idle>-0       [003] d..2. 312281.253787: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1 next_pid=9750 next_prio=120
     kworker/0:2-9753    [000] d..2. 312281.253795: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312281.253796: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312281.253797: irq_handler_exit: irq=11 ret=handled
     kworker/3:1-9750    [003] d.h1. 312281.253802: irq_handler_entry: irq=11 name=arch_timer
     kworker/3:1-9750    [003] d.h1. 312281.253805: irq_handler_exit: irq=11 ret=handled
     kworker/3:1-9750    [003] d..2. 312281.253811: sched_switch: prev_comm=kworker/3:1 prev_pid=9750 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312281.253812: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1. 312281.253814: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [003] d.h1. 312281.253815: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1. 312281.253818: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2. 312281.253821: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1 next_pid=9750 next_prio=120
     kworker/3:1-9750    [003] d..2. 312281.253829: sched_switch: prev_comm=kworker/3:1 prev_pid=9750 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312281.254216: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312281.254217: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312281.406275: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1. 312281.406280: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312281.406283: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=gmain next_pid=561 next_prio=120
           gmain-561     [000] d..2. 312281.406354: sched_switch: prev_comm=gmain prev_pid=561 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312281.406357: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312281.406358: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312281.409775: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312281.409779: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312281.409786: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1. 312281.409788: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2. 312281.409791: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_preempt next_pid=18 next_prio=120
     rcu_preempt-18      [003] d..2. 312281.409797: sched_switch: prev_comm=rcu_preempt prev_pid=18 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312281.409799: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312281.409800: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312281.413775: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312281.413775: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312281.413777: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312281.413778: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d..2. 312281.413786: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kcompactd0 next_pid=49 next_prio=120
      kcompactd0-49      [003] d..2. 312281.413790: sched_switch: prev_comm=kcompactd0 prev_pid=49 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312281.417775: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312281.417775: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312281.417777: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312281.417778: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d..2. 312281.417783: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_preempt next_pid=18 next_prio=120
     rcu_preempt-18      [003] d..2. 312281.417789: sched_switch: prev_comm=rcu_preempt prev_pid=18 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312281.421775: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312281.421777: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1. 312281.485105: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] dNh1. 312281.485112: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d..2. 312281.485115: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=cron next_pid=441 next_prio=120
            cron-441     [002] d..2. 312281.485202: sched_switch: prev_comm=cron prev_pid=441 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [002] d.h1. 312281.486916: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1. 312281.486917: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312281.509776: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1. 312281.509776: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312281.509778: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1. 312281.509779: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312281.509789: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
          <idle>-0       [002] d..2. 312281.509792: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:1 next_pid=9595 next_prio=120
     kworker/0:2-9753    [000] d..2. 312281.509799: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
     kworker/2:1-9595    [002] d..2. 312281.509799: sched_switch: prev_comm=kworker/2:1 prev_pid=9595 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312281.509800: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312281.509802: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312281.569641: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312281.569643: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312281.637777: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312281.637781: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312281.637790: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
     kworker/0:2-9753    [000] d..2. 312281.637801: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312281.637803: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312281.637804: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312281.637805: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312281.637806: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312281.637806: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312281.637811: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d..2. 312281.637814: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
     kworker/0:2-9753    [000] d..2. 312281.637819: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312281.638175: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312281.638176: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312281.641777: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312281.641780: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312281.797778: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312281.797780: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2. 312281.797786: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2. 312281.797788: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312281.797794: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
     kworker/0:2-9753    [000] d..2. 312281.797803: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=R+ ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312281.797805: irq_handler_entry: irq=28 name=eth0
     kworker/0:1-9798    [000] dNh1. 312281.797808: irq_handler_exit: irq=28 ret=handled
     kworker/0:1-9798    [000] d..2. 312281.797810: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
     kworker/0:2-9753    [000] d..2. 312281.797816: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h.. 312281.797820: irq_handler_entry: irq=28 name=eth0
     kworker/0:1-9798    [000] dNh.. 312281.797823: irq_handler_exit: irq=28 ret=handled
     kworker/0:1-9798    [000] d..2. 312281.797825: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
     kworker/0:2-9753    [000] d..2. 312281.797829: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312281.797834: irq_handler_entry: irq=28 name=eth0
     kworker/0:1-9798    [000] dNh1. 312281.797836: irq_handler_exit: irq=28 ret=handled
     kworker/0:1-9798    [000] d..2. 312281.797838: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
     kworker/0:2-9753    [000] d..2. 312281.797842: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h.. 312281.797847: irq_handler_entry: irq=28 name=eth0
     kworker/0:1-9798    [000] dNh.. 312281.797849: irq_handler_exit: irq=28 ret=handled
     kworker/0:1-9798    [000] d..2. 312281.797851: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
     kworker/0:2-9753    [000] d..2. 312281.797855: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h.. 312281.797860: irq_handler_entry: irq=28 name=eth0
     kworker/0:1-9798    [000] dNh.. 312281.797862: irq_handler_exit: irq=28 ret=handled
     kworker/0:1-9798    [000] d..2. 312281.797864: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
     kworker/0:2-9753    [000] d..2. 312281.797868: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312281.797885: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312281.797886: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1. 312281.797890: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312281.797892: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312281.797896: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312281.799664: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312281.799666: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312281.800866: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] dNh1. 312281.800873: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [000] d..2. 312281.800881: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312281.800898: irq_handler_entry: irq=11 name=arch_timer
     kworker/0:1-9798    [000] d.h1. 312281.800903: irq_handler_exit: irq=11 ret=handled
     kworker/0:1-9798    [000] d..2. 312281.800914: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312281.800925: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] dNh1. 312281.800932: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [000] d..2. 312281.800940: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312281.800959: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312281.860846: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312281.860850: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312281.925783: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312281.925789: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312281.925798: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.H1. 312281.925802: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1. 312281.925805: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2. 312281.925812: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kcompactd0 next_pid=49 next_prio=120
          <idle>-0       [000] dNH1. 312281.925812: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312281.925824: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
      kcompactd0-49      [003] d..2. 312281.925824: sched_switch: prev_comm=kcompactd0 prev_pid=49 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312281.925827: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312281.925831: irq_handler_exit: irq=11 ret=handled
     kworker/0:1-9798    [000] d.h1. 312281.925847: irq_handler_entry: irq=11 name=arch_timer
     kworker/0:1-9798    [000] d.h1. 312281.925851: irq_handler_exit: irq=11 ret=handled
     kworker/0:1-9798    [000] d..2. 312281.925865: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312281.925969: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312281.925972: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312281.929799: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] dNh1. 312281.929808: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [000] d..2. 312281.929817: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312281.929834: irq_handler_entry: irq=11 name=arch_timer
     kworker/0:1-9798    [000] d.h1. 312281.929839: irq_handler_exit: irq=11 ret=handled
     kworker/0:1-9798    [000] d..2. 312281.929851: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312281.929856: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] dNh1. 312281.929863: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [000] d..2. 312281.929869: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312281.929885: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] d.h1. 312281.978895: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1. 312281.978900: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312282.006360: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312282.006364: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312282.405787: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312282.405795: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2. 312282.405810: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2. 312282.405813: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312282.405841: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
   kworker/u17:1-9290    [000] d..2. 312282.405878: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312282.405907: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.406336: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312282.406340: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1. 312282.408508: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] dNh1. 312282.408522: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d..2. 312282.408531: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=NetworkManager next_pid=516 next_prio=120
          <idle>-0       [000] d.h1. 312282.408756: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1. 312282.408766: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d..2. 312282.408775: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
  NetworkManager-516     [002] d..2. 312282.408775: sched_switch: prev_comm=NetworkManager prev_pid=516 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [002] d.h1. 312282.408782: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1. 312282.408789: irq_handler_exit: irq=11 ret=handled
   kworker/u21:0-89      [000] d..2. 312282.408801: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.408806: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.408810: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.408811: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.408813: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312282.408831: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312282.408843: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.411841: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1. 312282.411851: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNh1. 312282.411853: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1. 312282.411864: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1. 312282.411865: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312282.411867: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312282.411876: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312282.411891: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312282.411894: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312282.411898: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312282.411899: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312282.411901: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312282.411913: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312282.411934: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312282.411937: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312282.411941: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312282.411942: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312282.411944: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312282.411958: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312282.411991: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312282.411995: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312282.412051: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312282.412052: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312282.412053: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312282.412071: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.412085: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.412089: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.412090: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.412091: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312282.412111: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
          <idle>-0       [002] d.h1. 312282.412131: irq_handler_entry: irq=2 name=IPI
   kworker/u21:0-89      [000] d..2. 312282.412135: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
          <idle>-0       [002] dNh1. 312282.412142: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d..2. 312282.412151: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=NetworkManager next_pid=516 next_prio=120
     kworker/0:1-9798    [000] d..2. 312282.412160: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.412165: irq_handler_entry: irq=40 name=mmc1
  NetworkManager-516     [002] d..2. 312282.412167: sched_switch: prev_comm=NetworkManager prev_pid=516 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.412169: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.412170: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.412171: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312282.412186: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312282.412212: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.412216: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.412223: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.412224: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.412226: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312282.412239: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312282.412264: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.412267: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.412271: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.412273: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.412274: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312282.412276: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.412280: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.412281: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.412282: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312282.412295: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312282.412315: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312282.412355: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.412360: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.412370: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.412371: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.412372: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312282.412388: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312282.412444: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.412449: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.412452: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.412453: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.412455: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312282.412469: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.412529: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.412530: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.412531: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312282.412551: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
          <idle>-0       [002] d.h1. 312282.412564: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1. 312282.412573: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d..2. 312282.412580: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=NetworkManager next_pid=516 next_prio=120
   kworker/u21:0-89      [000] d..2. 312282.412588: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.412592: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.412601: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.412603: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.412604: irq_handler_exit: irq=40 ret=unhandled
  NetworkManager-516     [002] d..2. 312282.412620: sched_switch: prev_comm=NetworkManager prev_pid=516 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d..2. 312282.412620: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312282.412641: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.412645: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.412648: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.412650: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.412651: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312282.412665: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312282.412693: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.412697: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.412718: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.412719: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.412721: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312282.412738: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.412742: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.412743: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.412744: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312282.412764: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
          <idle>-0       [002] d.h1. 312282.412775: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1. 312282.412785: irq_handler_exit: irq=2 ret=handled
   kworker/u21:0-89      [000] d..2. 312282.412789: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] d..2. 312282.412792: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=NetworkManager next_pid=516 next_prio=120
  NetworkManager-516     [002] d..2. 312282.412805: sched_switch: prev_comm=NetworkManager prev_pid=516 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.413107: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1. 312282.413122: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1. 312282.413124: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312282.413125: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312282.413133: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312282.413151: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.413155: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.413159: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.413160: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.413161: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312282.413175: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312282.413199: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.413203: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.413209: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.413210: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.413212: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312282.413225: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312282.413248: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.413252: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.413256: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.413257: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.413259: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312282.413261: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.413265: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.413266: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.413267: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312282.413280: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312282.413299: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312282.413332: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.413336: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.413345: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.413347: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.413348: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312282.413363: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312282.413409: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.413414: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.413436: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.413438: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.413439: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312282.413454: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
          <idle>-0       [002] d.h1. 312282.413464: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1. 312282.413472: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d..2. 312282.413480: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=NetworkManager next_pid=516 next_prio=120
   kworker/u21:0-89      [000] d..2. 312282.413487: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.413491: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.413501: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.413502: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.413503: irq_handler_exit: irq=40 ret=unhandled
  NetworkManager-516     [002] d..2. 312282.413512: sched_switch: prev_comm=NetworkManager prev_pid=516 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d..2. 312282.413518: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312282.413539: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.413543: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.413546: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.413548: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.413549: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312282.413563: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312282.413591: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.413595: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.413615: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.413616: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.413618: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312282.413635: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.413638: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.413640: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.413641: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312282.413659: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
          <idle>-0       [002] d.h1. 312282.413670: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1. 312282.413681: irq_handler_exit: irq=2 ret=handled
   kworker/u21:0-89      [000] d..2. 312282.413682: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] d..2. 312282.413688: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=NetworkManager next_pid=516 next_prio=120
  NetworkManager-516     [002] d..2. 312282.413702: sched_switch: prev_comm=NetworkManager prev_pid=516 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.413807: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1. 312282.413822: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1. 312282.413823: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312282.413825: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312282.413833: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312282.413851: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.413855: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.413858: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.413860: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.413861: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312282.413874: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312282.413899: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.413902: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.413909: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.413910: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.413911: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312282.413924: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312282.413947: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.413951: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.413955: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.413956: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.413958: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312282.413960: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.413963: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.413965: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.413966: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312282.413979: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312282.413998: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312282.414031: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.414035: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.414045: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.414046: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.414048: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312282.414062: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312282.414104: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.414108: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.414130: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.414131: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.414132: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312282.414147: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
          <idle>-0       [002] d.h1. 312282.414157: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1. 312282.414165: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d..2. 312282.414173: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=NetworkManager next_pid=516 next_prio=120
   kworker/u21:0-89      [000] d..2. 312282.414181: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.414185: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.414197: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.414198: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.414200: irq_handler_exit: irq=40 ret=unhandled
  NetworkManager-516     [002] d..2. 312282.414206: sched_switch: prev_comm=NetworkManager prev_pid=516 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d..2. 312282.414215: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312282.414236: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.414240: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.414244: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.414245: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.414246: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312282.414260: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d.h.. 312282.414285: irq_handler_entry: irq=40 name=mmc1
   kworker/u21:0-89      [000] d.h.. 312282.414288: irq_handler_exit: irq=40 ret=handled
   kworker/u21:0-89      [000] d.h.. 312282.414289: irq_handler_entry: irq=40 name=mmc0
   kworker/u21:0-89      [000] d.h.. 312282.414291: irq_handler_exit: irq=40 ret=unhandled
   kworker/u21:0-89      [000] d..2. 312282.414326: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.414435: irq_handler_entry: irq=15 name=DMA IRQ
          <idle>-0       [000] d.h1. 312282.414437: irq_handler_exit: irq=15 ret=handled
          <idle>-0       [000] d.h1. 312282.414459: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.414463: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.414464: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.414465: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312282.414484: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
          <idle>-0       [002] d.h1. 312282.414496: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1. 312282.414505: irq_handler_exit: irq=2 ret=handled
   kworker/u21:0-89      [000] d..2. 312282.414508: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] d..2. 312282.414512: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=NetworkManager next_pid=516 next_prio=120
          <idle>-0       [000] d.h1. 312282.414520: irq_handler_entry: irq=40 name=mmc1
  NetworkManager-516     [002] d..2. 312282.414526: sched_switch: prev_comm=NetworkManager prev_pid=516 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] dNh1. 312282.414535: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1. 312282.414537: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312282.414538: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312282.414546: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312282.414564: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.414568: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.414572: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.414573: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.414574: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312282.414588: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312282.414612: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.414616: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.414622: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.414623: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.414624: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312282.414638: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312282.414661: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.414665: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.414669: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.414670: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.414671: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312282.414674: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.414677: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.414678: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.414680: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312282.414692: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312282.414711: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312282.414743: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.414748: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.414757: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.414758: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.414760: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312282.414774: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d.h1. 312282.414813: irq_handler_entry: irq=40 name=mmc1
   kworker/u21:0-89      [000] d.h1. 312282.414817: irq_handler_exit: irq=40 ret=handled
   kworker/u21:0-89      [000] d.h1. 312282.414818: irq_handler_entry: irq=40 name=mmc0
   kworker/u21:0-89      [000] d.h1. 312282.414819: irq_handler_exit: irq=40 ret=unhandled
   kworker/u21:0-89      [000] d..2. 312282.414843: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.414929: irq_handler_entry: irq=15 name=DMA IRQ
          <idle>-0       [000] d.h1. 312282.414932: irq_handler_exit: irq=15 ret=handled
          <idle>-0       [000] d.h1. 312282.414934: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.414937: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.414938: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.414940: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312282.414966: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
          <idle>-0       [002] d.h1. 312282.414979: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1. 312282.414987: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d..2. 312282.414995: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=NetworkManager next_pid=516 next_prio=120
   kworker/u21:0-89      [000] d..2. 312282.415003: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.415008: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.415018: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.415019: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.415020: irq_handler_exit: irq=40 ret=unhandled
  NetworkManager-516     [002] d..2. 312282.415027: sched_switch: prev_comm=NetworkManager prev_pid=516 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d..2. 312282.415035: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312282.415055: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.415059: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.415063: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.415064: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.415066: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312282.415079: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312282.415107: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.415111: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.415117: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.415118: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.415120: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312282.415122: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.415125: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.415126: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.415128: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312282.415141: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d.h1. 312282.415146: irq_handler_entry: irq=40 name=mmc1
   kworker/u21:0-89      [000] d.h1. 312282.415157: irq_handler_exit: irq=40 ret=handled
   kworker/u21:0-89      [000] d.h1. 312282.415158: irq_handler_entry: irq=40 name=mmc0
   kworker/u21:0-89      [000] d.h1. 312282.415159: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1. 312282.415170: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1. 312282.415179: irq_handler_exit: irq=2 ret=handled
   kworker/u21:0-89      [000] d..2. 312282.415180: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
          <idle>-0       [002] d..2. 312282.415187: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=NetworkManager next_pid=516 next_prio=120
     kworker/0:1-9798    [000] d..2. 312282.415199: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.415203: irq_handler_entry: irq=40 name=mmc1
  NetworkManager-516     [002] d..2. 312282.415205: sched_switch: prev_comm=NetworkManager prev_pid=516 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.415207: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.415208: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.415209: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312282.415224: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312282.415248: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.415252: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.415259: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.415260: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.415261: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312282.415275: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312282.415298: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.415302: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.415306: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.415307: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.415309: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312282.415311: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.415314: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.415317: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.415318: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312282.415331: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312282.415350: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312282.415382: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.415386: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.415396: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.415397: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.415399: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312282.415413: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
          <idle>-0       [002] d.h1. 312282.415441: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1. 312282.415449: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d..2. 312282.415456: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=NetworkManager next_pid=516 next_prio=120
   kworker/u21:0-89      [000] d..2. 312282.415465: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.415470: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.415479: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.415481: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.415482: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312282.415498: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312282.415512: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312282.415926: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1. 312282.415937: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2. 312282.415945: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=gdbus next_pid=562 next_prio=120
  NetworkManager-516     [002] d..2. 312282.416268: sched_switch: prev_comm=NetworkManager prev_pid=516 prev_prio=120 prev_state=S ==> next_comm=dbus-daemon next_pid=442 next_prio=120
           gdbus-562     [003] d..2. 312282.416295: sched_switch: prev_comm=gdbus prev_pid=562 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
     dbus-daemon-442     [002] d..2. 312282.416630: sched_switch: prev_comm=dbus-daemon prev_pid=442 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312282.420681: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312282.420688: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1. 312282.429793: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1. 312282.429810: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312282.429827: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1. 312282.429838: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d..2. 312282.429847: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312282.429860: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] d.h1. 312282.437789: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312282.437791: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1. 312282.437797: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312282.437800: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312282.437807: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1. 312282.437817: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2. 312282.437827: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kcompactd0 next_pid=49 next_prio=120
      kcompactd0-49      [003] d..2. 312282.437843: sched_switch: prev_comm=kcompactd0 prev_pid=49 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [002] d.h1. 312282.445789: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312282.445790: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312282.445790: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1. 312282.445796: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312282.445796: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312282.445800: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312282.445823: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312282.445846: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.445851: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.445856: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.445857: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.445859: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312282.445875: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312282.445891: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.445895: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.445898: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.445899: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.445901: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312282.445914: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312282.445929: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.445933: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.445936: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312282.445937: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312282.445939: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312282.445952: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312282.445963: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312282.533789: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1. 312282.533790: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312282.533791: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312282.533796: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1. 312282.533796: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312282.533798: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.H1. 312282.533806: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNH1. 312282.533823: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d..2. 312282.533831: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1 next_pid=9750 next_prio=120
          <idle>-0       [002] d..2. 312282.533837: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:1 next_pid=9595 next_prio=120
     kworker/3:1-9750    [003] d..2. 312282.533861: sched_switch: prev_comm=kworker/3:1 prev_pid=9750 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
     kworker/2:1-9595    [002] d..2. 312282.533862: sched_switch: prev_comm=kworker/2:1 prev_pid=9595 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [002] d.h1. 312282.533866: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312282.533868: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1. 312282.533871: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312282.533873: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312282.661791: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312282.661799: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNH2. 312282.661819: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNH2. 312282.661823: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d..2. 312282.661840: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1 next_pid=9750 next_prio=120
          <idle>-0       [000] d.h1. 312282.661869: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312282.661870: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312282.661871: irq_handler_entry: irq=40 name=mmc0
     kworker/3:1-9750    [003] d..2. 312282.661880: sched_switch: prev_comm=kworker/3:1 prev_pid=9750 prev_prio=120 prev_state=D ==> next_comm=kworker/3:2 next_pid=9599 next_prio=120
          <idle>-0       [000] d.h1. 312282.661889: irq_handler_exit: irq=40 ret=handled
     kworker/3:2-9599    [003] d..2. 312282.661895: sched_switch: prev_comm=kworker/3:2 prev_pid=9599 prev_prio=120 prev_state=I ==> next_comm=kworker/3:1 next_pid=9750 next_prio=120
     kworker/3:1-9750    [003] d..2. 312282.661919: sched_switch: prev_comm=kworker/3:1 prev_pid=9750 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312282.662641: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312282.662645: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312282.665793: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312282.665800: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312282.821791: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312282.821794: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312282.821799: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312282.821802: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2. 312282.821816: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2. 312282.821820: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312282.821836: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] dNh1. 312282.821859: irq_handler_entry: irq=28 name=eth0
     kworker/0:1-9798    [000] dNh1. 312282.821864: irq_handler_exit: irq=28 ret=handled
     kworker/0:1-9798    [000] d..2. 312282.821870: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
     kworker/0:2-9753    [000] d..2. 312282.821884: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312282.821906: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.821911: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312282.821920: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312282.821925: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312282.821939: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.821943: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312282.821952: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312282.821956: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312282.821970: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.821974: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312282.821982: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312282.821987: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312282.822000: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.822004: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312282.822012: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312282.822016: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312282.822031: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312282.825232: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312282.825236: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312282.949794: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312282.949795: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312282.949801: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312282.949802: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNH3. 312282.949815: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNH3. 312282.949822: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d..2. 312282.949840: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kcompactd0 next_pid=49 next_prio=120
      kcompactd0-49      [003] d..2. 312282.949854: sched_switch: prev_comm=kcompactd0 prev_pid=49 prev_prio=120 prev_state=S ==> next_comm=kworker/3:1 next_pid=9750 next_prio=120
     kworker/3:1-9750    [003] d..2. 312282.949875: sched_switch: prev_comm=kworker/3:1 prev_pid=9750 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312282.950162: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312282.950167: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312283.269795: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312283.269796: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312283.269802: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312283.269804: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2. 312283.269817: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2. 312283.269820: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312283.269836: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
          <idle>-0       [003] d..2. 312283.269837: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1 next_pid=9750 next_prio=120
     kworker/3:1-9750    [003] d.h.. 312283.269862: irq_handler_entry: irq=11 name=arch_timer
     kworker/0:1-9798    [000] d..2. 312283.269864: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312283.269868: irq_handler_entry: irq=11 name=arch_timer
     kworker/3:1-9750    [003] d.h.. 312283.269868: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312283.269872: irq_handler_exit: irq=11 ret=handled
     kworker/3:1-9750    [003] d..2. 312283.269886: sched_switch: prev_comm=kworker/3:1 prev_pid=9750 prev_prio=120 prev_state=D ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312283.269887: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1. 312283.269892: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [003] d.h1. 312283.269899: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1. 312283.269907: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2. 312283.269915: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1 next_pid=9750 next_prio=120
     kworker/3:1-9750    [003] d..2. 312283.269933: sched_switch: prev_comm=kworker/3:1 prev_pid=9750 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312283.270973: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312283.270977: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312283.461799: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312283.461807: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNH3. 312283.461820: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNH3. 312283.461826: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d..2. 312283.461846: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kcompactd0 next_pid=49 next_prio=120
      kcompactd0-49      [003] d..2. 312283.461859: sched_switch: prev_comm=kcompactd0 prev_pid=49 prev_prio=120 prev_state=S ==> next_comm=kworker/3:1 next_pid=9750 next_prio=120
     kworker/3:1-9750    [003] d..2. 312283.461880: sched_switch: prev_comm=kworker/3:1 prev_pid=9750 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312283.462165: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312283.462169: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312283.557801: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312283.557808: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d..2. 312283.557835: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1 next_pid=9750 next_prio=120
     kworker/3:1-9750    [003] d..2. 312283.557855: sched_switch: prev_comm=kworker/3:1 prev_pid=9750 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312283.557859: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312283.557863: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312283.685802: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312283.685810: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNH2. 312283.685824: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNH2. 312283.685827: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d..2. 312283.685849: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1 next_pid=9750 next_prio=120
          <idle>-0       [000] d.h1. 312283.685867: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312283.685869: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312283.685870: irq_handler_entry: irq=40 name=mmc0
     kworker/3:1-9750    [003] d..2. 312283.685876: sched_switch: prev_comm=kworker/3:1 prev_pid=9750 prev_prio=120 prev_state=D ==> next_comm=kworker/3:2 next_pid=9599 next_prio=120
          <idle>-0       [000] d.h1. 312283.685884: irq_handler_exit: irq=40 ret=handled
     kworker/3:2-9599    [003] d..2. 312283.685892: sched_switch: prev_comm=kworker/3:2 prev_pid=9599 prev_prio=120 prev_state=I ==> next_comm=kworker/3:1 next_pid=9750 next_prio=120
     kworker/3:1-9750    [003] d..2. 312283.685913: sched_switch: prev_comm=kworker/3:1 prev_pid=9750 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312283.686602: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312283.686607: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312283.689804: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312283.689812: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312283.845802: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312283.845805: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312283.845810: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312283.845811: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2. 312283.845825: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2. 312283.845828: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312283.845844: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312283.845861: irq_handler_entry: irq=28 name=eth0
     kworker/0:1-9798    [000] d.h1. 312283.845864: irq_handler_exit: irq=28 ret=handled
     kworker/0:1-9798    [000] d..2. 312283.845872: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
     kworker/0:2-9753    [000] d..2. 312283.845885: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312283.845903: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312283.845908: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312283.845917: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312283.845922: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312283.845936: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312283.845940: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312283.845948: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312283.845953: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312283.845966: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312283.845970: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312283.845978: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312283.845983: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312283.845996: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312283.846000: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312283.846008: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312283.846013: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312283.846026: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312283.849108: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312283.849113: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312283.973804: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312283.973805: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312283.973811: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312283.973813: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNH3. 312283.973824: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNH3. 312283.973830: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d..2. 312283.973848: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kcompactd0 next_pid=49 next_prio=120
      kcompactd0-49      [003] d..2. 312283.973861: sched_switch: prev_comm=kcompactd0 prev_pid=49 prev_prio=120 prev_state=S ==> next_comm=kworker/3:1 next_pid=9750 next_prio=120
     kworker/3:1-9750    [003] d..2. 312283.973881: sched_switch: prev_comm=kworker/3:1 prev_pid=9750 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312283.974167: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312283.974171: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312284.194220: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1. 312284.194236: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1. 312284.194238: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312284.194239: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] dNh1. 312284.194242: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1. 312284.194245: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312284.194254: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] dNh1. 312284.194277: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] dNh1. 312284.194281: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] dNh1. 312284.194282: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] dNh1. 312284.194284: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312284.194294: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
     kworker/0:2-9753    [000] d..2. 312284.194306: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312284.194342: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312284.194347: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312284.194355: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312284.194357: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312284.194358: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312284.194374: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312284.194399: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312284.194403: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312284.194407: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312284.194408: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312284.194410: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312284.194412: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312284.194416: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312284.194417: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312284.194418: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312284.194432: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312284.194453: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312284.194478: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312284.194482: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312284.194486: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312284.194487: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312284.194489: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312284.194504: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312284.194516: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312284.197510: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1. 312284.197521: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312284.197526: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312284.197541: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312284.197545: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312284.197549: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312284.197550: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312284.197552: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312284.197565: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312284.197599: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312284.197603: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312284.197613: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312284.197614: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312284.197615: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312284.197629: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312284.197721: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312284.197726: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312284.197736: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312284.197737: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312284.197739: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312284.197755: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312284.197770: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312284.197804: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312284.197807: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312284.197815: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312284.197819: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312284.197855: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d..2. 312284.197857: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
          <idle>-0       [003] dNh1. 312284.197863: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2. 312284.197872: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_preempt next_pid=18 next_prio=120
   kworker/u17:1-9290    [000] d..2. 312284.197879: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
     rcu_preempt-18      [003] d..2. 312284.197893: sched_switch: prev_comm=rcu_preempt prev_pid=18 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312284.197897: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312284.197901: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312284.201807: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312284.201818: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312284.205807: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312284.205814: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312284.205825: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1. 312284.205832: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2. 312284.205839: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_preempt next_pid=18 next_prio=120
     rcu_preempt-18      [003] d..2. 312284.205854: sched_switch: prev_comm=rcu_preempt prev_pid=18 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312284.209807: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312284.209815: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312284.209833: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312284.209845: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312284.213807: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312284.213816: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312284.213826: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1. 312284.213835: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2. 312284.213842: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_preempt next_pid=18 next_prio=120
     rcu_preempt-18      [003] d..2. 312284.213859: sched_switch: prev_comm=rcu_preempt prev_pid=18 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312284.217807: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312284.217815: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312284.222044: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1. 312284.222059: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312284.222068: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=thd next_pid=455 next_prio=120
             thd-455     [000] d..2. 312284.222133: sched_switch: prev_comm=thd prev_pid=455 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312284.225810: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312284.225823: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312284.225853: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312284.225876: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312284.225881: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312284.225885: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312284.225887: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312284.225889: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312284.225905: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312284.225921: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312284.225925: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312284.225929: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312284.225930: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312284.225931: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312284.225945: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312284.225959: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312284.225963: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312284.225967: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312284.225968: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312284.225969: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312284.225982: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312284.225994: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312284.229808: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312284.229819: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312284.229902: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312284.229923: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312284.229927: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312284.229931: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312284.229932: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312284.229934: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312284.229958: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312284.229970: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=ksoftirqd/0 next_pid=17 next_prio=120
     ksoftirqd/0-17      [000] d..2. 312284.229978: sched_switch: prev_comm=ksoftirqd/0 prev_pid=17 prev_prio=120 prev_state=S ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312284.230000: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312284.232965: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1. 312284.232977: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312284.232982: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312284.232998: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312284.233002: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312284.233006: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312284.233007: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312284.233008: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312284.233023: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312284.233058: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312284.233062: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312284.233070: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312284.233071: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312284.233073: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312284.233075: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312284.233079: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312284.233080: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312284.233081: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312284.233095: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312284.233113: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312284.233807: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312284.233820: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312284.233836: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1. 312284.233844: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2. 312284.233851: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_preempt next_pid=18 next_prio=120
     rcu_preempt-18      [003] d..2. 312284.233864: sched_switch: prev_comm=rcu_preempt prev_pid=18 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312284.237807: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312284.237816: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312284.241807: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312284.241814: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312284.241824: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1. 312284.241832: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2. 312284.241838: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_preempt next_pid=18 next_prio=120
     rcu_preempt-18      [003] d..2. 312284.241850: sched_switch: prev_comm=rcu_preempt prev_pid=18 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312284.245807: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312284.245815: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312284.245834: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312284.245848: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312284.245851: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312284.245856: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312284.249807: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312284.249816: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312284.249826: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1. 312284.249833: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2. 312284.249840: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_preempt next_pid=18 next_prio=120
     rcu_preempt-18      [003] d..2. 312284.249854: sched_switch: prev_comm=rcu_preempt prev_pid=18 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312284.249858: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312284.249862: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312284.253807: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312284.253815: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312284.261809: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312284.261819: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312284.261847: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312284.261867: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312284.261872: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312284.261875: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312284.261876: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312284.261878: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312284.261893: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312284.261908: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312284.261912: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312284.261915: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312284.261916: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312284.261918: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312284.261931: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312284.261946: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312284.261949: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312284.261953: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312284.261954: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312284.261955: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312284.261968: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312284.261979: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312284.277810: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312284.277818: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312284.485810: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312284.485817: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312284.485826: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.H1. 312284.485830: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1. 312284.485835: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2. 312284.485842: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kcompactd0 next_pid=49 next_prio=120
          <idle>-0       [000] dNH1. 312284.485844: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312284.485856: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
      kcompactd0-49      [003] d..2. 312284.485856: sched_switch: prev_comm=kcompactd0 prev_pid=49 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312284.485860: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312284.485864: irq_handler_exit: irq=11 ret=handled
     kworker/0:1-9798    [000] d..2. 312284.485876: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312284.485880: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312284.485884: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312284.581812: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312284.581819: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312284.581847: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312284.581870: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312284.581874: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312284.581878: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312284.709813: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312284.709820: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2. 312284.709836: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2. 312284.709839: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312284.709859: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312284.709894: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312284.709899: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312284.709904: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312284.709906: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312284.709907: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312284.709908: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312284.709922: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d..2. 312284.709929: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312284.709944: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312284.710951: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312284.710955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312284.713812: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312284.713822: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312284.869815: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312284.869821: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2. 312284.869835: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2. 312284.869838: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312284.869856: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312284.869876: irq_handler_entry: irq=28 name=eth0
     kworker/0:1-9798    [000] d.h1. 312284.869880: irq_handler_exit: irq=28 ret=handled
     kworker/0:1-9798    [000] d..2. 312284.869887: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
     kworker/0:2-9753    [000] d..2. 312284.869899: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312284.869917: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312284.869922: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312284.869931: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312284.869937: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312284.869951: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312284.869955: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312284.869963: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312284.869967: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312284.869981: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312284.869985: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312284.869992: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312284.869997: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312284.870010: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312284.870014: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312284.870022: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312284.870027: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312284.870041: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312284.873140: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312284.873145: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312284.997817: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312284.997824: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312284.997834: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.H1. 312284.997838: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1. 312284.997842: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2. 312284.997849: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kcompactd0 next_pid=49 next_prio=120
          <idle>-0       [000] dNH1. 312284.997850: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312284.997862: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
      kcompactd0-49      [003] d..2. 312284.997863: sched_switch: prev_comm=kcompactd0 prev_pid=49 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312284.997867: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312284.997871: irq_handler_exit: irq=11 ret=handled
     kworker/0:1-9798    [000] d..2. 312284.997881: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312284.997884: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312284.997888: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312285.285818: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312285.285825: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2. 312285.285840: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2. 312285.285843: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312285.285862: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312285.285895: irq_handler_entry: irq=11 name=arch_timer
     kworker/0:1-9798    [000] d.h1. 312285.285901: irq_handler_exit: irq=11 ret=handled
     kworker/0:1-9798    [000] d..2. 312285.285916: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312285.285921: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] dNh1. 312285.285931: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [000] d..2. 312285.285936: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312285.285952: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312285.286765: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312285.286770: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312285.368645: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1. 312285.368657: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312285.368666: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=wpa_supplicant next_pid=521 next_prio=120
  wpa_supplicant-521     [000] d..2. 312285.368772: sched_switch: prev_comm=wpa_supplicant prev_pid=521 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312285.368779: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312285.368784: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312285.406391: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1. 312285.406407: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNh1. 312285.406409: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1. 312285.406416: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312285.406427: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=gmain next_pid=561 next_prio=120
           gmain-561     [000] d..2. 312285.406548: sched_switch: prev_comm=gmain prev_pid=561 prev_prio=120 prev_state=S ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312285.406575: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312285.409821: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312285.409835: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312285.409853: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1. 312285.409861: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2. 312285.409867: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_preempt next_pid=18 next_prio=120
     rcu_preempt-18      [003] d..2. 312285.409883: sched_switch: prev_comm=rcu_preempt prev_pid=18 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312285.409886: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312285.409890: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312285.413820: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312285.413829: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312285.417820: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312285.417827: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312285.417837: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1. 312285.417845: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2. 312285.417851: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_preempt next_pid=18 next_prio=120
     rcu_preempt-18      [003] d..2. 312285.417863: sched_switch: prev_comm=rcu_preempt prev_pid=18 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312285.421820: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312285.421828: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312285.425820: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312285.425827: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312285.425836: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1. 312285.425844: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2. 312285.425851: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_preempt next_pid=18 next_prio=120
     rcu_preempt-18      [003] d..2. 312285.425863: sched_switch: prev_comm=rcu_preempt prev_pid=18 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312285.429820: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312285.429828: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312285.509822: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312285.509828: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312285.509837: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.H1. 312285.509841: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1. 312285.509845: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2. 312285.509852: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kcompactd0 next_pid=49 next_prio=120
          <idle>-0       [000] dNH1. 312285.509855: irq_handler_exit: irq=6 ret=handled
      kcompactd0-49      [003] d..2. 312285.509865: sched_switch: prev_comm=kcompactd0 prev_pid=49 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312285.509869: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d..2. 312285.509870: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
          <idle>-0       [003] d.h1. 312285.509873: irq_handler_exit: irq=11 ret=handled
     kworker/0:1-9798    [000] d..2. 312285.509889: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312285.509893: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312285.509897: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312285.605823: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312285.605830: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312285.605858: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312285.605881: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312285.605885: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312285.605889: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312285.733825: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312285.733832: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2. 312285.733846: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2. 312285.733849: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312285.733866: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] dNh1. 312285.733894: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] dNh1. 312285.733897: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] dNh1. 312285.733898: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] dNh1. 312285.733906: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d..2. 312285.733913: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
     kworker/0:2-9753    [000] d..2. 312285.733926: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312285.733950: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312285.734938: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312285.734942: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312285.737823: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312285.737833: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312285.893825: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312285.893832: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2. 312285.893846: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2. 312285.893849: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312285.893867: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312285.893886: irq_handler_entry: irq=28 name=eth0
     kworker/0:1-9798    [000] d.h1. 312285.893889: irq_handler_exit: irq=28 ret=handled
     kworker/0:1-9798    [000] d..2. 312285.893896: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
     kworker/0:2-9753    [000] d..2. 312285.893907: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312285.893926: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312285.893930: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312285.893940: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312285.893945: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312285.893958: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312285.893962: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312285.893970: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312285.893975: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312285.893989: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312285.893993: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312285.894001: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312285.894006: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312285.894019: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312285.894023: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312285.894030: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312285.894035: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312285.894049: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312285.897110: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312285.897114: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1. 312285.968769: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1. 312285.968788: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d..2. 312285.968799: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=forkTest next_pid=9797 next_prio=120
          <idle>-0       [000] d.h1. 312285.968816: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1. 312285.968835: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312285.968844: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=forkTest next_pid=9796 next_prio=120
        forkTest-9797    [001] d..2. 312285.968856: sched_switch: prev_comm=forkTest prev_pid=9797 prev_prio=120 prev_state=S ==> next_comm=swapper/1 next_pid=0 next_prio=120
        forkTest-9796    [000] d..2. 312285.968884: sched_switch: prev_comm=forkTest prev_pid=9796 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312285.968890: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312285.968895: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1. 312285.970148: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1. 312285.970153: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312286.021829: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312286.021838: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312286.021849: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1. 312286.021857: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1. 312286.021859: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1. 312286.021867: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d..2. 312286.021874: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1 next_pid=9750 next_prio=120
     kworker/3:1-9750    [003] d..2. 312286.021890: sched_switch: prev_comm=kworker/3:1 prev_pid=9750 prev_prio=120 prev_state=I ==> next_comm=kcompactd0 next_pid=49 next_prio=120
      kcompactd0-49      [003] d..2. 312286.021909: sched_switch: prev_comm=kcompactd0 prev_pid=49 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312286.022136: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312286.022140: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312286.533829: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312286.533837: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNH3. 312286.533850: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNH3. 312286.533856: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d..2. 312286.533877: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kcompactd0 next_pid=49 next_prio=120
      kcompactd0-49      [003] d..2. 312286.533890: sched_switch: prev_comm=kcompactd0 prev_pid=49 prev_prio=120 prev_state=S ==> next_comm=kworker/3:1 next_pid=9750 next_prio=120
     kworker/3:1-9750    [003] d..2. 312286.533909: sched_switch: prev_comm=kworker/3:1 prev_pid=9750 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312286.534185: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312286.534189: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312286.629829: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312286.629833: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312286.629836: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312286.629840: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312286.629868: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312286.629898: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312286.629902: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312286.629906: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312286.757834: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312286.757836: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312286.757842: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312286.757844: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2. 312286.757859: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2. 312286.757862: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312286.757878: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] dNh1. 312286.757905: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] dNh1. 312286.757908: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] dNh1. 312286.757909: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] dNh1. 312286.757917: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d..2. 312286.757924: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
     kworker/0:2-9753    [000] d..2. 312286.757938: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312286.757962: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312286.758953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312286.758958: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312286.761834: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312286.761844: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312286.917836: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312286.917837: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312286.917843: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312286.917843: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2. 312286.917857: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2. 312286.917861: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312286.917876: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312286.917894: irq_handler_entry: irq=28 name=eth0
     kworker/0:1-9798    [000] d.h1. 312286.917898: irq_handler_exit: irq=28 ret=handled
     kworker/0:1-9798    [000] d..2. 312286.917904: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
     kworker/0:2-9753    [000] d..2. 312286.917915: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312286.917934: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312286.917939: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312286.917948: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312286.917954: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312286.917968: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312286.917972: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312286.917980: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312286.917985: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312286.917998: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312286.918002: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312286.918010: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312286.918015: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312286.918028: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312286.918033: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312286.918040: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312286.918047: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312286.918061: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312286.921171: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312286.921175: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312287.045837: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312287.045839: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312287.045845: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312287.045845: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNH3. 312287.045858: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNH3. 312287.045864: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d..2. 312287.045882: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1 next_pid=9750 next_prio=120
     kworker/3:1-9750    [003] d..2. 312287.045898: sched_switch: prev_comm=kworker/3:1 prev_pid=9750 prev_prio=120 prev_state=I ==> next_comm=kcompactd0 next_pid=49 next_prio=120
      kcompactd0-49      [003] d..2. 312287.045914: sched_switch: prev_comm=kcompactd0 prev_pid=49 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312287.046143: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312287.046147: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312287.301838: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312287.301840: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312287.301845: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312287.301847: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2. 312287.301860: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2. 312287.301863: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312287.301878: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312287.301897: irq_handler_entry: irq=11 name=arch_timer
     kworker/0:1-9798    [000] d.h1. 312287.301903: irq_handler_exit: irq=11 ret=handled
     kworker/0:1-9798    [000] dNh1. 312287.301919: irq_handler_entry: irq=14 name=fe00b880.mailbox
     kworker/0:1-9798    [000] dNh1. 312287.301922: irq_handler_exit: irq=14 ret=handled
     kworker/0:1-9798    [000] d..2. 312287.301928: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
     kworker/0:2-9753    [000] d..2. 312287.301940: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312287.301963: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312287.302814: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312287.302818: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312287.525841: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312287.525843: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312287.525848: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312287.525850: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.H1. 312287.525860: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNH1. 312287.525871: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312287.525879: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
          <idle>-0       [003] d..2. 312287.525884: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1 next_pid=9750 next_prio=120
     kworker/3:1-9750    [003] d..2. 312287.525902: sched_switch: prev_comm=kworker/3:1 prev_pid=9750 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312287.525906: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312287.525910: irq_handler_exit: irq=11 ret=handled
   kworker/u17:1-9290    [000] d..2. 312287.525916: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312287.525920: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312287.525924: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312287.557845: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312287.557852: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312287.557862: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1. 312287.557870: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2. 312287.557878: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kcompactd0 next_pid=49 next_prio=120
      kcompactd0-49      [003] d..2. 312287.557890: sched_switch: prev_comm=kcompactd0 prev_pid=49 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312287.653844: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312287.653846: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312287.653850: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312287.653853: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2. 312287.653864: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2. 312287.653868: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312287.653882: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312287.653907: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312287.653911: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312287.653915: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312287.781847: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312287.781848: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312287.781854: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312287.781854: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2. 312287.781869: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2. 312287.781872: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312287.781887: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312287.781912: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312287.781914: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d.h1. 312287.781915: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312287.781922: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d..2. 312287.781930: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
     kworker/0:2-9753    [000] d..2. 312287.781942: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312287.781961: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312287.782861: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312287.782865: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312287.785845: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312287.785855: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312287.941847: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312287.941848: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312287.941854: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312287.941854: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2. 312287.941868: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2. 312287.941871: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312287.941886: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] dNh1. 312287.941904: irq_handler_entry: irq=28 name=eth0
     kworker/0:1-9798    [000] dNh1. 312287.941907: irq_handler_exit: irq=28 ret=handled
     kworker/0:1-9798    [000] d..2. 312287.941913: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
     kworker/0:2-9753    [000] d..2. 312287.941925: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312287.941946: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312287.941951: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312287.941960: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312287.941965: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312287.941979: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312287.941983: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312287.941991: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312287.941996: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312287.942010: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312287.942014: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312287.942022: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312287.942027: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312287.942040: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312287.942044: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312287.942052: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312287.942056: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312287.942070: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312287.945145: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312287.945149: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312288.069850: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312288.069850: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312288.069857: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312288.069857: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNH3. 312288.069871: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNH3. 312288.069877: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d..2. 312288.069894: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kcompactd0 next_pid=49 next_prio=120
      kcompactd0-49      [003] d..2. 312288.069906: sched_switch: prev_comm=kcompactd0 prev_pid=49 prev_prio=120 prev_state=S ==> next_comm=kworker/3:1 next_pid=9750 next_prio=120
     kworker/3:1-9750    [003] d..2. 312288.069925: sched_switch: prev_comm=kworker/3:1 prev_pid=9750 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312288.070193: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312288.070197: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1. 312288.408186: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] dNh1. 312288.408200: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] dNh1. 312288.408202: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1. 312288.408210: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d..2. 312288.408219: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=NetworkManager next_pid=516 next_prio=120
          <idle>-0       [000] d.h1. 312288.408403: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1. 312288.408412: irq_handler_exit: irq=2 ret=handled
  NetworkManager-516     [002] d..2. 312288.408415: sched_switch: prev_comm=NetworkManager prev_pid=516 prev_prio=120 prev_state=S ==> next_comm=kworker/2:1 next_pid=9595 next_prio=120
          <idle>-0       [000] d..2. 312288.408422: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
     kworker/2:1-9595    [002] d..2. 312288.408445: sched_switch: prev_comm=kworker/2:1 prev_pid=9595 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
   kworker/u21:0-89      [000] d..2. 312288.408450: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.408454: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312288.408459: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312288.408460: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.408464: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.408466: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.408468: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312288.408485: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312288.408497: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.409462: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312288.409466: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312288.411468: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1. 312288.411482: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1. 312288.411483: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312288.411484: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] dNh1. 312288.411491: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1. 312288.411498: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312288.411503: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312288.411517: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312288.411521: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312288.411525: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312288.411526: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312288.411529: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312288.411543: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312288.411562: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312288.411566: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312288.411569: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312288.411570: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312288.411572: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312288.411585: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312288.411616: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312288.411620: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312288.411675: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312288.411677: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312288.411678: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312288.411696: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.411710: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.411714: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.411716: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.411717: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312288.411737: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
          <idle>-0       [002] d.h1. 312288.411757: irq_handler_entry: irq=2 name=IPI
   kworker/u21:0-89      [000] d..2. 312288.411760: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
          <idle>-0       [002] dNh1. 312288.411770: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d..2. 312288.411779: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=NetworkManager next_pid=516 next_prio=120
     kworker/0:1-9798    [000] d..2. 312288.411784: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.411789: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.411793: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.411794: irq_handler_entry: irq=40 name=mmc0
  NetworkManager-516     [002] d..2. 312288.411795: sched_switch: prev_comm=NetworkManager prev_pid=516 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.411796: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312288.411811: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312288.411836: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.411840: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.411847: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.411848: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.411850: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312288.411864: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312288.411887: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.411891: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.411895: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.411896: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.411898: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312288.411900: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.411904: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.411905: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.411906: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312288.411919: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312288.411939: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312288.411979: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.411984: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.411993: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.411994: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.411996: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312288.412012: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312288.412068: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.412073: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.412076: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.412077: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.412079: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312288.412092: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.412152: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.412153: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.412155: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312288.412174: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
          <idle>-0       [002] d.h1. 312288.412187: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1. 312288.412195: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d..2. 312288.412203: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=NetworkManager next_pid=516 next_prio=120
   kworker/u21:0-89      [000] d..2. 312288.412211: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.412215: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.412225: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.412226: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.412227: irq_handler_exit: irq=40 ret=unhandled
  NetworkManager-516     [002] d..2. 312288.412239: sched_switch: prev_comm=NetworkManager prev_pid=516 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d..2. 312288.412243: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312288.412263: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.412268: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.412271: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.412272: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.412274: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312288.412288: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312288.412316: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.412320: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.412340: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.412342: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.412343: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312288.412361: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.412364: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.412365: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.412367: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312288.412385: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
          <idle>-0       [002] d.h1. 312288.412396: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1. 312288.412405: irq_handler_exit: irq=2 ret=handled
   kworker/u21:0-89      [000] d..2. 312288.412409: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] d..2. 312288.412413: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=NetworkManager next_pid=516 next_prio=120
  NetworkManager-516     [002] d..2. 312288.412429: sched_switch: prev_comm=NetworkManager prev_pid=516 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.412729: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1. 312288.412744: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1. 312288.412745: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312288.412746: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312288.412755: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312288.412773: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.412776: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.412780: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.412781: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.412783: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312288.412797: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312288.412820: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.412824: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.412830: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.412832: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.412833: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312288.412846: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312288.412869: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.412873: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.412877: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.412878: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.412880: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312288.412882: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.412885: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.412886: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.412888: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312288.412900: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312288.412921: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312288.412954: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.412958: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.412968: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.412969: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.412970: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312288.412985: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312288.413028: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.413032: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.413053: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.413054: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.413056: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312288.413071: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
          <idle>-0       [002] d.h1. 312288.413082: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1. 312288.413090: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d..2. 312288.413098: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=NetworkManager next_pid=516 next_prio=120
   kworker/u21:0-89      [000] d..2. 312288.413105: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.413109: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.413119: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.413120: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.413121: irq_handler_exit: irq=40 ret=unhandled
  NetworkManager-516     [002] d..2. 312288.413128: sched_switch: prev_comm=NetworkManager prev_pid=516 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d..2. 312288.413136: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312288.413156: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.413160: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.413164: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.413165: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.413167: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312288.413180: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312288.413208: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.413212: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.413232: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.413234: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.413235: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312288.413252: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.413256: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.413257: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.413258: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312288.413276: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
          <idle>-0       [002] d.h1. 312288.413288: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1. 312288.413297: irq_handler_exit: irq=2 ret=handled
   kworker/u21:0-89      [000] d..2. 312288.413299: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] d..2. 312288.413304: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=NetworkManager next_pid=516 next_prio=120
  NetworkManager-516     [002] d..2. 312288.413318: sched_switch: prev_comm=NetworkManager prev_pid=516 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.413423: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1. 312288.413438: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1. 312288.413439: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312288.413441: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312288.413449: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312288.413466: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.413470: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.413474: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.413475: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.413477: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312288.413490: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312288.413514: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.413518: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.413524: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.413525: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.413526: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312288.413540: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312288.413563: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.413567: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.413571: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.413572: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.413573: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312288.413575: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.413579: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.413580: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.413581: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312288.413594: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312288.413612: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312288.413645: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.413649: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.413658: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.413659: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.413661: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312288.413675: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312288.413718: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.413723: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.413742: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.413743: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.413745: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312288.413760: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
          <idle>-0       [002] d.h1. 312288.413770: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1. 312288.413778: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d..2. 312288.413786: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=NetworkManager next_pid=516 next_prio=120
   kworker/u21:0-89      [000] d..2. 312288.413792: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.413797: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.413806: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.413807: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.413809: irq_handler_exit: irq=40 ret=unhandled
  NetworkManager-516     [002] d..2. 312288.413818: sched_switch: prev_comm=NetworkManager prev_pid=516 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d..2. 312288.413823: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312288.413843: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.413847: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.413851: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.413852: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.413853: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312288.413856: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312288.413866: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312288.413896: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d.h.. 312288.413923: irq_handler_entry: irq=40 name=mmc1
   kworker/u21:0-89      [000] d.h.. 312288.413926: irq_handler_exit: irq=40 ret=handled
   kworker/u21:0-89      [000] d.h.. 312288.413927: irq_handler_entry: irq=40 name=mmc0
   kworker/u21:0-89      [000] d.h.. 312288.413929: irq_handler_exit: irq=40 ret=unhandled
   kworker/u21:0-89      [000] d..2. 312288.413962: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
          <idle>-0       [002] d.h1. 312288.413975: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1. 312288.413983: irq_handler_exit: irq=2 ret=handled
     kworker/0:1-9798    [000] d..2. 312288.413984: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] d..2. 312288.413991: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:1 next_pid=9595 next_prio=120
     kworker/2:1-9595    [002] d..2. 312288.414017: sched_switch: prev_comm=kworker/2:1 prev_pid=9595 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.414071: irq_handler_entry: irq=15 name=DMA IRQ
          <idle>-0       [000] d.h1. 312288.414074: irq_handler_exit: irq=15 ret=handled
          <idle>-0       [000] d.h1. 312288.414096: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.414100: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.414101: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.414102: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312288.414123: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
          <idle>-0       [002] d.h1. 312288.414135: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1. 312288.414143: irq_handler_exit: irq=2 ret=handled
   kworker/u21:0-89      [000] d..2. 312288.414149: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] d..2. 312288.414152: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=NetworkManager next_pid=516 next_prio=120
          <idle>-0       [000] d.h1. 312288.414162: irq_handler_entry: irq=40 name=mmc1
  NetworkManager-516     [002] d..2. 312288.414165: sched_switch: prev_comm=NetworkManager prev_pid=516 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] dNh1. 312288.414177: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1. 312288.414178: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312288.414180: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312288.414188: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312288.414208: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.414212: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.414216: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.414217: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.414219: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312288.414233: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312288.414257: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.414261: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.414267: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.414268: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.414270: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312288.414283: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312288.414306: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.414310: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.414314: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.414315: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.414317: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312288.414319: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.414323: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.414324: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.414325: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312288.414338: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312288.414357: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312288.414389: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.414394: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.414403: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.414404: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.414406: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312288.414420: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d.h1. 312288.414460: irq_handler_entry: irq=40 name=mmc1
   kworker/u21:0-89      [000] d.h1. 312288.414463: irq_handler_exit: irq=40 ret=handled
   kworker/u21:0-89      [000] d.h1. 312288.414464: irq_handler_entry: irq=40 name=mmc0
   kworker/u21:0-89      [000] d.h1. 312288.414466: irq_handler_exit: irq=40 ret=unhandled
   kworker/u21:0-89      [000] d..2. 312288.414490: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.414576: irq_handler_entry: irq=15 name=DMA IRQ
          <idle>-0       [000] d.h1. 312288.414578: irq_handler_exit: irq=15 ret=handled
          <idle>-0       [000] d.h1. 312288.414580: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.414583: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.414584: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.414586: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312288.414611: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
          <idle>-0       [002] d.h1. 312288.414624: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1. 312288.414632: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d..2. 312288.414640: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=NetworkManager next_pid=516 next_prio=120
   kworker/u21:0-89      [000] d..2. 312288.414648: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.414653: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.414662: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.414663: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.414665: irq_handler_exit: irq=40 ret=unhandled
  NetworkManager-516     [002] d..2. 312288.414671: sched_switch: prev_comm=NetworkManager prev_pid=516 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d..2. 312288.414680: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312288.414701: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.414705: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.414709: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.414710: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.414711: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312288.414725: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312288.414753: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.414757: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.414763: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.414764: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.414766: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312288.414768: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.414771: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.414772: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.414774: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312288.414788: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d.h.. 312288.414792: irq_handler_entry: irq=40 name=mmc1
   kworker/u21:0-89      [000] d.h.. 312288.414803: irq_handler_exit: irq=40 ret=handled
   kworker/u21:0-89      [000] d.h.. 312288.414804: irq_handler_entry: irq=40 name=mmc0
   kworker/u21:0-89      [000] d.h.. 312288.414805: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1. 312288.414816: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1. 312288.414825: irq_handler_exit: irq=2 ret=handled
   kworker/u21:0-89      [000] d..2. 312288.414827: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
          <idle>-0       [002] d..2. 312288.414833: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=NetworkManager next_pid=516 next_prio=120
     kworker/0:1-9798    [000] d..2. 312288.414846: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
  NetworkManager-516     [002] d..2. 312288.414850: sched_switch: prev_comm=NetworkManager prev_pid=516 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.414850: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.414854: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.414855: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.414856: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312288.414871: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312288.414894: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.414898: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.414904: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.414906: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.414907: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312288.414921: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312288.414944: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.414948: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.414952: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.414953: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.414954: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312288.414956: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.414960: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.414961: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.414962: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312288.414975: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312288.414993: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312288.415025: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.415029: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.415038: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.415040: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.415041: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312288.415056: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
          <idle>-0       [002] d.h1. 312288.415084: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1. 312288.415093: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d..2. 312288.415100: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=NetworkManager next_pid=516 next_prio=120
   kworker/u21:0-89      [000] d..2. 312288.415107: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.415112: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.415122: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.415123: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.415125: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312288.415141: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312288.415156: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312288.415523: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1. 312288.415535: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2. 312288.415544: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=gdbus next_pid=562 next_prio=120
  NetworkManager-516     [002] d..2. 312288.415600: sched_switch: prev_comm=NetworkManager prev_pid=516 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
           gdbus-562     [003] d..2. 312288.415734: sched_switch: prev_comm=gdbus prev_pid=562 prev_prio=120 prev_state=S ==> next_comm=dbus-daemon next_pid=442 next_prio=120
     dbus-daemon-442     [003] d..2. 312288.416003: sched_switch: prev_comm=dbus-daemon prev_pid=442 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312288.422686: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312288.422692: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312288.429854: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312288.429866: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312288.429886: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1. 312288.429896: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d..2. 312288.429904: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312288.429918: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.445854: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312288.445855: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312288.445862: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312288.445862: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312288.445891: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312288.445915: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.445920: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.445924: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.445925: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.445927: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312288.445943: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312288.445958: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.445962: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.445966: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.445967: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.445969: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312288.445982: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312288.445996: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.446000: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312288.446004: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312288.446005: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312288.446006: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312288.446019: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312288.446030: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] d.h1. 312288.555358: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1. 312288.555365: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1. 312288.555367: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1. 312288.555382: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d..2. 312288.555390: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:1 next_pid=9595 next_prio=120
     kworker/2:1-9595    [002] d..2. 312288.555412: sched_switch: prev_comm=kworker/2:1 prev_pid=9595 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [002] d.h1. 312288.555416: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1. 312288.555420: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1. 312288.581855: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312288.581855: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312288.581856: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312288.581862: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312288.581864: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1. 312288.581865: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d..2. 312288.581894: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kcompactd0 next_pid=49 next_prio=120
      kcompactd0-49      [003] d..2. 312288.581915: sched_switch: prev_comm=kcompactd0 prev_pid=49 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312288.581919: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312288.581923: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1. 312288.677855: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312288.677856: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312288.677856: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312288.677862: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1. 312288.677862: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312288.677863: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2. 312288.677878: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2. 312288.677882: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312288.677896: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312288.677926: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.677930: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312288.677934: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312288.805856: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1. 312288.805859: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312288.805864: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1. 312288.805866: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2. 312288.805878: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2. 312288.805881: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312288.805896: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312288.805926: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312288.805928: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d.h1. 312288.805929: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312288.805938: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d..2. 312288.805947: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
     kworker/0:2-9753    [000] d..2. 312288.805960: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312288.805980: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.806945: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312288.806949: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312288.809856: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312288.809866: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1. 312288.965858: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312288.965859: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1. 312288.965865: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312288.965865: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.H1. 312288.965874: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNH1. 312288.965887: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312288.965891: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
          <idle>-0       [002] d..2. 312288.965900: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/2:1 next_pid=9595 next_prio=120
     kworker/0:1-9798    [000] d..2. 312288.965912: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.965917: irq_handler_entry: irq=11 name=arch_timer
     kworker/2:1-9595    [002] d..2. 312288.965918: sched_switch: prev_comm=kworker/2:1 prev_pid=9595 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.965921: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1. 312288.965922: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312288.965923: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [002] d.h1. 312288.965926: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNh1. 312288.965932: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312288.965937: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312288.965952: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.965956: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312288.965964: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312288.965969: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312288.965983: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.965987: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312288.965995: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312288.966000: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312288.966013: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.966017: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312288.966025: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312288.966030: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312288.966043: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.966047: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312288.966054: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312288.966059: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312288.966073: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312288.969185: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312288.969189: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1. 312288.973685: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1. 312288.973701: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d..2. 312288.973712: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=nmbd next_pid=632 next_prio=120
            nmbd-632     [001] d.h.. 312288.973862: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312288.973885: irq_handler_entry: irq=2 name=IPI
            nmbd-632     [001] d.h.. 312288.973886: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312288.973888: irq_handler_exit: irq=2 ret=handled
            nmbd-632     [001] d..2. 312288.974001: sched_switch: prev_comm=nmbd prev_pid=632 prev_prio=120 prev_state=S ==> next_comm=kworker/1:0 next_pid=9766 next_prio=120
     kworker/1:0-9766    [001] d..2. 312288.974071: sched_switch: prev_comm=kworker/1:0 prev_pid=9766 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0       [001] d.h1. 312288.981017: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1. 312288.981021: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312289.093857: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312289.093858: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1. 312289.093859: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312289.093864: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312289.093865: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1. 312289.093868: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNH3. 312289.093878: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNH3. 312289.093887: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d..2. 312289.093910: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1 next_pid=9750 next_prio=120
     kworker/3:1-9750    [003] d..2. 312289.093933: sched_switch: prev_comm=kworker/3:1 prev_pid=9750 prev_prio=120 prev_state=I ==> next_comm=kcompactd0 next_pid=49 next_prio=120
      kcompactd0-49      [003] d..2. 312289.093952: sched_switch: prev_comm=kcompactd0 prev_pid=49 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312289.094223: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312289.094228: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312289.227166: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1. 312289.227181: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNh1. 312289.227183: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1. 312289.227189: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312289.227199: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=thd next_pid=455 next_prio=120
             thd-455     [000] d..2. 312289.227260: sched_switch: prev_comm=thd prev_pid=455 prev_prio=120 prev_state=S ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312289.227287: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312289.227745: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312289.227750: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1. 312289.317861: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312289.317862: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312289.317863: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1. 312289.317867: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312289.317870: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312289.317871: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d..2. 312289.317901: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=9766 next_prio=120
          <idle>-0       [000] d..2. 312289.317903: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312289.317925: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
     kworker/1:0-9766    [001] d.h.. 312289.317928: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312289.317929: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312289.317933: irq_handler_exit: irq=11 ret=handled
     kworker/1:0-9766    [001] d.h.. 312289.317935: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312289.317949: irq_handler_entry: irq=14 name=fe00b880.mailbox
     kworker/1:0-9766    [001] d..2. 312289.317953: sched_switch: prev_comm=kworker/1:0 prev_pid=9766 prev_prio=120 prev_state=D ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312289.317955: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [001] d.h1. 312289.317958: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1. 312289.317968: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d..2. 312289.317972: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=9766 next_prio=120
     kworker/1:0-9766    [001] d..2. 312289.317991: sched_switch: prev_comm=kworker/1:0 prev_pid=9766 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0       [001] d.h1. 312289.318857: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1. 312289.318862: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312289.406573: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1. 312289.406591: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNh1. 312289.406592: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1. 312289.406599: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312289.406607: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=gmain next_pid=561 next_prio=120
           gmain-561     [000] d..2. 312289.406724: sched_switch: prev_comm=gmain prev_pid=561 prev_prio=120 prev_state=S ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312289.406752: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312289.407236: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312289.407241: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312289.409865: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312289.409877: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312289.409896: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1. 312289.409905: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2. 312289.409914: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_preempt next_pid=18 next_prio=120
     rcu_preempt-18      [003] d..2. 312289.409934: sched_switch: prev_comm=rcu_preempt prev_pid=18 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312289.409938: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312289.409942: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312289.413863: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312289.413872: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312289.417863: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312289.417870: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312289.417880: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1. 312289.417887: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2. 312289.417895: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_preempt next_pid=18 next_prio=120
     rcu_preempt-18      [003] d..2. 312289.417909: sched_switch: prev_comm=rcu_preempt prev_pid=18 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312289.421863: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312289.421871: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312289.425863: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312289.425870: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312289.425879: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1. 312289.425888: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2. 312289.425895: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_preempt next_pid=18 next_prio=120
     rcu_preempt-18      [003] d..2. 312289.425911: sched_switch: prev_comm=rcu_preempt prev_pid=18 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312289.429863: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312289.429871: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312289.605863: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1. 312289.605865: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312289.605870: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1. 312289.605873: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312289.605880: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] d.H1. 312289.605881: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1. 312289.605889: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNH1. 312289.605894: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d..2. 312289.605896: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kcompactd0 next_pid=49 next_prio=120
          <idle>-0       [001] d..2. 312289.605909: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=9766 next_prio=120
      kcompactd0-49      [003] d..2. 312289.605910: sched_switch: prev_comm=kcompactd0 prev_pid=49 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312289.605914: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312289.605918: irq_handler_exit: irq=11 ret=handled
     kworker/1:0-9766    [001] d..2. 312289.605927: sched_switch: prev_comm=kworker/1:0 prev_pid=9766 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0       [001] d.h1. 312289.605931: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1. 312289.605935: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1. 312289.701866: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312289.701868: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1. 312289.701874: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312289.701874: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312289.701903: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312289.701927: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312289.701931: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312289.701936: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1. 312289.829868: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312289.829869: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1. 312289.829874: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312289.829876: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNH2. 312289.829892: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2. 312289.829895: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312289.829905: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
          <idle>-0       [001] d..2. 312289.829911: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/1:0 next_pid=9766 next_prio=120
     kworker/0:1-9798    [000] d..2. 312289.829923: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312289.829926: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312289.829930: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312289.829935: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312289.829937: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312289.829939: irq_handler_entry: irq=40 name=mmc0
     kworker/1:0-9766    [001] d..2. 312289.829947: sched_switch: prev_comm=kworker/1:0 prev_pid=9766 prev_prio=120 prev_state=D ==> next_comm=kworker/1:1 next_pid=9800 next_prio=120
          <idle>-0       [000] d.h1. 312289.829956: irq_handler_exit: irq=40 ret=handled
     kworker/1:1-9800    [001] d..2. 312289.829961: sched_switch: prev_comm=kworker/1:1 prev_pid=9800 prev_prio=120 prev_state=I ==> next_comm=kworker/1:0 next_pid=9766 next_prio=120
     kworker/1:0-9766    [001] d..2. 312289.829984: sched_switch: prev_comm=kworker/1:0 prev_pid=9766 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
          <idle>-0       [001] d.h1. 312289.830669: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1. 312289.830673: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312289.833868: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312289.833878: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312289.989869: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312289.989876: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2. 312289.989890: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2. 312289.989894: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312289.989912: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] dNh1. 312289.989933: irq_handler_entry: irq=28 name=eth0
     kworker/0:1-9798    [000] dNh1. 312289.989936: irq_handler_exit: irq=28 ret=handled
     kworker/0:1-9798    [000] d..2. 312289.989943: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
     kworker/0:2-9753    [000] d..2. 312289.989955: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312289.989978: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312289.989982: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312289.989992: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312289.989997: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312289.990011: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312289.990015: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312289.990023: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312289.990028: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312289.990042: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312289.990046: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312289.990054: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312289.990058: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312289.990072: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312289.990076: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312289.990084: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312289.990088: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312289.990102: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312289.993251: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312289.993255: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312290.117871: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312290.117879: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312290.117889: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.H1. 312290.117893: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1. 312290.117897: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNH1. 312290.117903: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d..2. 312290.117905: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kcompactd0 next_pid=49 next_prio=120
          <idle>-0       [000] d..2. 312290.117916: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
      kcompactd0-49      [003] d..2. 312290.117918: sched_switch: prev_comm=kcompactd0 prev_pid=49 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312290.117922: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312290.117926: irq_handler_exit: irq=11 ret=handled
     kworker/0:1-9798    [000] d..2. 312290.117934: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.117938: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312290.117942: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312290.629873: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312290.629881: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2. 312290.629895: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2. 312290.629898: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1. 312290.629907: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1. 312290.629914: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d..2. 312290.629920: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
          <idle>-0       [003] d..2. 312290.629921: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kcompactd0 next_pid=49 next_prio=120
      kcompactd0-49      [003] d..2. 312290.629935: sched_switch: prev_comm=kcompactd0 prev_pid=49 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312290.629938: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312290.629942: irq_handler_exit: irq=11 ret=handled
     kworker/0:1-9798    [000] d..2. 312290.629945: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.629949: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312290.629954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312290.647640: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1. 312290.647654: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1. 312290.647656: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312290.647658: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.647667: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.647689: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.647692: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.647696: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.647698: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.647699: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.647714: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.647745: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.647749: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.647758: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.647759: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.647761: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.647774: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.647799: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.647802: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.647807: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.647808: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.647809: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312290.647811: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.647815: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.647816: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.647817: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.647830: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.647852: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.647880: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.647884: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.647888: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.647889: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.647891: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.647905: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.647918: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.650913: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1. 312290.650924: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312290.650932: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.650948: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.650952: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.650956: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.650957: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.650958: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.650973: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.651010: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.651014: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.651024: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.651025: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.651026: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.651040: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.651070: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.651074: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.651083: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.651084: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.651086: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.651099: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.651210: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d.h1. 312290.651222: irq_handler_entry: irq=40 name=mmc1
            sshd-9807    [000] d.h1. 312290.651233: irq_handler_exit: irq=40 ret=handled
            sshd-9807    [000] d.h1. 312290.651235: irq_handler_entry: irq=40 name=mmc0
            sshd-9807    [000] d.h1. 312290.651237: irq_handler_exit: irq=40 ret=unhandled
            sshd-9807    [000] d..2. 312290.651257: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.651278: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d..2. 312290.651542: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=S ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
   kworker/u17:1-9290    [000] d..2. 312290.651575: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=9820 next_prio=120
            bash-9820    [000] d..2. 312290.651707: sched_switch: prev_comm=bash prev_pid=9820 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
   kworker/u17:1-9290    [000] d..2. 312290.651725: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=R+ ==> next_comm=bash next_pid=9820 next_prio=120
            bash-9820    [000] d..2. 312290.651753: sched_switch: prev_comm=bash prev_pid=9820 prev_prio=120 prev_state=S ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
   kworker/u17:1-9290    [000] d..2. 312290.651764: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d..2. 312290.651968: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.652017: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d.h1. 312290.652023: irq_handler_entry: irq=40 name=mmc1
            sshd-9807    [000] d.h1. 312290.652035: irq_handler_exit: irq=40 ret=handled
            sshd-9807    [000] d.h1. 312290.652036: irq_handler_entry: irq=40 name=mmc0
            sshd-9807    [000] d.h1. 312290.652038: irq_handler_exit: irq=40 ret=unhandled
            sshd-9807    [000] d.h.. 312290.652043: irq_handler_entry: irq=40 name=mmc1
            sshd-9807    [000] d.h.. 312290.652047: irq_handler_exit: irq=40 ret=handled
            sshd-9807    [000] d.h.. 312290.652048: irq_handler_entry: irq=40 name=mmc0
            sshd-9807    [000] d.h.. 312290.652049: irq_handler_exit: irq=40 ret=unhandled
            sshd-9807    [000] d..2. 312290.652067: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.652086: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d..2. 312290.652146: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.657511: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1. 312290.657529: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1. 312290.657531: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312290.657532: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.657543: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.657565: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.657569: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.657573: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.657574: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.657575: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.657590: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.657616: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.657620: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.657627: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.657628: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.657629: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.657643: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.657666: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.657670: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.657674: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.657675: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.657677: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312290.657679: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.657682: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.657683: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.657685: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.657698: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.657715: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.657724: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.657733: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.657762: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312290.657766: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312290.657776: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312290.657777: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312290.657778: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312290.657792: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.657816: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312290.657820: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312290.657829: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312290.657830: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312290.657832: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312290.657844: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d.H3. 312290.657884: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1. 312290.657903: irq_handler_entry: irq=2 name=IPI
   kworker/u21:0-89      [000] d.H3. 312290.657905: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1. 312290.657906: irq_handler_exit: irq=2 ret=handled
   kworker/u21:0-89      [000] d..2. 312290.657941: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=ksoftirqd/0 next_pid=17 next_prio=120
     ksoftirqd/0-17      [000] d.h1. 312290.657947: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [002] dnh1. 312290.657950: irq_handler_entry: irq=1 name=IPI
          <idle>-0       [002] dNh1. 312290.657952: irq_handler_exit: irq=1 ret=handled
     ksoftirqd/0-17      [000] d.h1. 312290.657957: irq_handler_exit: irq=40 ret=handled
     ksoftirqd/0-17      [000] d.h1. 312290.657958: irq_handler_entry: irq=40 name=mmc0
     ksoftirqd/0-17      [000] d.h1. 312290.657960: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d..2. 312290.657962: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=9807 next_prio=120
     ksoftirqd/0-17      [000] d..2. 312290.657980: sched_switch: prev_comm=ksoftirqd/0 prev_pid=17 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.657995: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=ksoftirqd/0 next_pid=17 next_prio=120
     ksoftirqd/0-17      [000] d..2. 312290.658003: sched_switch: prev_comm=ksoftirqd/0 prev_pid=17 prev_prio=120 prev_state=S ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.658013: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
            sshd-9807    [002] d..2. 312290.658141: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=S ==> next_comm=kworker/u19:0 next_pid=9518 next_prio=120
          <idle>-0       [000] d.h1. 312290.658158: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1. 312290.658173: irq_handler_exit: irq=2 ret=handled
   kworker/u19:0-9518    [002] d..2. 312290.658177: sched_switch: prev_comm=kworker/u19:0 prev_pid=9518 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d..2. 312290.658183: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=9820 next_prio=120
            bash-9820    [000] d..2. 312290.658283: sched_switch: prev_comm=bash prev_pid=9820 prev_prio=120 prev_state=S ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
          <idle>-0       [002] d.h1. 312290.658298: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1. 312290.658311: irq_handler_exit: irq=2 ret=handled
   kworker/u17:1-9290    [000] d..2. 312290.658315: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] d..2. 312290.658322: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=9807 next_prio=120
          <idle>-0       [000] d.h1. 312290.658461: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1. 312290.658471: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d..2. 312290.658481: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
            sshd-9807    [002] d..2. 312290.658498: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
   kworker/u21:0-89      [000] d..2. 312290.658522: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.658527: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.658538: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.658539: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.658541: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312290.658547: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.658551: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.658552: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.658553: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.658571: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.658592: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.665643: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1. 312290.665658: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1. 312290.665659: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312290.665661: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.665670: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.665689: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.665693: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.665697: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.665698: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.665700: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.665714: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.665738: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.665742: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.665749: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.665750: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.665751: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.665765: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.665788: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.665792: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.665796: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.665797: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.665798: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312290.665801: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.665804: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.665805: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.665806: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.665819: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.665839: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.665881: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.665886: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312290.665898: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312290.665900: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.665910: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.665911: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.665913: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.665935: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.665964: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.665968: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.665976: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.665977: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.665978: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.665993: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.666062: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.666068: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.666077: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.666078: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.666080: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.666095: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.666110: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.667872: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1. 312290.667886: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1. 312290.667888: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312290.667889: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.667898: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.667917: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.667920: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.667924: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.667925: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.667927: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.667941: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.667965: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.667968: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.667975: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.667976: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.667978: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.667991: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.668014: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.668018: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.668022: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.668023: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.668025: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312290.668027: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.668030: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.668031: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.668033: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.668045: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.668064: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.668097: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.668102: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.668111: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.668112: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.668114: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.668128: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.668157: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.668161: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.668170: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.668171: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.668172: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.668187: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
          <idle>-0       [002] d.h1. 312290.668217: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1. 312290.668231: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d..2. 312290.668241: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=9807 next_prio=120
   kworker/u21:0-89      [000] d..2. 312290.668244: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.668249: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.668259: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.668260: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.668261: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.668279: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.668293: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
            sshd-9807    [002] d..2. 312290.668359: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u19:0 next_pid=9518 next_prio=120
          <idle>-0       [000] d.h1. 312290.668372: irq_handler_entry: irq=2 name=IPI
   kworker/u19:0-9518    [002] d..2. 312290.668377: sched_switch: prev_comm=kworker/u19:0 prev_pid=9518 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=9807 next_prio=120
          <idle>-0       [000] dNh1. 312290.668385: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d..2. 312290.668394: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=9820 next_prio=120
            sshd-9807    [002] d..2. 312290.668430: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
            bash-9820    [000] d..2. 312290.668479: sched_switch: prev_comm=bash prev_pid=9820 prev_prio=120 prev_state=S ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
          <idle>-0       [002] d.h1. 312290.668491: irq_handler_entry: irq=2 name=IPI
   kworker/u17:1-9290    [000] d..2. 312290.668498: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] dNh1. 312290.668502: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d..2. 312290.668511: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=9807 next_prio=120
          <idle>-0       [000] d.h1. 312290.668636: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1. 312290.668644: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d..2. 312290.668652: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
            sshd-9807    [002] d..2. 312290.668677: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
   kworker/u21:0-89      [000] d..2. 312290.668688: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.668692: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.668703: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.668704: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.668706: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312290.668719: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.668723: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.668724: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.668725: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.668745: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.668763: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.669273: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1. 312290.669287: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1. 312290.669288: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312290.669290: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.669298: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.669317: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.669321: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.669325: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.669326: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.669327: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.669341: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.669365: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.669369: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.669375: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.669376: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.669378: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.669391: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.669414: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.669418: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.669422: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.669423: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.669425: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312290.669427: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.669430: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.669431: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.669433: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.669446: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.669465: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.669498: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.669502: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.669511: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.669512: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.669514: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.669529: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.669555: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.669560: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.669567: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.669568: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.669569: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.669583: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.669641: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.669646: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.669655: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.669656: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.669658: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.669673: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.669688: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.678784: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1. 312290.678797: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1. 312290.678799: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312290.678800: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.678809: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.678836: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.678841: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.678845: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.678846: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.678847: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.678862: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.678886: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.678890: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.678896: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.678898: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.678899: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.678912: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.678935: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.678939: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.678943: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.678944: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.678946: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312290.678948: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.678952: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.678953: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.678954: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.678967: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.678988: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.679027: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.679032: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.679041: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.679042: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.679044: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.679060: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.679088: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.679092: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.679099: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.679100: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.679101: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.679115: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.679168: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.679173: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.679182: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.679183: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.679185: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.679200: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.679215: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.681877: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312290.681891: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312290.693879: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312290.693885: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312290.693917: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312290.693933: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.693937: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312290.693942: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312290.709879: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312290.709886: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312290.709916: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312290.709936: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.709941: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.709945: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.709946: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.709948: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.709963: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312290.709979: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.709983: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.709986: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.709988: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.709989: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.710002: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312290.710017: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.710021: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.710024: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.710025: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.710027: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.710040: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312290.710051: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.725880: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312290.725887: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312290.725916: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.725937: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.733880: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312290.733887: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.H1. 312290.733900: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH1. 312290.733912: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312290.733924: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.733941: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.781958: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1. 312290.781972: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1. 312290.781973: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312290.781975: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.781984: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.782005: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.782009: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312290.782013: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312290.782015: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.782019: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.782020: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.782022: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.782036: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.782061: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.782065: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.782071: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.782072: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.782074: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.782088: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.782113: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.782117: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.782121: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.782122: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.782123: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312290.782126: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.782129: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.782130: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.782132: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.782145: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.782165: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.782193: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.782197: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.782201: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.782202: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.782204: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.782220: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.782232: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.785227: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1. 312290.785237: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312290.785245: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.785261: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.785265: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.785268: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.785270: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.785273: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.785287: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.785318: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.785323: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.785332: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.785333: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.785335: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.785349: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.785375: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.785379: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.785388: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.785389: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.785390: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.785404: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
          <idle>-0       [002] d.h1. 312290.785433: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1. 312290.785446: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d..2. 312290.785456: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=9807 next_prio=120
   kworker/u21:0-89      [000] d..2. 312290.785460: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.785465: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.785474: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.785475: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.785477: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.785493: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.785507: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
            sshd-9807    [002] d..2. 312290.785603: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=S ==> next_comm=kworker/u19:0 next_pid=9518 next_prio=120
          <idle>-0       [000] d.h1. 312290.785617: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1. 312290.785629: irq_handler_exit: irq=2 ret=handled
   kworker/u19:0-9518    [002] d..2. 312290.785630: sched_switch: prev_comm=kworker/u19:0 prev_pid=9518 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d..2. 312290.785638: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=9820 next_prio=120
            bash-9820    [000] d..2. 312290.785722: sched_switch: prev_comm=bash prev_pid=9820 prev_prio=120 prev_state=S ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
          <idle>-0       [002] d.h1. 312290.785734: irq_handler_entry: irq=2 name=IPI
   kworker/u17:1-9290    [000] d..2. 312290.785742: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] dNh1. 312290.785746: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d..2. 312290.785755: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [002] D.h2. 312290.785878: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312290.785881: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1. 312290.785889: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d..2. 312290.785898: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
          <idle>-0       [001] d.h1. 312290.785898: irq_handler_entry: irq=2 name=IPI
            sshd-9807    [002] D.h2. 312290.785898: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1. 312290.785900: irq_handler_exit: irq=2 ret=handled
   kworker/u21:0-89      [000] d..2. 312290.785935: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.785940: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.785950: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.785952: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.785954: irq_handler_exit: irq=40 ret=unhandled
            sshd-9807    [002] d..2. 312290.785966: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=S ==> next_comm=kworker/2:1 next_pid=9595 next_prio=120
          <idle>-0       [000] d.h1. 312290.785967: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.785971: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.785972: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.785973: irq_handler_exit: irq=40 ret=unhandled
     kworker/2:1-9595    [002] d..2. 312290.785994: sched_switch: prev_comm=kworker/2:1 prev_pid=9595 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d..2. 312290.785994: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.786014: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] d.h1. 312290.793250: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1. 312290.793255: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312290.800451: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1. 312290.800465: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1. 312290.800467: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312290.800468: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.800477: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.800496: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.800499: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.800504: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.800505: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.800506: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.800520: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.800544: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.800548: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.800555: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.800556: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.800557: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.800571: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.800594: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.800598: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.800602: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.800603: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.800605: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312290.800607: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.800610: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.800611: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.800613: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.800626: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.800645: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.800686: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.800691: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.800700: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.800701: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.800703: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.800719: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.800746: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.800750: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.800757: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.800758: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.800759: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.800773: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.800832: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.800837: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.800846: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.800848: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.800849: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.800865: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.800879: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.801878: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312290.801889: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312290.813880: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312290.813886: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312290.813916: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312290.813928: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.825881: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312290.825888: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312290.829880: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312290.829886: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312290.829907: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312290.829928: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.829932: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.829936: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.829937: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.829938: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.829954: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312290.829970: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.829974: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.829978: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.829979: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.829981: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.829994: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312290.830009: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.830013: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.830017: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.830018: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.830019: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.830033: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312290.830044: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.845881: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312290.845888: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.H1. 312290.845895: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH1. 312290.845907: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312290.845918: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.845937: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.845941: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312290.845945: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312290.853881: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312290.853888: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312290.853917: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.853945: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.853949: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.853951: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312290.853952: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312290.853966: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d..2. 312290.853973: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.853989: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.857879: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312290.857889: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312290.870823: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1. 312290.870838: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1. 312290.870839: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312290.870841: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.870850: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.870870: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.870873: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.870877: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.870878: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.870880: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.870893: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.870917: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.870921: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.870928: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.870929: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.870930: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.870944: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.870968: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.870972: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.870976: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.870977: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.870979: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312290.870981: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.870985: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.870986: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.870987: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.871000: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.871020: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.871046: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.871051: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.871055: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.871056: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.871057: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.871073: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.871084: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.874081: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1. 312290.874091: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312290.874099: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.874115: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.874119: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.874123: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.874124: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.874125: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.874139: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.874170: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.874174: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.874184: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.874185: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.874186: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.874200: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.874226: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.874230: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.874239: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.874240: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.874242: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.874255: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
          <idle>-0       [002] d.h1. 312290.874282: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1. 312290.874294: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d..2. 312290.874303: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=9807 next_prio=120
   kworker/u21:0-89      [000] d..2. 312290.874309: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.874314: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.874323: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.874324: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.874326: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.874342: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.874356: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
            sshd-9807    [002] d..2. 312290.874423: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u19:0 next_pid=9518 next_prio=120
          <idle>-0       [000] d.h1. 312290.874436: irq_handler_entry: irq=2 name=IPI
   kworker/u19:0-9518    [002] d..2. 312290.874442: sched_switch: prev_comm=kworker/u19:0 prev_pid=9518 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=9807 next_prio=120
          <idle>-0       [000] dNh1. 312290.874449: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d..2. 312290.874457: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=9820 next_prio=120
            sshd-9807    [002] d..2. 312290.874494: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
            bash-9820    [000] d..2. 312290.874543: sched_switch: prev_comm=bash prev_pid=9820 prev_prio=120 prev_state=S ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
          <idle>-0       [002] d.h1. 312290.874555: irq_handler_entry: irq=2 name=IPI
   kworker/u17:1-9290    [000] d..2. 312290.874562: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] dNh1. 312290.874568: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d..2. 312290.874578: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=9807 next_prio=120
          <idle>-0       [000] d.h1. 312290.874698: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1. 312290.874705: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d..2. 312290.874715: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
            sshd-9807    [002] d..2. 312290.874738: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
   kworker/u21:0-89      [000] d..2. 312290.874752: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.874756: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.874767: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.874768: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.874770: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312290.874782: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.874786: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.874787: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.874788: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.874808: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.874826: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] d.h1. 312290.880408: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1. 312290.880413: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312290.884645: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1. 312290.884659: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1. 312290.884660: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312290.884662: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.884671: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.884690: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.884694: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.884698: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.884699: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.884700: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.884714: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.884738: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.884741: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.884748: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.884749: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.884751: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.884764: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.884787: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.884791: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.884795: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.884797: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.884798: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312290.884800: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.884804: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.884805: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.884806: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.884819: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312290.884838: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.884879: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.884884: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.884893: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.884894: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.884896: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.884911: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.884939: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.884943: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.884950: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.884951: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.884953: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.884966: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.885021: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.885026: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.885035: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.885037: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.885038: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.885053: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312290.885068: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.889882: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312290.889891: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312290.897880: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312290.897886: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312290.897915: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312290.897930: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.897934: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312290.897938: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312290.913881: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312290.913888: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312290.913915: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312290.913936: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.913940: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.913944: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.913945: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.913947: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.913962: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312290.913977: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.913981: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.913985: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.913986: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.913987: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.914000: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312290.914015: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.914019: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312290.914023: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312290.914024: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312290.914025: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312290.914038: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312290.914049: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312290.917879: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312290.917889: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312291.013881: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312291.013887: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2. 312291.013902: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2. 312291.013905: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312291.013923: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312291.013946: irq_handler_entry: irq=28 name=eth0
     kworker/0:1-9798    [000] d.h1. 312291.013950: irq_handler_exit: irq=28 ret=handled
     kworker/0:1-9798    [000] d..2. 312291.013957: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
     kworker/0:2-9753    [000] d..2. 312291.013971: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.013991: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.013996: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312291.014005: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312291.014011: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.014025: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.014031: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312291.014039: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312291.014044: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.014059: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.014063: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312291.014071: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312291.014075: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.014089: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.014092: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312291.014100: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312291.014105: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.014119: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.017362: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312291.017366: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312291.101882: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312291.101890: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312291.141883: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312291.141889: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312291.141900: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.H1. 312291.141904: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1. 312291.141907: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2. 312291.141914: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kcompactd0 next_pid=49 next_prio=120
          <idle>-0       [000] dNH1. 312291.141915: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312291.141928: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
      kcompactd0-49      [003] d..2. 312291.141930: sched_switch: prev_comm=kcompactd0 prev_pid=49 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312291.141933: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312291.141937: irq_handler_exit: irq=11 ret=handled
     kworker/0:1-9798    [000] d..2. 312291.141946: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.141950: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312291.141954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312291.275823: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1. 312291.275838: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1. 312291.275839: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312291.275841: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] dNh1. 312291.275843: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1. 312291.275846: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312291.275854: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] dNh1. 312291.275875: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] dNh1. 312291.275879: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] dNh1. 312291.275880: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] dNh1. 312291.275882: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312291.275891: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
     kworker/0:2-9753    [000] d..2. 312291.275903: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.275938: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.275943: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.275950: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.275951: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.275952: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.275969: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.275993: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.275997: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.276001: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.276002: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.276004: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312291.276006: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.276009: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.276010: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.276012: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.276025: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.276044: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.276068: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.276073: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.276077: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.276078: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.276079: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.276094: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.276105: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.279103: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1. 312291.279114: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312291.279122: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.279138: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.279142: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.279146: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.279147: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.279149: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.279162: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.279193: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.279197: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.279207: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.279208: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.279209: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.279223: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.279249: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.279254: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.279262: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.279263: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.279265: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.279278: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
          <idle>-0       [002] d.h1. 312291.279305: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1. 312291.279318: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d..2. 312291.279327: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=9807 next_prio=120
   kworker/u21:0-89      [000] d..2. 312291.279333: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.279338: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.279348: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.279349: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.279350: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.279366: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.279380: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
            sshd-9807    [002] d..2. 312291.279469: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=S ==> next_comm=kworker/u19:0 next_pid=9518 next_prio=120
          <idle>-0       [000] d.h1. 312291.279483: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1. 312291.279495: irq_handler_exit: irq=2 ret=handled
   kworker/u19:0-9518    [002] d..2. 312291.279497: sched_switch: prev_comm=kworker/u19:0 prev_pid=9518 prev_prio=120 prev_state=I ==> next_comm=swapper/2 next_pid=0 next_prio=120
          <idle>-0       [000] d..2. 312291.279504: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=9820 next_prio=120
            bash-9820    [000] d..2. 312291.279587: sched_switch: prev_comm=bash prev_pid=9820 prev_prio=120 prev_state=S ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
          <idle>-0       [002] d.h1. 312291.279599: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1. 312291.279610: irq_handler_exit: irq=2 ret=handled
   kworker/u17:1-9290    [000] d..2. 312291.279614: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] d..2. 312291.279619: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=9807 next_prio=120
          <idle>-0       [000] d.h1. 312291.279742: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1. 312291.279752: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d..2. 312291.279759: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
            sshd-9807    [002] d..2. 312291.279775: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
   kworker/u21:0-89      [000] d..2. 312291.279795: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.279799: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.279810: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.279811: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.279813: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312291.279825: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.279829: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.279830: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.279832: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.279852: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.279871: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] d.h1. 312291.285465: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1. 312291.285470: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312291.290689: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1. 312291.290703: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1. 312291.290704: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312291.290706: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.290715: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.290733: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.290737: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.290741: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.290742: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.290744: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.290757: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.290781: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.290785: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.290792: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.290793: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.290794: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.290808: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.290831: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.290835: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.290839: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.290840: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.290841: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312291.290844: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.290847: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.290848: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.290849: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.290862: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.290881: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.290921: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.290926: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.290935: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.290937: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.290938: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.290953: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.290981: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.290985: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.290992: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.290993: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.290995: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.291008: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.291064: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.291069: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.291078: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.291079: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.291081: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.291096: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.291111: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.293883: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312291.293896: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312291.305885: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312291.305891: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312291.305920: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312291.305932: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.321886: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312291.321893: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312291.321922: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312291.321942: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.321946: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.321950: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.321952: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.321953: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.321968: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312291.321983: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.321987: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.321991: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.321992: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.321993: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.322006: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312291.322020: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.322024: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.322028: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.322029: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.322030: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.322043: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312291.322054: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.333886: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312291.333893: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312291.333923: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h.. 312291.333948: irq_handler_entry: irq=11 name=arch_timer
     kworker/0:1-9798    [000] d.h.. 312291.333954: irq_handler_exit: irq=11 ret=handled
     kworker/0:1-9798    [000] d..2. 312291.333971: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.333976: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] dNh1. 312291.333986: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [000] d..2. 312291.333992: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.334008: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.334865: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312291.334869: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312291.436401: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1. 312291.436416: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1. 312291.436417: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312291.436418: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] dNh1. 312291.436421: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1. 312291.436424: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312291.436432: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312291.436454: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312291.436458: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312291.436460: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312291.436461: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312291.436471: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
     kworker/0:2-9753    [000] d..2. 312291.436484: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.436516: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.436520: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.436529: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.436530: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.436531: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.436548: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.436572: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.436576: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.436580: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.436582: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.436583: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312291.436585: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.436589: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.436590: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.436591: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.436604: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.436623: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.436648: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.436652: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.436656: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.436657: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.436659: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.436673: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.436684: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.439682: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1. 312291.439693: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312291.439702: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.439717: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.439721: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.439725: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.439726: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.439728: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.439741: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.439773: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.439777: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.439786: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.439787: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.439789: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.439803: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.439830: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.439834: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.439842: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.439843: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.439845: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.439859: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
          <idle>-0       [002] d.h1. 312291.439885: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1. 312291.439897: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d..2. 312291.439906: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=9807 next_prio=120
   kworker/u21:0-89      [000] d..2. 312291.439913: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.439918: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.439928: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.439929: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.439931: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.439946: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.439960: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
            sshd-9807    [002] d..2. 312291.440020: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u19:0 next_pid=9518 next_prio=120
          <idle>-0       [000] d.h1. 312291.440033: irq_handler_entry: irq=2 name=IPI
   kworker/u19:0-9518    [002] d..2. 312291.440038: sched_switch: prev_comm=kworker/u19:0 prev_pid=9518 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=9807 next_prio=120
          <idle>-0       [000] dNh1. 312291.440045: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d..2. 312291.440053: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=9820 next_prio=120
            sshd-9807    [002] d..2. 312291.440088: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
            bash-9820    [000] d..2. 312291.440136: sched_switch: prev_comm=bash prev_pid=9820 prev_prio=120 prev_state=S ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
          <idle>-0       [002] d.h1. 312291.440149: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1. 312291.440160: irq_handler_exit: irq=2 ret=handled
   kworker/u17:1-9290    [000] d..2. 312291.440163: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] d..2. 312291.440169: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=9807 next_prio=120
          <idle>-0       [000] d.h1. 312291.440287: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1. 312291.440297: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d..2. 312291.440305: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
            sshd-9807    [002] d..2. 312291.440320: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
   kworker/u21:0-89      [000] d..2. 312291.440340: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.440345: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.440355: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.440357: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.440358: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312291.440371: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.440374: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.440375: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.440377: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.440396: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.440414: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [002] d.h1. 312291.445841: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1. 312291.445846: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312291.453888: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312291.453897: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312291.453928: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312291.453940: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.457228: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1. 312291.457243: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1. 312291.457244: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312291.457245: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.457254: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.457273: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.457277: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.457281: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.457282: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.457283: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.457297: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.457322: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.457326: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.457332: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.457333: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.457335: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.457348: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.457371: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.457375: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.457379: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.457380: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.457382: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312291.457384: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.457387: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.457388: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.457390: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.457403: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.457422: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.457461: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.457466: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.457475: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.457476: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.457478: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.457494: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.457522: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.457526: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.457533: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.457535: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.457536: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.457550: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.457604: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.457609: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.457618: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.457619: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.457621: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.457637: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.457651: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.469888: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312291.469896: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312291.469925: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312291.469936: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.481888: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312291.481895: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312291.485887: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312291.485893: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312291.485915: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312291.485935: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.485940: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.485943: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.485945: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.485946: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.485961: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312291.485976: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.485979: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.485983: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.485984: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.485986: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.485999: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312291.486013: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.486017: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.486020: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.486022: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.486023: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.486036: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312291.486047: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.501888: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312291.501895: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312291.621887: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312291.621893: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.H1. 312291.621908: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH1. 312291.621920: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312291.621932: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.621951: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.621955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312291.621959: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312291.653889: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312291.653896: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312291.653906: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1. 312291.653913: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2. 312291.653920: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kcompactd0 next_pid=49 next_prio=120
      kcompactd0-49      [003] d..2. 312291.653934: sched_switch: prev_comm=kcompactd0 prev_pid=49 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312291.653938: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312291.653942: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312291.665889: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312291.665890: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312291.665895: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312291.665897: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d..2. 312291.665927: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/3:1 next_pid=9750 next_prio=120
     kworker/3:1-9750    [003] d..2. 312291.665943: sched_switch: prev_comm=kworker/3:1 prev_pid=9750 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.705847: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1. 312291.705862: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1. 312291.705863: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312291.705865: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.705874: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312291.705887: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1. 312291.705903: irq_handler_entry: irq=2 name=IPI
     kworker/0:1-9798    [000] d.h1. 312291.705904: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1. 312291.705905: irq_handler_exit: irq=2 ret=handled
     kworker/0:1-9798    [000] d.h1. 312291.705906: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312291.705909: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312291.705910: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312291.705912: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312291.705945: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.705950: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.705957: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.705958: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.705959: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.705975: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.706000: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.706004: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.706008: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.706009: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.706011: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312291.706013: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.706016: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.706017: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.706019: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.706033: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.706053: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.706079: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.706083: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.706087: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.706088: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.706090: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.706106: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.706117: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.709112: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1. 312291.709123: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312291.709131: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.709146: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.709150: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.709154: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.709155: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.709157: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.709170: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.709201: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.709205: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.709215: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.709216: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.709218: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.709232: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.709258: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.709264: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.709273: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.709274: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.709276: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.709290: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.709356: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d.h1. 312291.709366: irq_handler_entry: irq=40 name=mmc1
            sshd-9807    [000] d.h1. 312291.709377: irq_handler_exit: irq=40 ret=handled
            sshd-9807    [000] d.h1. 312291.709379: irq_handler_entry: irq=40 name=mmc0
            sshd-9807    [000] d.h1. 312291.709381: irq_handler_exit: irq=40 ret=unhandled
            sshd-9807    [000] d..2. 312291.709401: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.709419: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d..2. 312291.709585: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=S ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
   kworker/u17:1-9290    [000] d..2. 312291.709609: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=9820 next_prio=120
            bash-9820    [000] d..2. 312291.709689: sched_switch: prev_comm=bash prev_pid=9820 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
   kworker/u17:1-9290    [000] d..2. 312291.709707: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=R+ ==> next_comm=bash next_pid=9820 next_prio=120
            bash-9820    [000] d..2. 312291.709732: sched_switch: prev_comm=bash prev_pid=9820 prev_prio=120 prev_state=S ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
   kworker/u17:1-9290    [000] d..2. 312291.709743: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d..2. 312291.709894: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d.h1. 312291.709900: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1. 312291.709918: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] d.h1. 312291.709920: irq_handler_exit: irq=2 ret=handled
   kworker/u21:0-89      [000] d.h1. 312291.709921: irq_handler_exit: irq=11 ret=handled
   kworker/u21:0-89      [000] d..2. 312291.709971: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d.h1. 312291.709976: irq_handler_entry: irq=40 name=mmc1
            sshd-9807    [000] d.h1. 312291.709987: irq_handler_exit: irq=40 ret=handled
            sshd-9807    [000] d.h1. 312291.709989: irq_handler_entry: irq=40 name=mmc0
            sshd-9807    [000] d.h1. 312291.709990: irq_handler_exit: irq=40 ret=unhandled
            sshd-9807    [000] d.h.. 312291.709996: irq_handler_entry: irq=40 name=mmc1
            sshd-9807    [000] d.h.. 312291.709999: irq_handler_exit: irq=40 ret=handled
            sshd-9807    [000] d.h.. 312291.710000: irq_handler_entry: irq=40 name=mmc0
            sshd-9807    [000] d.h.. 312291.710002: irq_handler_exit: irq=40 ret=unhandled
            sshd-9807    [000] d..2. 312291.710019: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.710037: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d..2. 312291.710089: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.725892: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312291.725901: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2. 312291.725917: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2. 312291.725924: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312291.725947: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312291.725958: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=S ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.725979: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.728178: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1. 312291.728193: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1. 312291.728194: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312291.728196: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.728205: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.728225: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.728229: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.728233: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.728234: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.728236: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.728251: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.728275: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.728279: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.728286: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.728287: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.728288: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.728302: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.728325: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.728329: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.728333: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.728335: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.728336: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312291.728338: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.728342: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.728343: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.728344: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.728357: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.728373: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.728382: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.728390: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.728419: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312291.728423: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312291.728432: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312291.728433: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312291.728434: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312291.728448: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.728471: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312291.728475: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312291.728482: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312291.728483: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312291.728485: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312291.728497: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.728553: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312291.728558: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312291.728567: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312291.728568: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312291.728570: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312291.728584: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.728595: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.728611: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.741891: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312291.741899: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312291.741930: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312291.741942: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.749889: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312291.749890: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312291.749895: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312291.749898: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312291.749923: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.749945: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.757890: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312291.757890: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312291.757896: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312291.757897: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312291.757924: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312291.757948: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.757952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312291.757956: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312291.757958: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.757962: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.757963: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.757965: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.757980: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312291.757996: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.758000: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.758004: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.758005: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.758006: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.758021: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312291.758037: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.758040: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.758044: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.758045: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.758047: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.758061: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312291.758073: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.760509: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312291.760513: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312291.807672: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1. 312291.807685: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1. 312291.807687: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312291.807688: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.807697: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.807716: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.807719: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.807723: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.807724: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.807725: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.807739: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.807764: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.807768: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.807774: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.807775: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.807777: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.807790: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.807814: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.807818: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.807822: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.807823: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.807824: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312291.807827: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.807830: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.807831: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.807833: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.807845: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.807862: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.807870: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.807879: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.807892: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312291.807896: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312291.807900: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312291.807901: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312291.807902: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312291.807914: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.807923: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.807939: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.810922: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1. 312291.810932: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312291.810941: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.810959: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.810963: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312291.810967: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312291.810969: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.810973: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.810974: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.810975: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.810989: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.811021: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.811026: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.811035: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.811036: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.811038: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.811053: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.811081: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.811085: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.811094: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.811095: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.811096: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.811111: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.811174: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d.h1. 312291.811179: irq_handler_entry: irq=40 name=mmc1
            sshd-9807    [000] d.h1. 312291.811189: irq_handler_exit: irq=40 ret=handled
            sshd-9807    [000] d.h1. 312291.811190: irq_handler_entry: irq=40 name=mmc0
            sshd-9807    [000] d.h1. 312291.811192: irq_handler_exit: irq=40 ret=unhandled
            sshd-9807    [000] d..2. 312291.811208: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.811222: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d..2. 312291.811373: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=S ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
   kworker/u17:1-9290    [000] d..2. 312291.811395: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=9820 next_prio=120
            bash-9820    [000] d..2. 312291.811475: sched_switch: prev_comm=bash prev_pid=9820 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
   kworker/u17:1-9290    [000] d..2. 312291.811492: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=R+ ==> next_comm=bash next_pid=9820 next_prio=120
            bash-9820    [000] d..2. 312291.811519: sched_switch: prev_comm=bash prev_pid=9820 prev_prio=120 prev_state=S ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
   kworker/u17:1-9290    [000] d..2. 312291.811529: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d..2. 312291.811675: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.811717: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d.h1. 312291.811723: irq_handler_entry: irq=40 name=mmc1
            sshd-9807    [000] d.h1. 312291.811734: irq_handler_exit: irq=40 ret=handled
            sshd-9807    [000] d.h1. 312291.811736: irq_handler_entry: irq=40 name=mmc0
            sshd-9807    [000] d.h1. 312291.811738: irq_handler_exit: irq=40 ret=unhandled
            sshd-9807    [000] d.h1. 312291.811742: irq_handler_entry: irq=40 name=mmc1
            sshd-9807    [000] d.h1. 312291.811746: irq_handler_exit: irq=40 ret=handled
            sshd-9807    [000] d.h1. 312291.811747: irq_handler_entry: irq=40 name=mmc0
            sshd-9807    [000] d.h1. 312291.811749: irq_handler_exit: irq=40 ret=unhandled
            sshd-9807    [000] d..2. 312291.811766: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.811783: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d..2. 312291.811833: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.825893: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312291.825902: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2. 312291.825918: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2. 312291.825925: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312291.825946: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312291.825956: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=S ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.825978: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.828755: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1. 312291.828769: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1. 312291.828771: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312291.828772: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.828781: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.828800: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.828804: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.828808: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.828809: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.828811: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.828824: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.828850: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.828854: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.828861: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.828862: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.828863: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.828877: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.828900: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.828904: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.828908: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.828909: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.828910: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312291.828913: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.828916: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.828917: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.828918: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.828931: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.828948: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.828956: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.828964: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.828992: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312291.828996: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312291.829006: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312291.829007: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312291.829009: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312291.829022: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.829046: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312291.829049: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312291.829056: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312291.829057: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312291.829059: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312291.829071: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.829123: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312291.829127: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312291.829137: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312291.829138: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312291.829139: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312291.829153: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.829165: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.829180: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.841892: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312291.841900: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312291.841929: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312291.841941: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.853892: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312291.853899: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312291.857891: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312291.857897: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312291.857919: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312291.857939: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.857943: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.857947: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.857948: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.857950: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.857964: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312291.857979: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.857983: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.857986: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.857987: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.857989: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.858002: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312291.858017: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.858021: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.858024: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.858025: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.858027: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.858040: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312291.858053: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.873892: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312291.873903: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312291.877047: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1. 312291.877062: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1. 312291.877063: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312291.877064: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.877075: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.877097: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.877100: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312291.877105: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312291.877107: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.877110: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.877111: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.877113: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.877126: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.877151: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.877155: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.877161: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.877162: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.877164: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.877177: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.877201: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.877204: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.877209: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.877210: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.877211: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312291.877214: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.877217: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.877218: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.877219: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.877232: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.877248: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.877257: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.877265: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.877279: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312291.877283: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312291.877286: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312291.877288: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312291.877289: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312291.877301: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.877310: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.877325: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312291.877890: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312291.877891: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312291.877896: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312291.877899: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312291.877930: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.877957: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.877961: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.877963: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312291.877964: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312291.877977: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d..2. 312291.877983: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.877998: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.880307: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1. 312291.880318: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312291.880326: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.880342: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.880346: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.880350: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.880351: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.880353: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.880367: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.880398: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.880403: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.880412: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.880413: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.880415: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.880429: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.880456: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.880460: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.880468: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.880470: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.880471: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.880485: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.880547: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d.h1. 312291.880552: irq_handler_entry: irq=40 name=mmc1
            sshd-9807    [000] d.h1. 312291.880562: irq_handler_exit: irq=40 ret=handled
            sshd-9807    [000] d.h1. 312291.880563: irq_handler_entry: irq=40 name=mmc0
            sshd-9807    [000] d.h1. 312291.880565: irq_handler_exit: irq=40 ret=unhandled
            sshd-9807    [000] d..2. 312291.880580: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.880594: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d..2. 312291.880741: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=S ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
   kworker/u17:1-9290    [000] d..2. 312291.880763: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=9820 next_prio=120
            bash-9820    [000] d..2. 312291.880842: sched_switch: prev_comm=bash prev_pid=9820 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
   kworker/u17:1-9290    [000] d..2. 312291.880860: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=R+ ==> next_comm=bash next_pid=9820 next_prio=120
            bash-9820    [000] d..2. 312291.880885: sched_switch: prev_comm=bash prev_pid=9820 prev_prio=120 prev_state=S ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
   kworker/u17:1-9290    [000] d..2. 312291.880895: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d..2. 312291.881035: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.881078: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d.h1. 312291.881083: irq_handler_entry: irq=40 name=mmc1
            sshd-9807    [000] d.h1. 312291.881094: irq_handler_exit: irq=40 ret=handled
            sshd-9807    [000] d.h1. 312291.881095: irq_handler_entry: irq=40 name=mmc0
            sshd-9807    [000] d.h1. 312291.881097: irq_handler_exit: irq=40 ret=unhandled
            sshd-9807    [000] d.h1. 312291.881103: irq_handler_entry: irq=40 name=mmc1
            sshd-9807    [000] d.h1. 312291.881107: irq_handler_exit: irq=40 ret=handled
            sshd-9807    [000] d.h1. 312291.881108: irq_handler_entry: irq=40 name=mmc0
            sshd-9807    [000] d.h1. 312291.881109: irq_handler_exit: irq=40 ret=unhandled
            sshd-9807    [000] d..2. 312291.881128: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.881147: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d..2. 312291.881197: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.890167: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1. 312291.890183: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1. 312291.890184: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312291.890186: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.890195: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.890215: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.890219: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.890223: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.890224: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.890225: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.890240: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.890265: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.890269: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.890276: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.890277: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.890278: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.890292: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.890315: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.890319: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.890323: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.890324: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.890326: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312291.890328: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.890331: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.890332: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.890333: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.890346: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.890363: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.890372: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.890380: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.890409: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312291.890413: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312291.890422: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312291.890423: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312291.890425: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312291.890437: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.890461: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312291.890465: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312291.890472: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312291.890473: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312291.890475: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312291.890486: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.890537: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312291.890541: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312291.890551: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312291.890552: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312291.890553: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312291.890567: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312291.890579: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.890597: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.893890: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312291.893903: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312291.894129: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312291.894134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312291.905892: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312291.905898: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312291.905929: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312291.905942: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.921893: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312291.921900: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312291.921930: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312291.921950: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.921955: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.921959: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.921960: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.921962: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.921977: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312291.921992: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.921996: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.922000: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.922001: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.922002: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.922016: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312291.922030: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.922034: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312291.922038: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312291.922039: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312291.922040: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312291.922053: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312291.922065: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.937893: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312291.937900: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.H1. 312291.937908: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH1. 312291.937920: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312291.937932: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312291.937951: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312291.937955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312291.937959: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312292.037892: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312292.037899: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2. 312292.037913: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2. 312292.037916: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312292.037936: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] dNh1. 312292.037958: irq_handler_entry: irq=28 name=eth0
     kworker/0:1-9798    [000] dNh1. 312292.037962: irq_handler_exit: irq=28 ret=handled
     kworker/0:1-9798    [000] d..2. 312292.037968: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
     kworker/0:2-9753    [000] d..2. 312292.037981: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.038004: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.038009: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312292.038019: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312292.038024: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.038040: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.038044: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312292.038053: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312292.038058: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.038072: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.038076: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312292.038084: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312292.038088: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.038102: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.038106: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312292.038113: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312292.038118: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.038132: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.041368: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312292.041372: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312292.101893: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312292.101900: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312292.165894: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312292.165900: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312292.165910: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.H1. 312292.165915: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1. 312292.165919: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNH1. 312292.165925: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d..2. 312292.165928: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kcompactd0 next_pid=49 next_prio=120
          <idle>-0       [000] d..2. 312292.165938: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
      kcompactd0-49      [003] d..2. 312292.165944: sched_switch: prev_comm=kcompactd0 prev_pid=49 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312292.165948: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312292.165953: irq_handler_exit: irq=11 ret=handled
     kworker/0:1-9798    [000] d..2. 312292.165957: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.165961: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312292.165965: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312292.426819: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1. 312292.426834: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1. 312292.426835: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312292.426837: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] dNh1. 312292.426840: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1. 312292.426842: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312292.426851: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312292.426872: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312292.426876: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312292.426878: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312292.426879: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312292.426889: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
     kworker/0:2-9753    [000] d..2. 312292.426901: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.426933: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.426937: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.426944: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312292.426945: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312292.426947: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312292.426962: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.426987: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.426991: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.426995: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312292.426996: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312292.426998: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312292.427000: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.427004: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312292.427005: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312292.427006: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312292.427021: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.427038: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.427046: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.427054: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.427068: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312292.427072: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312292.427076: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312292.427077: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312292.427079: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312292.427091: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.427100: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.427114: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.430100: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1. 312292.430111: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312292.430119: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.430135: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.430139: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.430143: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312292.430144: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312292.430146: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312292.430161: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.430192: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.430197: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.430206: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312292.430207: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312292.430209: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312292.430223: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.430250: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.430254: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.430263: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312292.430264: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312292.430265: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312292.430279: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.430339: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d.h1. 312292.430345: irq_handler_entry: irq=40 name=mmc1
            sshd-9807    [000] d.h1. 312292.430354: irq_handler_exit: irq=40 ret=handled
            sshd-9807    [000] d.h1. 312292.430355: irq_handler_entry: irq=40 name=mmc0
            sshd-9807    [000] d.h1. 312292.430357: irq_handler_exit: irq=40 ret=unhandled
            sshd-9807    [000] d..2. 312292.430373: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.430387: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d..2. 312292.430538: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=S ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
   kworker/u17:1-9290    [000] d..2. 312292.430561: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=9820 next_prio=120
            bash-9820    [000] d..2. 312292.430638: sched_switch: prev_comm=bash prev_pid=9820 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
   kworker/u17:1-9290    [000] d..2. 312292.430656: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=R+ ==> next_comm=bash next_pid=9820 next_prio=120
            bash-9820    [000] d..2. 312292.430680: sched_switch: prev_comm=bash prev_pid=9820 prev_prio=120 prev_state=S ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
   kworker/u17:1-9290    [000] d..2. 312292.430692: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d..2. 312292.430840: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.430882: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d.h1. 312292.430888: irq_handler_entry: irq=40 name=mmc1
            sshd-9807    [000] d.h1. 312292.430899: irq_handler_exit: irq=40 ret=handled
            sshd-9807    [000] d.h1. 312292.430900: irq_handler_entry: irq=40 name=mmc0
            sshd-9807    [000] d.h1. 312292.430902: irq_handler_exit: irq=40 ret=unhandled
            sshd-9807    [000] d.h.. 312292.430907: irq_handler_entry: irq=40 name=mmc1
            sshd-9807    [000] d.h.. 312292.430911: irq_handler_exit: irq=40 ret=handled
            sshd-9807    [000] d.h.. 312292.430912: irq_handler_entry: irq=40 name=mmc0
            sshd-9807    [000] d.h.. 312292.430913: irq_handler_exit: irq=40 ret=unhandled
            sshd-9807    [000] d..2. 312292.430930: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.430947: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d..2. 312292.430995: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.445899: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312292.445909: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312292.445949: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312292.445960: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=S ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.445984: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.456608: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1. 312292.456623: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1. 312292.456625: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312292.456626: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312292.456636: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.456656: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.456660: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.456664: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312292.456665: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312292.456666: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312292.456681: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.456705: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.456709: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.456716: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312292.456717: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312292.456718: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312292.456732: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.456756: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.456759: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.456763: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312292.456765: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312292.456766: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312292.456768: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.456772: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312292.456773: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312292.456774: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312292.456787: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.456804: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.456812: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.456821: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.456850: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312292.456854: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312292.456863: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312292.456864: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312292.456865: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312292.456879: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.456903: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312292.456906: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312292.456913: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312292.456914: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312292.456916: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312292.456928: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.456979: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312292.456984: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312292.456994: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312292.456995: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312292.456996: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312292.457010: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.457021: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.457037: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.461899: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312292.461907: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312292.469898: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312292.469903: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312292.469933: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312292.469944: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.473896: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312292.473906: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312292.485898: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312292.485903: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312292.485931: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312292.485954: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.485958: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312292.485962: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312292.485964: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.485968: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312292.485969: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312292.485970: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312292.485986: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312292.486002: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.486006: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.486009: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312292.486010: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312292.486012: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312292.486026: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312292.486042: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.486045: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.486049: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312292.486050: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312292.486052: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312292.486066: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312292.486077: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.488484: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312292.488488: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312292.498372: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1. 312292.498385: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1. 312292.498386: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312292.498388: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312292.498396: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.498415: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.498419: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.498423: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312292.498424: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312292.498425: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312292.498439: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.498463: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.498467: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.498473: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312292.498474: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312292.498476: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312292.498489: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.498513: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.498516: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.498521: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312292.498522: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312292.498523: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312292.498526: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.498529: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312292.498530: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312292.498531: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312292.498544: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.498560: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.498569: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.498577: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.498591: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312292.498595: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312292.498598: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312292.498599: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312292.498601: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312292.498613: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.498622: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.498637: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.501620: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1. 312292.501630: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312292.501639: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.501655: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.501659: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.501662: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312292.501663: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312292.501665: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312292.501679: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.501710: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.501714: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.501724: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312292.501725: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312292.501726: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312292.501740: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.501767: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.501771: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.501779: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312292.501780: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312292.501782: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312292.501796: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.501854: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d.h1. 312292.501860: irq_handler_entry: irq=40 name=mmc1
            sshd-9807    [000] d.h1. 312292.501869: irq_handler_exit: irq=40 ret=handled
            sshd-9807    [000] d.h1. 312292.501870: irq_handler_entry: irq=40 name=mmc0
            sshd-9807    [000] d.h1. 312292.501872: irq_handler_exit: irq=40 ret=unhandled
            sshd-9807    [000] d..2. 312292.501887: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d.h.. 312292.501895: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1. 312292.501913: irq_handler_entry: irq=2 name=IPI
   kworker/u21:0-89      [000] d.h.. 312292.501913: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1. 312292.501915: irq_handler_exit: irq=2 ret=handled
   kworker/u21:0-89      [000] d..2. 312292.501929: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d..2. 312292.502076: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=S ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
   kworker/u17:1-9290    [000] d..2. 312292.502098: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=9820 next_prio=120
            bash-9820    [000] d..2. 312292.502174: sched_switch: prev_comm=bash prev_pid=9820 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
   kworker/u17:1-9290    [000] d..2. 312292.502192: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=R+ ==> next_comm=bash next_pid=9820 next_prio=120
            bash-9820    [000] d..2. 312292.502216: sched_switch: prev_comm=bash prev_pid=9820 prev_prio=120 prev_state=S ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
   kworker/u17:1-9290    [000] d..2. 312292.502226: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d..2. 312292.502368: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.502412: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d.h1. 312292.502418: irq_handler_entry: irq=40 name=mmc1
            sshd-9807    [000] d.h1. 312292.502428: irq_handler_exit: irq=40 ret=handled
            sshd-9807    [000] d.h1. 312292.502430: irq_handler_entry: irq=40 name=mmc0
            sshd-9807    [000] d.h1. 312292.502431: irq_handler_exit: irq=40 ret=unhandled
            sshd-9807    [000] d.h1. 312292.502437: irq_handler_entry: irq=40 name=mmc1
            sshd-9807    [000] d.h1. 312292.502440: irq_handler_exit: irq=40 ret=handled
            sshd-9807    [000] d.h1. 312292.502441: irq_handler_entry: irq=40 name=mmc0
            sshd-9807    [000] d.h1. 312292.502443: irq_handler_exit: irq=40 ret=unhandled
            sshd-9807    [000] d..2. 312292.502460: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.502477: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d..2. 312292.502526: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.513346: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1. 312292.513362: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1. 312292.513363: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312292.513365: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312292.513375: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.513394: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.513398: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.513402: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312292.513403: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312292.513404: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312292.513421: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.513445: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.513449: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.513456: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312292.513457: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312292.513458: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312292.513472: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.513495: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.513499: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.513503: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312292.513504: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312292.513506: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312292.513508: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.513511: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312292.513512: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312292.513514: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312292.513527: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.513543: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.513551: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.513560: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.513589: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312292.513593: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312292.513602: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312292.513603: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312292.513604: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312292.513617: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.513641: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312292.513645: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312292.513652: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312292.513653: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312292.513654: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312292.513666: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.513718: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312292.513722: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312292.513731: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312292.513733: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312292.513734: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312292.513748: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.513760: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.513777: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.517900: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312292.517909: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312292.525898: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312292.525904: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312292.525934: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312292.525946: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.541899: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312292.541906: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2. 312292.541921: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2. 312292.541927: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312292.541948: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312292.541969: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312292.541973: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312292.541977: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312292.541978: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312292.541979: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312292.542001: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312292.542025: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.542029: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.542033: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312292.542034: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312292.542036: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312292.542052: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312292.542067: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.542071: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.542075: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312292.542076: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312292.542078: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312292.542092: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312292.542104: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.544537: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312292.544541: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312292.645899: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312292.645906: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2. 312292.645921: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2. 312292.645927: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312292.645946: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
   kworker/u17:1-9290    [000] d.h1. 312292.646298: irq_handler_entry: irq=40 name=mmc1
   kworker/u17:1-9290    [000] d.h1. 312292.646301: irq_handler_exit: irq=40 ret=unhandled
   kworker/u17:1-9290    [000] d.h1. 312292.646302: irq_handler_entry: irq=40 name=mmc0
   kworker/u17:1-9290    [000] d.h1. 312292.646306: irq_handler_exit: irq=40 ret=handled
   kworker/u17:1-9290    [000] d..2. 312292.646321: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.646346: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.646709: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312292.646714: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312292.647963: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.647964: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312292.647965: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312292.647983: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d..2. 312292.647993: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
   kworker/u17:1-9290    [000] d..2. 312292.648013: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.648018: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.648019: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312292.648020: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312292.648033: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d..2. 312292.648038: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
   kworker/u17:1-9290    [000] d.h.. 312292.648057: irq_handler_entry: irq=40 name=mmc1
   kworker/u17:1-9290    [000] d.h.. 312292.648058: irq_handler_exit: irq=40 ret=unhandled
   kworker/u17:1-9290    [000] d.h.. 312292.648060: irq_handler_entry: irq=40 name=mmc0
   kworker/u17:1-9290    [000] d.h.. 312292.648062: irq_handler_exit: irq=40 ret=handled
   kworker/u17:1-9290    [000] d..2. 312292.648103: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.648311: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.648312: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312292.648313: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312292.648328: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d..2. 312292.648337: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
   kworker/u17:1-9290    [000] d..2. 312292.648356: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.648361: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.648362: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312292.648363: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312292.648375: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d..2. 312292.648381: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
   kworker/u17:1-9290    [000] dNh1. 312292.648406: irq_handler_entry: irq=40 name=mmc1
   kworker/u17:1-9290    [000] dNh1. 312292.648408: irq_handler_exit: irq=40 ret=unhandled
   kworker/u17:1-9290    [000] dNh1. 312292.648409: irq_handler_entry: irq=40 name=mmc0
   kworker/u17:1-9290    [000] dNh1. 312292.648411: irq_handler_exit: irq=40 ret=handled
   kworker/u17:1-9290    [000] d..2. 312292.648418: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u17:3 next_pid=9626 next_prio=120
   kworker/u17:3-9626    [000] d..2. 312292.648467: sched_switch: prev_comm=kworker/u17:3 prev_pid=9626 prev_prio=120 prev_state=I ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
   kworker/u17:1-9290    [000] d..2. 312292.648497: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.648651: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.648652: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312292.648654: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312292.648671: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d..2. 312292.648680: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1H next_pid=88 next_prio=100
    kworker/0:1H-88      [000] d..2. 312292.648699: sched_switch: prev_comm=kworker/0:1H prev_pid=88 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.648704: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.648705: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312292.648706: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312292.648718: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d..2. 312292.648723: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1H next_pid=88 next_prio=100
    kworker/0:1H-88      [000] d..2. 312292.648750: sched_switch: prev_comm=kworker/0:1H prev_pid=88 prev_prio=100 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.677902: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312292.677911: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312292.677922: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1. 312292.677931: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2. 312292.677938: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kcompactd0 next_pid=49 next_prio=120
      kcompactd0-49      [003] d..2. 312292.677954: sched_switch: prev_comm=kcompactd0 prev_pid=49 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312292.677958: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312292.677962: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312292.694701: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312292.694704: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312292.725899: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312292.725901: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312292.725906: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312292.725907: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312292.773901: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312292.773907: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2. 312292.773921: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2. 312292.773925: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312292.773943: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.773972: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.773976: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312292.773981: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312292.849902: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312292.849908: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312292.849938: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
   kworker/u17:1-9290    [000] d..2. 312292.849953: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.849956: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312292.849961: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312292.880843: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1. 312292.880858: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1. 312292.880859: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312292.880861: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] dNh1. 312292.880864: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1. 312292.880866: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312292.880875: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] dNh1. 312292.880897: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] dNh1. 312292.880900: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] dNh1. 312292.880901: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] dNh1. 312292.880903: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312292.880913: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
     kworker/0:2-9753    [000] d..2. 312292.880926: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.880962: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.880967: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.880974: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312292.880975: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312292.880977: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312292.880992: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.881017: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.881021: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.881025: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312292.881026: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312292.881028: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312292.881030: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.881033: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312292.881034: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312292.881036: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312292.881050: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.881067: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.881076: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.881084: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.881099: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312292.881103: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312292.881107: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312292.881108: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312292.881109: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312292.881121: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.881130: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.881145: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.884130: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1. 312292.884142: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312292.884151: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.884167: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.884171: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.884175: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312292.884176: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312292.884177: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312292.884193: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.884226: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.884230: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.884240: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312292.884241: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312292.884242: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312292.884257: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.884285: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.884289: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.884297: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312292.884298: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312292.884300: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312292.884313: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.884387: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d.h1. 312292.884393: irq_handler_entry: irq=40 name=mmc1
            sshd-9807    [000] d.h1. 312292.884403: irq_handler_exit: irq=40 ret=handled
            sshd-9807    [000] d.h1. 312292.884404: irq_handler_entry: irq=40 name=mmc0
            sshd-9807    [000] d.h1. 312292.884406: irq_handler_exit: irq=40 ret=unhandled
            sshd-9807    [000] d..2. 312292.884422: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.884437: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d..2. 312292.884617: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=S ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
   kworker/u17:1-9290    [000] d..2. 312292.884641: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=9820 next_prio=120
            bash-9820    [000] d..2. 312292.884736: sched_switch: prev_comm=bash prev_pid=9820 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
   kworker/u17:1-9290    [000] d..2. 312292.884754: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=R+ ==> next_comm=bash next_pid=9820 next_prio=120
            bash-9820    [000] d..2. 312292.884778: sched_switch: prev_comm=bash prev_pid=9820 prev_prio=120 prev_state=S ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
   kworker/u17:1-9290    [000] d..2. 312292.884788: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d..2. 312292.884947: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.884992: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d.h1. 312292.884998: irq_handler_entry: irq=40 name=mmc1
            sshd-9807    [000] d.h1. 312292.885009: irq_handler_exit: irq=40 ret=handled
            sshd-9807    [000] d.h1. 312292.885010: irq_handler_entry: irq=40 name=mmc0
            sshd-9807    [000] d.h1. 312292.885012: irq_handler_exit: irq=40 ret=unhandled
            sshd-9807    [000] d.h.. 312292.885018: irq_handler_entry: irq=40 name=mmc1
            sshd-9807    [000] d.h.. 312292.885022: irq_handler_exit: irq=40 ret=handled
            sshd-9807    [000] d.h.. 312292.885023: irq_handler_entry: irq=40 name=mmc0
            sshd-9807    [000] d.h.. 312292.885024: irq_handler_exit: irq=40 ret=unhandled
            sshd-9807    [000] d..2. 312292.885044: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.885061: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d..2. 312292.885110: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.885901: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312292.885915: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312292.897302: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1. 312292.897319: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1. 312292.897320: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312292.897322: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312292.897332: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.897353: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.897357: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.897361: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312292.897362: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312292.897364: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312292.897379: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.897404: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.897408: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.897415: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312292.897416: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312292.897417: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312292.897431: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.897455: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.897459: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.897463: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312292.897464: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312292.897466: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312292.897468: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.897471: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312292.897472: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312292.897474: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312292.897487: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.897504: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.897513: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.897522: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.897551: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312292.897555: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312292.897564: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312292.897565: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312292.897567: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312292.897579: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.897603: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312292.897607: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312292.897614: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312292.897615: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312292.897617: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312292.897628: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.897683: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312292.897688: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312292.897697: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312292.897698: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312292.897700: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312292.897714: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312292.897725: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.897742: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.897901: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312292.897911: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312292.901900: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312292.901908: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312292.901927: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.901953: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.901958: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312292.901962: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312292.901964: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.901965: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312292.901967: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312292.901979: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d..2. 312292.901985: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312292.902001: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.902958: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312292.902962: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312292.909903: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312292.909910: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312292.909939: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312292.909952: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.925903: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312292.925912: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312292.925941: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312292.925962: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.925966: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.925970: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312292.925971: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312292.925972: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312292.925988: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312292.926003: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.926007: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.926010: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312292.926012: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312292.926013: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312292.926026: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312292.926041: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.926045: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312292.926048: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312292.926049: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312292.926051: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312292.926064: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312292.926075: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312292.941903: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312292.941911: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312293.061903: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312293.061908: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2. 312293.061924: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2. 312293.061927: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312293.061945: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312293.061966: irq_handler_entry: irq=28 name=eth0
     kworker/0:1-9798    [000] d.h1. 312293.061970: irq_handler_exit: irq=28 ret=handled
     kworker/0:1-9798    [000] d..2. 312293.061977: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
     kworker/0:2-9753    [000] d..2. 312293.061990: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312293.062010: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.062014: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312293.062024: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312293.062029: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312293.062043: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.062047: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312293.062055: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312293.062060: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312293.062074: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.062078: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312293.062085: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312293.062090: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312293.062104: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.062108: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1. 312293.062115: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d..2. 312293.062120: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312293.062134: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.065271: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312293.065274: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312293.105905: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312293.105912: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312293.136047: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1. 312293.136062: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1. 312293.136063: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312293.136064: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312293.136074: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312293.136096: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.136100: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312293.136104: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312293.136106: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312293.136109: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312293.136110: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312293.136112: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312293.136125: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312293.136151: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.136155: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312293.136161: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312293.136162: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312293.136164: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312293.136178: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312293.136202: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.136206: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312293.136211: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312293.136212: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312293.136213: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312293.136216: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312293.136219: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312293.136220: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312293.136222: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312293.136235: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312293.136251: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312293.136259: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312293.136268: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312293.136282: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312293.136285: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312293.136289: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312293.136290: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312293.136292: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312293.136304: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312293.136313: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312293.136328: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.139313: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1. 312293.139324: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312293.139333: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312293.139349: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.139353: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312293.139356: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312293.139357: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312293.139359: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312293.139374: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312293.139406: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.139411: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312293.139420: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312293.139421: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312293.139423: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312293.139437: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312293.139464: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.139468: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312293.139477: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312293.139478: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312293.139479: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312293.139493: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312293.139553: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d.h1. 312293.139559: irq_handler_entry: irq=40 name=mmc1
            sshd-9807    [000] d.h1. 312293.139568: irq_handler_exit: irq=40 ret=handled
            sshd-9807    [000] d.h1. 312293.139569: irq_handler_entry: irq=40 name=mmc0
            sshd-9807    [000] d.h1. 312293.139571: irq_handler_exit: irq=40 ret=unhandled
            sshd-9807    [000] d..2. 312293.139586: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312293.139600: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d..2. 312293.139750: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=S ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
   kworker/u17:1-9290    [000] d..2. 312293.139772: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=9820 next_prio=120
            bash-9820    [000] d..2. 312293.139854: sched_switch: prev_comm=bash prev_pid=9820 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
   kworker/u17:1-9290    [000] d..2. 312293.139871: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=R+ ==> next_comm=bash next_pid=9820 next_prio=120
            bash-9820    [000] d..2. 312293.139896: sched_switch: prev_comm=bash prev_pid=9820 prev_prio=120 prev_state=S ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
   kworker/u17:1-9290    [000] d..2. 312293.139906: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d..2. 312293.140051: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312293.140094: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d.h1. 312293.140100: irq_handler_entry: irq=40 name=mmc1
            sshd-9807    [000] d.h1. 312293.140111: irq_handler_exit: irq=40 ret=handled
            sshd-9807    [000] d.h1. 312293.140112: irq_handler_entry: irq=40 name=mmc0
            sshd-9807    [000] d.h1. 312293.140113: irq_handler_exit: irq=40 ret=unhandled
            sshd-9807    [000] d.h1. 312293.140119: irq_handler_entry: irq=40 name=mmc1
            sshd-9807    [000] d.h1. 312293.140123: irq_handler_exit: irq=40 ret=handled
            sshd-9807    [000] d.h1. 312293.140124: irq_handler_entry: irq=40 name=mmc0
            sshd-9807    [000] d.h1. 312293.140126: irq_handler_exit: irq=40 ret=unhandled
            sshd-9807    [000] d..2. 312293.140143: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312293.140160: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d..2. 312293.140208: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.153908: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312293.153916: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312293.153949: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312293.153961: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.156650: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1. 312293.156665: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1. 312293.156666: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312293.156667: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312293.156676: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312293.156695: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.156699: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312293.156703: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312293.156704: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312293.156705: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312293.156720: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312293.156744: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.156748: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312293.156755: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312293.156756: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312293.156757: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312293.156771: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312293.156794: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.156798: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312293.156802: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312293.156803: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312293.156804: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312293.156806: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312293.156810: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312293.156811: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312293.156812: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312293.156826: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312293.156842: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312293.156851: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312293.156859: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312293.156887: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312293.156891: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312293.156901: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312293.156902: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312293.156903: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312293.156916: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312293.156940: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312293.156944: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312293.156951: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312293.156952: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312293.156953: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312293.156965: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312293.157017: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312293.157022: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312293.157031: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312293.157032: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312293.157034: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312293.157047: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312293.157059: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312293.157075: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.169906: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312293.169914: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2. 312293.169929: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2. 312293.169935: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312293.169956: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312293.169966: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=S ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312293.169987: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.181906: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312293.181914: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312293.185905: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312293.185911: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312293.185933: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312293.185953: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.185957: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312293.185961: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312293.185962: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312293.185964: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312293.185979: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312293.185994: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.185998: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312293.186002: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312293.186003: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312293.186004: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312293.186018: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312293.186032: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.186036: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312293.186040: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312293.186041: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312293.186042: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312293.186055: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312293.186067: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312293.189899: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312293.189904: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312293.189906: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312293.189915: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d..2. 312293.189932: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kcompactd0 next_pid=49 next_prio=120
      kcompactd0-49      [003] d..2. 312293.189948: sched_switch: prev_comm=kcompactd0 prev_pid=49 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312293.189952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312293.189956: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312293.279121: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1. 312293.279138: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1. 312293.279139: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312293.279140: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] dNh1. 312293.279143: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1. 312293.279146: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312293.279154: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] dNh1. 312293.279176: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] dNh1. 312293.279180: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] dNh1. 312293.279181: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] dNh1. 312293.279182: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312293.279192: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/0:2 next_pid=9753 next_prio=120
     kworker/0:2-9753    [000] d..2. 312293.279204: sched_switch: prev_comm=kworker/0:2 prev_pid=9753 prev_prio=120 prev_state=I ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312293.279239: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.279243: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312293.279250: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312293.279251: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312293.279253: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312293.279269: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312293.279294: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.279298: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312293.279302: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312293.279304: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312293.279305: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312293.279308: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312293.279311: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312293.279312: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312293.279314: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312293.279328: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312293.279344: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312293.279352: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312293.279361: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312293.279375: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312293.279378: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312293.279382: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312293.279383: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312293.279385: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312293.279397: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312293.279406: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312293.279419: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.282405: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1. 312293.282416: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312293.282424: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312293.282440: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.282444: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312293.282448: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312293.282449: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312293.282451: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312293.282465: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312293.282496: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.282500: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312293.282510: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312293.282511: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312293.282512: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312293.282527: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312293.282554: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.282558: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312293.282567: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312293.282568: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312293.282570: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312293.282584: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312293.282643: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d.h1. 312293.282648: irq_handler_entry: irq=40 name=mmc1
            sshd-9807    [000] d.h1. 312293.282658: irq_handler_exit: irq=40 ret=handled
            sshd-9807    [000] d.h1. 312293.282659: irq_handler_entry: irq=40 name=mmc0
            sshd-9807    [000] d.h1. 312293.282661: irq_handler_exit: irq=40 ret=unhandled
            sshd-9807    [000] d..2. 312293.282676: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312293.282690: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d..2. 312293.282843: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=S ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
   kworker/u17:1-9290    [000] d..2. 312293.282865: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=9820 next_prio=120
            bash-9820    [000] d..2. 312293.282945: sched_switch: prev_comm=bash prev_pid=9820 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
   kworker/u17:1-9290    [000] d..2. 312293.282963: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=R+ ==> next_comm=bash next_pid=9820 next_prio=120
            bash-9820    [000] d..2. 312293.282987: sched_switch: prev_comm=bash prev_pid=9820 prev_prio=120 prev_state=S ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
   kworker/u17:1-9290    [000] d..2. 312293.282998: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d..2. 312293.283138: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312293.283182: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d.h1. 312293.283187: irq_handler_entry: irq=40 name=mmc1
            sshd-9807    [000] d.h1. 312293.283198: irq_handler_exit: irq=40 ret=handled
            sshd-9807    [000] d.h1. 312293.283200: irq_handler_entry: irq=40 name=mmc0
            sshd-9807    [000] d.h1. 312293.283202: irq_handler_exit: irq=40 ret=unhandled
            sshd-9807    [000] d.h.. 312293.283207: irq_handler_entry: irq=40 name=mmc1
            sshd-9807    [000] d.h.. 312293.283210: irq_handler_exit: irq=40 ret=handled
            sshd-9807    [000] d.h.. 312293.283211: irq_handler_entry: irq=40 name=mmc0
            sshd-9807    [000] d.h.. 312293.283213: irq_handler_exit: irq=40 ret=unhandled
            sshd-9807    [000] d..2. 312293.283230: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312293.283247: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d..2. 312293.283296: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.294056: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1. 312293.294071: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1. 312293.294073: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312293.294075: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312293.294085: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312293.294104: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.294108: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312293.294112: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312293.294113: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312293.294114: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312293.294129: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312293.294154: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.294158: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312293.294164: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312293.294165: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312293.294167: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312293.294181: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312293.294205: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.294208: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312293.294212: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312293.294214: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312293.294215: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312293.294217: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312293.294221: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312293.294222: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312293.294223: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312293.294236: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312293.294252: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312293.294260: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312293.294269: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312293.294297: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312293.294301: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312293.294310: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312293.294311: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312293.294313: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312293.294325: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312293.294350: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312293.294353: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312293.294360: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312293.294361: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312293.294363: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312293.294375: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312293.294426: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312293.294430: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312293.294440: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312293.294441: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312293.294442: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312293.294456: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312293.294468: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312293.294485: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.297905: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312293.297918: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312293.297944: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312293.297977: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.309908: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312293.309915: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312293.309944: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312293.309956: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.325907: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312293.325914: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312293.325943: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312293.325963: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.325968: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312293.325971: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312293.325972: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312293.325974: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312293.325989: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312293.326004: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.326008: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312293.326011: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312293.326012: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312293.326014: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312293.326027: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312293.326041: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.326045: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312293.326049: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312293.326050: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312293.326051: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312293.326064: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=brcmf_wdog/mmc1 next_pid=372 next_prio=120
 brcmf_wdog/mmc1-372     [000] d..2. 312293.326075: sched_switch: prev_comm=brcmf_wdog/mmc1 prev_pid=372 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.341909: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312293.341917: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312293.349907: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312293.349908: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312293.349914: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312293.349914: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312293.349941: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312293.349965: irq_handler_entry: irq=11 name=arch_timer
     kworker/0:1-9798    [000] d.h1. 312293.349971: irq_handler_exit: irq=11 ret=handled
     kworker/0:1-9798    [000] d..2. 312293.349988: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.349993: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] dNh1. 312293.350003: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [000] d..2. 312293.350008: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312293.350026: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.350875: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312293.350879: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312293.406747: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1. 312293.406762: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNh1. 312293.406764: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1. 312293.406771: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d..2. 312293.406780: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=gmain next_pid=561 next_prio=120
           gmain-561     [000] d..2. 312293.406913: sched_switch: prev_comm=gmain prev_pid=561 prev_prio=120 prev_state=S ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312293.406947: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.407505: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312293.407510: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312293.409905: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312293.409918: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312293.409940: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1. 312293.409949: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2. 312293.409957: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_preempt next_pid=18 next_prio=120
     rcu_preempt-18      [003] d..2. 312293.409977: sched_switch: prev_comm=rcu_preempt prev_pid=18 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [003] d.h1. 312293.409981: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1. 312293.409985: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312293.413906: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312293.413916: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312293.417906: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312293.417913: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312293.417923: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1. 312293.417931: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2. 312293.417938: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_preempt next_pid=18 next_prio=120
     rcu_preempt-18      [003] d..2. 312293.417953: sched_switch: prev_comm=rcu_preempt prev_pid=18 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.421906: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312293.421915: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312293.425906: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312293.425913: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1. 312293.425922: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1. 312293.425931: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2. 312293.425938: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_preempt next_pid=18 next_prio=120
     rcu_preempt-18      [003] d..2. 312293.425953: sched_switch: prev_comm=rcu_preempt prev_pid=18 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.429906: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1. 312293.429914: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312293.432458: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1. 312293.432475: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1. 312293.432477: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1. 312293.432479: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312293.432490: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312293.432513: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.432517: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312293.432520: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312293.432522: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312293.432523: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312293.432539: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312293.432565: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.432570: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312293.432577: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312293.432578: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312293.432579: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312293.432593: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312293.432617: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.432621: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312293.432625: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312293.432627: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312293.432628: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1. 312293.432630: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312293.432634: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312293.432635: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312293.432636: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312293.432650: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312293.432668: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312293.432676: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312293.432685: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312293.432699: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d.h1. 312293.432703: irq_handler_entry: irq=40 name=mmc1
     kworker/0:1-9798    [000] d.h1. 312293.432707: irq_handler_exit: irq=40 ret=handled
     kworker/0:1-9798    [000] d.h1. 312293.432708: irq_handler_entry: irq=40 name=mmc0
     kworker/0:1-9798    [000] d.h1. 312293.432710: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:1-9798    [000] d..2. 312293.432722: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312293.432730: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=kworker/0:1 next_pid=9798 next_prio=120
     kworker/0:1-9798    [000] d..2. 312293.432746: sched_switch: prev_comm=kworker/0:1 prev_pid=9798 prev_prio=120 prev_state=I ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.435731: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1. 312293.435741: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d..2. 312293.435750: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312293.435767: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.435771: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312293.435775: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312293.435776: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312293.435777: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312293.435791: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312293.435824: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.435828: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312293.435837: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312293.435839: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312293.435840: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312293.435854: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312293.435882: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=swapper/0 next_pid=0 next_prio=120
          <idle>-0       [000] d.h1. 312293.435886: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1. 312293.435895: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1. 312293.435896: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1. 312293.435898: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d..2. 312293.435911: sched_switch: prev_comm=swapper/0 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312293.435979: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d.h1. 312293.435987: irq_handler_entry: irq=40 name=mmc1
            sshd-9807    [000] d.h1. 312293.435998: irq_handler_exit: irq=40 ret=handled
            sshd-9807    [000] d.h1. 312293.435999: irq_handler_entry: irq=40 name=mmc0
            sshd-9807    [000] d.h1. 312293.436001: irq_handler_exit: irq=40 ret=unhandled
            sshd-9807    [000] d..2. 312293.436021: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=R ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312293.436039: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d..2. 312293.436201: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=S ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
   kworker/u17:1-9290    [000] d..2. 312293.436225: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=9820 next_prio=120
            bash-9820    [000] d..2. 312293.436278: sched_switch: prev_comm=bash prev_pid=9820 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
   kworker/u17:1-9290    [000] d..2. 312293.436303: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=I ==> next_comm=bash next_pid=9820 next_prio=120
            bash-9820    [000] d..2. 312293.436408: sched_switch: prev_comm=bash prev_pid=9820 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u17:1 next_pid=9290 next_prio=120
   kworker/u17:1-9290    [000] d..2. 312293.436422: sched_switch: prev_comm=kworker/u17:1 prev_pid=9290 prev_prio=120 prev_state=I ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [000] d..2. 312293.436594: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312293.436638: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=D ==> next_comm=bash next_pid=9820 next_prio=120
            bash-9820    [000] d.h1. 312293.436646: irq_handler_entry: irq=40 name=mmc1
            bash-9820    [000] d.h1. 312293.436658: irq_handler_exit: irq=40 ret=handled
            bash-9820    [000] d.h1. 312293.436660: irq_handler_entry: irq=40 name=mmc0
            bash-9820    [000] d.h1. 312293.436662: irq_handler_exit: irq=40 ret=unhandled
            bash-9820    [000] d.h1. 312293.436667: irq_handler_entry: irq=40 name=mmc1
            bash-9820    [000] d.h1. 312293.436671: irq_handler_exit: irq=40 ret=handled
            bash-9820    [000] d.h1. 312293.436672: irq_handler_entry: irq=40 name=mmc0
            bash-9820    [000] d.h1. 312293.436673: irq_handler_exit: irq=40 ret=unhandled
            bash-9820    [000] d..2. 312293.436693: sched_switch: prev_comm=bash prev_pid=9820 prev_prio=120 prev_state=R+ ==> next_comm=kworker/u21:0 next_pid=89 next_prio=100
   kworker/u21:0-89      [000] d..2. 312293.436715: sched_switch: prev_comm=kworker/u21:0 prev_pid=89 prev_prio=100 prev_state=I ==> next_comm=bash next_pid=9820 next_prio=120
            bash-9820    [000] ..... 312293.436968: __arm64_sys_clone+0x4/0x40 <-invoke_syscall+0x50/0x120
            bash-9820    [000] ..... 312293.436976: <stack trace>
 => __arm64_sys_clone+0x8/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
            bash-9820    [000] ..... 312293.436979: copy_process+0x4/0x1518 <-kernel_clone+0xa0/0x470
            bash-9820    [000] ..... 312293.436981: <stack trace>
 => copy_process+0x8/0x1518
 => kernel_clone+0xa0/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
          <idle>-0       [001] dnh1. 312293.437742: irq_handler_entry: irq=1 name=IPI
          <idle>-0       [001] dNh1. 312293.437744: irq_handler_exit: irq=1 ret=handled
          <idle>-0       [001] d..2. 312293.437758: sched_switch: prev_comm=swapper/1 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=9832 next_prio=120
            bash-9820    [000] d.h.. 312293.437908: irq_handler_entry: irq=11 name=arch_timer
   get_ftrace.sh-9832    [001] d.h1. 312293.437909: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1. 312293.437943: irq_handler_entry: irq=2 name=IPI
   get_ftrace.sh-9832    [001] d.h1. 312293.437947: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1. 312293.437948: irq_handler_exit: irq=2 ret=handled
   get_ftrace.sh-9832    [001] d.H2. 312293.437967: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] d.h1. 312293.437968: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] d.h1. 312293.437970: irq_handler_exit: irq=2 ret=handled
            bash-9820    [000] d.h.. 312293.437970: irq_handler_exit: irq=11 ret=handled
   get_ftrace.sh-9832    [001] d.H2. 312293.437978: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dnh1. 312293.438020: irq_handler_entry: irq=1 name=IPI
          <idle>-0       [003] dNh1. 312293.438021: irq_handler_exit: irq=1 ret=handled
          <idle>-0       [003] d..2. 312293.438031: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=systemd-journal next_pid=237 next_prio=120
          <idle>-0       [002] d..2. 312293.438055: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=sshd next_pid=9807 next_prio=120
            sshd-9807    [002] d..2. 312293.438161: sched_switch: prev_comm=sshd prev_pid=9807 prev_prio=120 prev_state=S ==> next_comm=swapper/2 next_pid=0 next_prio=120
            bash-9820    [000] d..2. 312293.438174: sched_switch: prev_comm=bash prev_pid=9820 prev_prio=120 prev_state=S ==> next_comm=swapper/0 next_pid=0 next_prio=120
   get_ftrace.sh-9832    [001] d..2. 312293.438579: sched_switch: prev_comm=bash prev_pid=9832 prev_prio=120 prev_state=R+ ==> next_comm=migration/1 next_pid=24 next_prio=0
          <idle>-0       [002] dnh1. 312293.438620: irq_handler_entry: irq=1 name=IPI
          <idle>-0       [002] dNh1. 312293.438622: irq_handler_exit: irq=1 ret=handled
     migration/1-24      [001] d..2. 312293.438627: sched_switch: prev_comm=migration/1 prev_pid=24 prev_prio=0 prev_state=S ==> next_comm=kworker/1:0 next_pid=9766 next_prio=120
          <idle>-0       [002] d..2. 312293.438632: sched_switch: prev_comm=swapper/2 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=bash next_pid=9832 next_prio=120
     kworker/1:0-9766    [001] d..2. 312293.438718: sched_switch: prev_comm=kworker/1:0 prev_pid=9766 prev_prio=120 prev_state=I ==> next_comm=swapper/1 next_pid=0 next_prio=120
 systemd-journal-237     [003] d..2. 312293.439629: sched_switch: prev_comm=systemd-journal prev_pid=237 prev_prio=120 prev_state=S ==> next_comm=swapper/3 next_pid=0 next_prio=120
   get_ftrace.sh-9832    [002] d.h.. 312293.440149: irq_handler_entry: irq=11 name=arch_timer
   get_ftrace.sh-9832    [002] d.h.. 312293.440157: irq_handler_exit: irq=11 ret=handled
   get_ftrace.sh-9832    [002] d.h.. 312293.441912: irq_handler_entry: irq=11 name=arch_timer
   get_ftrace.sh-9832    [002] d.h.. 312293.441978: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1. 312293.441979: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1. 312293.441985: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d.h1. 312293.442010: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1. 312293.442030: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d..2. 312293.442044: sched_switch: prev_comm=swapper/3 prev_pid=0 prev_prio=120 prev_state=R ==> next_comm=rcu_preempt next_pid=18 next_prio=120
     rcu_preempt-18      [003] d..2. 312293.442074: sched_switch: prev_comm=rcu_preempt prev_pid=18 prev_prio=120 prev_state=I ==> next_comm=swapper/3 next_pid=0 next_prio=120
