# tracer: function
#
# entries-in-buffer/entries-written: 2826/2826   #P:4
#
#                                _-----=> irqs-off/BH-disabled
#                               / _----=> need-resched
#                              | / _---=> hardirq/softirq
#                              || / _--=> preempt-depth
#                              ||| / _-=> migrate-disable
#                              |||| /     delay
#           TASK-PID     CPU#  |||||  TIMESTAMP  FUNCTION
#              | |         |   |||||     |         |
          <idle>-0       [000] d.h1.  1975.467404: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.  1975.467413: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1975.467433: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1975.467435: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1975.467435: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1975.467436: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.  1975.467772: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1975.467781: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.  1975.468078: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.  1975.468085: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1975.470445: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.  1975.470453: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1975.470465: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1975.470468: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1975.470469: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1975.470470: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1975.470502: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1975.470515: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1975.470515: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1975.470516: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1975.470541: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1975.470543: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1975.470543: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1975.470544: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [001] d.h1.  1975.471098: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1975.471098: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1975.471108: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1975.471109: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNH1.  1975.471121: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNH1.  1975.471123: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1975.472322: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.  1975.472331: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.  1975.472331: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.  1975.472332: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1975.472346: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1975.472348: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1975.472349: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1975.472351: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1975.472351: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1975.472352: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1975.472374: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1975.472378: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1975.472378: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1975.472379: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1975.472398: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1975.472400: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1975.472400: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1975.472401: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1975.472402: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1975.472403: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1975.472404: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1975.472404: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1975.472437: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1975.472442: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1975.472443: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1975.472443: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1975.472465: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1975.472467: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1975.472468: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1975.472468: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1975.472469: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1975.472471: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1975.472471: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1975.472472: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1975.472529: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1975.472534: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1975.472534: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1975.472535: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1975.472555: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1975.472558: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1975.472558: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1975.472559: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1975.472560: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1975.472561: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1975.472562: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1975.472562: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1975.472591: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1975.472595: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1975.472595: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1975.472596: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1975.472597: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1975.472599: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1975.472599: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1975.472600: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [001] d.h1.  1975.475097: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1975.475098: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1975.475101: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1975.475101: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1975.477616: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1975.477618: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1975.479097: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1975.479097: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1975.479099: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1975.479100: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1975.483097: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1975.483097: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1975.483099: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1975.483100: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1975.483115: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1975.483117: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1975.487097: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1975.487097: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1975.487100: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1975.487100: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1975.487106: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1975.487110: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d.h1.  1975.487119: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1975.487121: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1975.491097: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1975.491101: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1975.495097: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1975.495101: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1975.499097: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1975.499100: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1975.503097: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1975.503101: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1975.503105: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1975.503108: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1975.503118: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1975.503120: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1975.503121: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1975.503121: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.  1975.503124: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1975.503127: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1975.503137: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1975.503139: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1975.503139: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1975.503140: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.  1975.503143: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1975.503145: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1975.503154: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1975.503156: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1975.503156: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1975.503157: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.  1975.503160: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1975.503162: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d.h1.  1975.531098: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1975.531099: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1975.531101: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1975.531102: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1975.531124: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] d.h1.  1975.531127: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.  1975.531130: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.  1975.531130: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1975.531131: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1975.531132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1975.531145: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1975.531146: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1975.687098: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1975.687101: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1975.755099: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1975.755101: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1975.755123: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1975.755125: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1975.755125: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.  1975.755128: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [001] d.h1.  1975.755128: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.  1975.755130: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1975.755142: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.  1975.755144: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [001] d.h1.  1975.755146: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.  1975.755148: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1975.755161: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.  1975.755162: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [001] d.h1.  1975.755163: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.  1975.755166: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1975.755178: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.  1975.755180: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [001] d.h1.  1975.755180: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.  1975.755183: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1975.755195: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.  1975.755196: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [001] d.h1.  1975.755197: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.  1975.755200: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.  1975.756858: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1975.756860: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1975.759099: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1975.759101: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1975.803056: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1975.803058: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1975.851099: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1975.851099: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1975.851101: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1975.851102: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1975.851117: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1975.851118: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1975.851130: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1975.851130: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1975.851131: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [001] d.h1.  1975.851132: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1975.851133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1975.851135: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [001] d.h1.  1975.851138: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.  1975.851141: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.  1975.851531: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1975.851533: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1975.883099: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1975.883102: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1976.348224: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.  1976.348230: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1976.348272: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1976.348275: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1976.367580: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1976.367582: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1976.395100: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1976.395100: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1976.395102: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1976.395103: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1976.395117: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1976.395118: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1976.459101: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1976.459101: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1976.459103: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1976.459104: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1976.459128: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1976.459130: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1976.779102: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1976.779104: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1976.779122: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1976.779123: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1976.779124: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1.  1976.779127: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.  1976.779139: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1.  1976.779143: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.  1976.779154: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1.  1976.779157: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.  1976.779168: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1.  1976.779171: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.  1976.779182: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1.  1976.779186: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.  1976.780567: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1976.780569: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1976.783101: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1976.783104: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1976.833634: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.  1976.833639: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1976.833695: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1976.833697: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1976.875103: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1976.875107: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1976.875132: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1976.875133: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1976.875134: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.  1976.875139: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1976.907103: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1976.907106: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1976.907109: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.  1976.907113: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.  1976.907121: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1976.907123: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1977.021215: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.  1977.021221: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1977.021352: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.  1977.021356: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1977.021372: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1977.021374: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1977.021374: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.021377: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.021377: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.021378: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.021723: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1977.021724: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1977.023948: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1977.023950: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1977.024385: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.  1977.024389: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1977.024399: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.024403: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.024403: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.024404: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.024419: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.024422: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.024422: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.024423: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.024447: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.024469: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.024470: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.024470: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.024511: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.024513: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.024513: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.024514: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.  1977.024525: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1977.024529: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1977.024544: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.  1977.024551: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.  1977.024551: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.  1977.024552: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.024564: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.024566: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.024566: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.024566: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.024586: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.024589: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.024590: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.024590: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.024609: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.024611: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.024611: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.024612: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.024613: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.024615: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.024615: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.024615: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.024646: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.024649: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.024650: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.024650: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.024651: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.024653: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.024653: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.024654: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.024700: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.024702: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.024703: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.024703: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.024724: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.024736: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.024736: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.024737: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.024749: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.024761: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.024761: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.024762: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.024762: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.024764: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.024765: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.024765: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.  1977.024776: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1977.024779: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1977.024789: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.024793: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.024793: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.024794: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.024795: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.024797: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.024797: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.024798: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.024812: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.024814: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.024814: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.024815: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.024834: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.024843: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.024843: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.024844: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.024862: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.024863: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.024864: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.024864: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.  1977.024874: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1977.024878: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1977.025231: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.  1977.025238: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.  1977.025239: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.  1977.025239: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.025250: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.025253: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.025253: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.025253: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.025272: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.025275: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.025276: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.025276: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.025294: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.025296: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.025297: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.025297: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.025298: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.025300: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.025300: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.025301: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.025329: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.025333: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.025333: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.025333: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.025334: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.025336: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.025336: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.025337: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.025366: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.025368: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.025368: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.025369: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.025377: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.025385: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.025385: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.025385: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.025386: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.025388: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.025389: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.025389: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.  1977.025399: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1977.025402: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1977.025412: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.025416: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.025416: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.025417: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.025418: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.025420: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.025420: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.025420: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.025434: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.025436: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.025437: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.025437: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.025457: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.025465: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.025466: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.025466: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.025484: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.025485: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.025486: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.025486: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.  1977.025496: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1977.025500: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1977.025655: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.  1977.025662: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.  1977.025663: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.  1977.025663: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.025674: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.025676: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.025676: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.025677: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.025695: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.025698: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.025699: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.025699: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.025717: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.025719: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.025720: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.025720: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.025721: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.025723: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.025723: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.025724: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.025751: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.025755: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.025755: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.025756: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.025756: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.025758: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.025759: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.025759: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.025787: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.025789: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.025789: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.025790: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.025798: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.025805: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.025805: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.025806: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.025807: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.025809: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.025809: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.025809: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.  1977.025819: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1977.025822: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1977.025833: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.025836: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.025837: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.025837: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.025839: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.025840: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.025841: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.025841: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.025855: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.025857: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.025858: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.025858: irq_handler_exit: irq=40 ret=unhandled
   kworker/u21:0-86      [000] d.h..  1977.025878: irq_handler_entry: irq=40 name=mmc1
   kworker/u21:0-86      [000] d.h..  1977.025880: irq_handler_exit: irq=40 ret=handled
   kworker/u21:0-86      [000] d.h..  1977.025880: irq_handler_entry: irq=40 name=mmc0
   kworker/u21:0-86      [000] d.h..  1977.025881: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.025984: irq_handler_entry: irq=15 name=DMA IRQ
          <idle>-0       [000] d.h1.  1977.025986: irq_handler_exit: irq=15 ret=handled
          <idle>-0       [000] d.h1.  1977.026018: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.026020: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.026020: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.026021: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.  1977.026031: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1977.026034: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1977.026077: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.  1977.026084: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.  1977.026085: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.  1977.026085: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.026096: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.026098: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.026099: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.026099: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.026117: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.026121: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.026121: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.026122: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.026139: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.026142: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.026142: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.026143: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.026143: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.026145: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.026145: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.026146: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.026174: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.026177: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.026178: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.026178: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.026179: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.026181: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.026181: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.026182: irq_handler_exit: irq=40 ret=unhandled
   kworker/u21:0-86      [000] d.h..  1977.026213: irq_handler_entry: irq=40 name=mmc1
   kworker/u21:0-86      [000] d.h..  1977.026215: irq_handler_exit: irq=40 ret=handled
   kworker/u21:0-86      [000] d.h..  1977.026215: irq_handler_entry: irq=40 name=mmc0
   kworker/u21:0-86      [000] d.h..  1977.026215: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.026320: irq_handler_entry: irq=15 name=DMA IRQ
          <idle>-0       [000] d.h1.  1977.026320: irq_handler_exit: irq=15 ret=handled
          <idle>-0       [000] d.h1.  1977.026321: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.026323: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.026323: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.026324: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.  1977.026337: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1977.026340: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1977.026351: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.026354: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.026355: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.026355: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.026356: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.026358: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.026358: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.026359: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.026373: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.026375: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.026375: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.026376: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.026395: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.026398: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.026399: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.026399: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.026404: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.026405: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.026406: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.026406: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.  1977.026416: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1977.026420: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1977.026426: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.  1977.026434: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.  1977.026434: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.  1977.026435: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.026446: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.026448: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.026448: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.026449: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.026466: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.026470: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.026471: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.026471: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.026489: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.026491: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.026491: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.026492: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.026493: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.026494: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.026495: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.026495: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.026523: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.026526: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.026527: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.026527: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.026528: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.026530: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.026530: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.026531: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.  1977.026549: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1977.026551: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1977.026562: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.026566: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.026566: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.026567: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.026568: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.026569: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.026570: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.026570: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [001] d.h1.  1977.026880: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.  1977.026886: irq_handler_exit: irq=2 ret=handled
     dbus-daemon-441     [001] d.h..  1977.027106: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1977.027123: irq_handler_entry: irq=2 name=IPI
     dbus-daemon-441     [001] d.h..  1977.027124: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1977.027125: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.  1977.031759: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1977.031761: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1977.039103: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1977.039107: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1977.039113: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1977.039116: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d.h1.  1977.039287: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1977.039289: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1977.055102: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1977.055103: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1977.055105: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1977.055106: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] dNH2.  1977.055111: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNH2.  1977.055113: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1977.055135: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.055138: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.055138: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.055139: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.  1977.055143: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1977.055146: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1977.055157: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.055159: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.055159: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.055160: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.  1977.055163: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1977.055165: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1977.055174: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.055176: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.055177: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.055177: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.  1977.055180: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1977.055182: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.  1977.071103: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1977.071105: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1977.125587: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1977.125589: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1977.135131: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1977.135133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1977.227103: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1977.227103: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1977.227103: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1977.227105: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1977.227106: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1977.227107: irq_handler_exit: irq=11 ret=handled
     kworker/1:1-936     [001] d.h1.  1977.227131: irq_handler_entry: irq=11 name=arch_timer
     kworker/1:1-936     [001] d.h1.  1977.227134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1977.227140: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.  1977.227142: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [001] d.h1.  1977.227142: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.  1977.227145: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.  1977.227514: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1977.227515: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1977.360532: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1977.360534: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1977.419104: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1977.419104: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1977.419106: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1977.419106: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.H1.  1977.419110: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNH1.  1977.419113: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.  1977.419126: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1977.419127: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1977.483103: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1977.483104: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1977.483104: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1977.483106: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1977.483106: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1977.483106: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1977.483128: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1977.483130: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1977.803104: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1977.803105: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1977.803106: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1977.803107: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1977.803126: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1977.803128: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1977.803129: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.  1977.803131: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [002] d.h1.  1977.803133: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1977.803135: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1977.803147: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.  1977.803149: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [002] d.h1.  1977.803150: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1977.803153: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1977.803165: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.  1977.803166: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [002] d.h1.  1977.803167: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1977.803170: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1977.803182: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.  1977.803183: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [002] d.h1.  1977.803184: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1977.803187: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1977.803198: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.  1977.803200: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [002] d.h1.  1977.803201: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1977.803203: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d.h1.  1977.804868: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1977.804869: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1977.807105: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1977.807107: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1977.853875: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.  1977.853883: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.  1977.853883: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.  1977.853884: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.853899: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1977.853900: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1977.853901: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.853903: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.853903: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.853904: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.853926: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.853930: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.853931: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.853931: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.853951: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.853953: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.853954: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.853954: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.853955: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.853957: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.853957: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.853958: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.853982: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.853984: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.853984: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.853985: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.855830: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1977.855831: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1977.856992: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.  1977.856995: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1977.857006: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.857008: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.857008: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.857009: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.857032: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.857035: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.857036: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.857036: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.857037: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.857039: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.857039: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.857040: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.857061: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.857064: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.857064: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.857065: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.857066: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.857067: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.857068: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.857068: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.  1977.857112: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1977.857118: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1977.857132: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.857135: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.857136: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.857136: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.857137: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.857139: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.857139: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.857140: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.857160: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.857164: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.857164: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.857165: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.857166: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.857167: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.857168: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.857168: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.857225: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.857228: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.857229: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.857230: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.857231: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.857233: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.857233: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.857233: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.857258: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.857262: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.857263: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.857263: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.857269: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.857271: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.857271: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.857272: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.857273: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.  1977.857280: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d.h1.  1977.857339: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1977.857344: irq_handler_exit: irq=2 ret=handled
            bash-850     [000] d.h..  1977.857423: irq_handler_entry: irq=2 name=IPI
            bash-850     [000] d.h..  1977.857426: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dnh1.  1977.857744: irq_handler_entry: irq=1 name=IPI
          <idle>-0       [001] dNh1.  1977.857745: irq_handler_exit: irq=1 ret=handled
          <idle>-0       [001] d.h1.  1977.857962: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.  1977.857970: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1977.858023: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.858032: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.858033: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.858034: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.858046: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.858048: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.858049: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.858049: irq_handler_exit: irq=40 ret=unhandled
             cat-949     [001] d.h..  1977.859109: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1977.859143: irq_handler_entry: irq=2 name=IPI
             cat-949     [001] d.h..  1977.859144: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1977.859145: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d.h1.  1977.859163: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1977.859173: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d.h1.  1977.859196: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1977.859197: irq_handler_exit: irq=11 ret=handled
             cat-949     [001] d..1.  1977.859231: rpi_get_interrupt_info+0x4/0x58 <-show_interrupts+0x27c/0x398
             cat-949     [001] d..1.  1977.859236: <stack trace>
 => rpi_get_interrupt_info+0x8/0x58
 => show_interrupts+0x27c/0x398
 => seq_read_iter+0x34c/0x460
 => proc_reg_read_iter+0x8c/0xe8
 => vfs_read+0x238/0x330
 => ksys_read+0x7c/0x120
 => __arm64_sys_read+0x24/0x38
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
             cat-949     [001] d..1.  1977.859242: rpi_get_interrupt_info+0x10/0x58: [cat] 1466395112: vgic, irq_handler : 000000003fe2273f 
             cat-949     [001] d..1.  1977.859247: rpi_get_interrupt_info+0x4/0x58 <-show_interrupts+0x27c/0x398
             cat-949     [001] d..1.  1977.859247: <stack trace>
 => rpi_get_interrupt_info+0x8/0x58
 => show_interrupts+0x27c/0x398
 => seq_read_iter+0x34c/0x460
 => proc_reg_read_iter+0x8c/0xe8
 => vfs_read+0x238/0x330
 => ksys_read+0x7c/0x120
 => __arm64_sys_read+0x24/0x38
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
             cat-949     [001] d..1.  1977.859249: rpi_get_interrupt_info+0x10/0x58: [cat] 1477356896: arch_timer, irq_handler : 00000000deda0c52 
             cat-949     [001] d..1.  1977.859252: rpi_get_interrupt_info+0x4/0x58 <-show_interrupts+0x27c/0x398
             cat-949     [001] d..1.  1977.859252: <stack trace>
 => rpi_get_interrupt_info+0x8/0x58
 => show_interrupts+0x27c/0x398
 => seq_read_iter+0x34c/0x460
 => proc_reg_read_iter+0x8c/0xe8
 => vfs_read+0x238/0x330
 => ksys_read+0x7c/0x120
 => __arm64_sys_read+0x24/0x38
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
             cat-949     [001] d..1.  1977.859254: rpi_get_interrupt_info+0x10/0x58: [cat] 1466360752: kvm guest vtimer, irq_handler : 000000007ac2d3c7 
             cat-949     [001] d..1.  1977.859258: rpi_get_interrupt_info+0x4/0x58 <-show_interrupts+0x27c/0x398
             cat-949     [001] d..1.  1977.859259: <stack trace>
 => rpi_get_interrupt_info+0x8/0x58
 => show_interrupts+0x27c/0x398
 => seq_read_iter+0x34c/0x460
 => proc_reg_read_iter+0x8c/0xe8
 => vfs_read+0x238/0x330
 => ksys_read+0x7c/0x120
 => __arm64_sys_read+0x24/0x38
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
             cat-949     [001] d..1.  1977.859260: rpi_get_interrupt_info+0x10/0x58: [cat] 1477571728: fe00b880.mailbox, irq_handler : 000000005e596c7a 
             cat-949     [001] d..1.  1977.859264: rpi_get_interrupt_info+0x4/0x58 <-show_interrupts+0x27c/0x398
             cat-949     [001] d..1.  1977.859265: <stack trace>
 => rpi_get_interrupt_info+0x8/0x58
 => show_interrupts+0x27c/0x398
 => seq_read_iter+0x34c/0x460
 => proc_reg_read_iter+0x8c/0xe8
 => vfs_read+0x238/0x330
 => ksys_read+0x7c/0x120
 => __arm64_sys_read+0x24/0x38
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
             cat-949     [001] d..1.  1977.859266: rpi_get_interrupt_info+0x10/0x58: [cat] 1474626560: DMA IRQ, irq_handler : 00000000cddb015f 
             cat-949     [001] d..1.  1977.859270: rpi_get_interrupt_info+0x4/0x58 <-show_interrupts+0x27c/0x398
             cat-949     [001] d..1.  1977.859271: <stack trace>
 => rpi_get_interrupt_info+0x8/0x58
 => show_interrupts+0x27c/0x398
 => seq_read_iter+0x34c/0x460
 => proc_reg_read_iter+0x8c/0xe8
 => vfs_read+0x238/0x330
 => ksys_read+0x7c/0x120
 => __arm64_sys_read+0x24/0x38
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
             cat-949     [001] d..1.  1977.859272: rpi_get_interrupt_info+0x10/0x58: [cat] 1474626560: DMA IRQ, irq_handler : 00000000cddb015f 
             cat-949     [001] d..1.  1977.859274: rpi_get_interrupt_info+0x4/0x58 <-show_interrupts+0x27c/0x398
             cat-949     [001] d..1.  1977.859275: <stack trace>
 => rpi_get_interrupt_info+0x8/0x58
 => show_interrupts+0x27c/0x398
 => seq_read_iter+0x34c/0x460
 => proc_reg_read_iter+0x8c/0xe8
 => vfs_read+0x238/0x330
 => ksys_read+0x7c/0x120
 => __arm64_sys_read+0x24/0x38
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
             cat-949     [001] d..1.  1977.859276: rpi_get_interrupt_info+0x10/0x58: [cat] 1474626560: DMA IRQ, irq_handler : 00000000cddb015f 
             cat-949     [001] d..1.  1977.859280: rpi_get_interrupt_info+0x4/0x58 <-show_interrupts+0x27c/0x398
             cat-949     [001] d..1.  1977.859281: <stack trace>
 => rpi_get_interrupt_info+0x8/0x58
 => show_interrupts+0x27c/0x398
 => seq_read_iter+0x34c/0x460
 => proc_reg_read_iter+0x8c/0xe8
 => vfs_read+0x238/0x330
 => ksys_read+0x7c/0x120
 => __arm64_sys_read+0x24/0x38
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
             cat-949     [001] d..1.  1977.859282: rpi_get_interrupt_info+0x10/0x58: [cat] 1474315080: PCIe PME, irq_handler : 00000000a3e03fb0 
             cat-949     [001] d..1.  1977.859286: rpi_get_interrupt_info+0x4/0x58 <-show_interrupts+0x27c/0x398
             cat-949     [001] d..1.  1977.859289: <stack trace>
 => rpi_get_interrupt_info+0x8/0x58
 => show_interrupts+0x27c/0x398
 => seq_read_iter+0x34c/0x460
 => proc_reg_read_iter+0x8c/0xe8
 => vfs_read+0x238/0x330
 => ksys_read+0x7c/0x120
 => __arm64_sys_read+0x24/0x38
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
             cat-949     [001] d..1.  1977.859291: rpi_get_interrupt_info+0x10/0x58: [cat] 1475953544: eth0, irq_handler : 000000002e60d43a 
             cat-949     [001] d..1.  1977.859293: rpi_get_interrupt_info+0x4/0x58 <-show_interrupts+0x27c/0x398
             cat-949     [001] d..1.  1977.859294: <stack trace>
 => rpi_get_interrupt_info+0x8/0x58
 => show_interrupts+0x27c/0x398
 => seq_read_iter+0x34c/0x460
 => proc_reg_read_iter+0x8c/0xe8
 => vfs_read+0x238/0x330
 => ksys_read+0x7c/0x120
 => __arm64_sys_read+0x24/0x38
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
             cat-949     [001] d..1.  1977.859295: rpi_get_interrupt_info+0x10/0x58: [cat] 1475950912: eth0, irq_handler : 00000000416a7e78 
             cat-949     [001] d..1.  1977.859297: rpi_get_interrupt_info+0x4/0x58 <-show_interrupts+0x27c/0x398
             cat-949     [001] d..1.  1977.859298: <stack trace>
 => rpi_get_interrupt_info+0x8/0x58
 => show_interrupts+0x27c/0x398
 => seq_read_iter+0x34c/0x460
 => proc_reg_read_iter+0x8c/0xe8
 => vfs_read+0x238/0x330
 => ksys_read+0x7c/0x120
 => __arm64_sys_read+0x24/0x38
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
             cat-949     [001] d..1.  1977.859299: rpi_get_interrupt_info+0x10/0x58: [cat] 1476299288: xhci_hcd, irq_handler : 00000000493128f6 
             cat-949     [001] d..1.  1977.859303: rpi_get_interrupt_info+0x4/0x58 <-show_interrupts+0x27c/0x398
             cat-949     [001] d..1.  1977.859304: <stack trace>
 => rpi_get_interrupt_info+0x8/0x58
 => show_interrupts+0x27c/0x398
 => seq_read_iter+0x34c/0x460
 => proc_reg_read_iter+0x8c/0xe8
 => vfs_read+0x238/0x330
 => ksys_read+0x7c/0x120
 => __arm64_sys_read+0x24/0x38
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
             cat-949     [001] d..1.  1977.859305: rpi_get_interrupt_info+0x10/0x58: [cat] 1477545984: VCHIQ doorbell, irq_handler : 00000000dcf8f3ab 
             cat-949     [001] d..1.  1977.859308: rpi_get_interrupt_info+0x4/0x58 <-show_interrupts+0x27c/0x398
             cat-949     [001] d..1.  1977.859308: <stack trace>
 => rpi_get_interrupt_info+0x8/0x58
 => show_interrupts+0x27c/0x398
 => seq_read_iter+0x34c/0x460
 => proc_reg_read_iter+0x8c/0xe8
 => vfs_read+0x238/0x330
 => ksys_read+0x7c/0x120
 => __arm64_sys_read+0x24/0x38
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
             cat-949     [001] d..1.  1977.859310: rpi_get_interrupt_info+0x10/0x58: [cat] 1477581584: arm-pmu, irq_handler : 00000000432ca271 
             cat-949     [001] d..1.  1977.859312: rpi_get_interrupt_info+0x4/0x58 <-show_interrupts+0x27c/0x398
             cat-949     [001] d..1.  1977.859312: <stack trace>
 => rpi_get_interrupt_info+0x8/0x58
 => show_interrupts+0x27c/0x398
 => seq_read_iter+0x34c/0x460
 => proc_reg_read_iter+0x8c/0xe8
 => vfs_read+0x238/0x330
 => ksys_read+0x7c/0x120
 => __arm64_sys_read+0x24/0x38
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
             cat-949     [001] d..1.  1977.859313: rpi_get_interrupt_info+0x10/0x58: [cat] 1477581584: arm-pmu, irq_handler : 00000000432ca271 
             cat-949     [001] d..1.  1977.859316: rpi_get_interrupt_info+0x4/0x58 <-show_interrupts+0x27c/0x398
             cat-949     [001] d..1.  1977.859316: <stack trace>
 => rpi_get_interrupt_info+0x8/0x58
 => show_interrupts+0x27c/0x398
 => seq_read_iter+0x34c/0x460
 => proc_reg_read_iter+0x8c/0xe8
 => vfs_read+0x238/0x330
 => ksys_read+0x7c/0x120
 => __arm64_sys_read+0x24/0x38
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
             cat-949     [001] d..1.  1977.859317: rpi_get_interrupt_info+0x10/0x58: [cat] 1477581584: arm-pmu, irq_handler : 00000000432ca271 
             cat-949     [001] d..1.  1977.859319: rpi_get_interrupt_info+0x4/0x58 <-show_interrupts+0x27c/0x398
             cat-949     [001] d..1.  1977.859320: <stack trace>
 => rpi_get_interrupt_info+0x8/0x58
 => show_interrupts+0x27c/0x398
 => seq_read_iter+0x34c/0x460
 => proc_reg_read_iter+0x8c/0xe8
 => vfs_read+0x238/0x330
 => ksys_read+0x7c/0x120
 => __arm64_sys_read+0x24/0x38
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
             cat-949     [001] d..1.  1977.859321: rpi_get_interrupt_info+0x10/0x58: [cat] 1477581584: arm-pmu, irq_handler : 00000000432ca271 
             cat-949     [001] d..1.  1977.859324: rpi_get_interrupt_info+0x4/0x58 <-show_interrupts+0x27c/0x398
             cat-949     [001] d..1.  1977.859324: <stack trace>
 => rpi_get_interrupt_info+0x8/0x58
 => show_interrupts+0x27c/0x398
 => seq_read_iter+0x34c/0x460
 => proc_reg_read_iter+0x8c/0xe8
 => vfs_read+0x238/0x330
 => ksys_read+0x7c/0x120
 => __arm64_sys_read+0x24/0x38
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
             cat-949     [001] d..1.  1977.859325: rpi_get_interrupt_info+0x10/0x58: [cat] 1475025536: uart-pl011, irq_handler : 0000000053f099d1 
             cat-949     [001] d..1.  1977.859328: rpi_get_interrupt_info+0x4/0x58 <-show_interrupts+0x27c/0x398
             cat-949     [001] d..1.  1977.859329: <stack trace>
 => rpi_get_interrupt_info+0x8/0x58
 => show_interrupts+0x27c/0x398
 => seq_read_iter+0x34c/0x460
 => proc_reg_read_iter+0x8c/0xe8
 => vfs_read+0x238/0x330
 => ksys_read+0x7c/0x120
 => __arm64_sys_read+0x24/0x38
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
             cat-949     [001] d..1.  1977.859330: rpi_get_interrupt_info+0x10/0x58: [cat] 1477305488: mmc1, irq_handler : 0000000077c416f6 
             cat-949     [001] d..1.  1977.859334: rpi_get_interrupt_info+0x4/0x58 <-show_interrupts+0x27c/0x398
             cat-949     [001] d..1.  1977.859334: <stack trace>
 => rpi_get_interrupt_info+0x8/0x58
 => show_interrupts+0x27c/0x398
 => seq_read_iter+0x34c/0x460
 => proc_reg_read_iter+0x8c/0xe8
 => vfs_read+0x238/0x330
 => ksys_read+0x7c/0x120
 => __arm64_sys_read+0x24/0x38
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
             cat-949     [001] d..1.  1977.859336: rpi_get_interrupt_info+0x10/0x58: [cat] 238330912: v3d, irq_handler : 00000000adf9fb98 
             cat-949     [001] d..1.  1977.859338: rpi_get_interrupt_info+0x4/0x58 <-show_interrupts+0x27c/0x398
             cat-949     [001] d..1.  1977.859339: <stack trace>
 => rpi_get_interrupt_info+0x8/0x58
 => show_interrupts+0x27c/0x398
 => seq_read_iter+0x34c/0x460
 => proc_reg_read_iter+0x8c/0xe8
 => vfs_read+0x238/0x330
 => ksys_read+0x7c/0x120
 => __arm64_sys_read+0x24/0x38
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
             cat-949     [001] d..1.  1977.859340: rpi_get_interrupt_info+0x10/0x58: [cat] 238517816: feb00000.codec, irq_handler : 00000000776cbb4d 
             cat-949     [001] d..1.  1977.859342: rpi_get_interrupt_info+0x4/0x58 <-show_interrupts+0x27c/0x398
             cat-949     [001] d..1.  1977.859343: <stack trace>
 => rpi_get_interrupt_info+0x8/0x58
 => show_interrupts+0x27c/0x398
 => seq_read_iter+0x34c/0x460
 => proc_reg_read_iter+0x8c/0xe8
 => vfs_read+0x238/0x330
 => ksys_read+0x7c/0x120
 => __arm64_sys_read+0x24/0x38
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
             cat-949     [001] d..1.  1977.859344: rpi_get_interrupt_info+0x10/0x58: [cat] 240894832: vc4 hvs, irq_handler : 00000000dc6d6b86 
             cat-949     [001] d..1.  1977.859347: rpi_get_interrupt_info+0x4/0x58 <-show_interrupts+0x27c/0x398
             cat-949     [001] d..1.  1977.859348: <stack trace>
 => rpi_get_interrupt_info+0x8/0x58
 => show_interrupts+0x27c/0x398
 => seq_read_iter+0x34c/0x460
 => proc_reg_read_iter+0x8c/0xe8
 => vfs_read+0x238/0x330
 => ksys_read+0x7c/0x120
 => __arm64_sys_read+0x24/0x38
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
             cat-949     [001] d..1.  1977.859349: rpi_get_interrupt_info+0x10/0x58: [cat] 1467108120: vc4 hdmi hpd connected, irq_handler : 000000007aa92b1a 
             cat-949     [001] d..1.  1977.859352: rpi_get_interrupt_info+0x4/0x58 <-show_interrupts+0x27c/0x398
             cat-949     [001] d..1.  1977.859352: <stack trace>
 => rpi_get_interrupt_info+0x8/0x58
 => show_interrupts+0x27c/0x398
 => seq_read_iter+0x34c/0x460
 => proc_reg_read_iter+0x8c/0xe8
 => vfs_read+0x238/0x330
 => ksys_read+0x7c/0x120
 => __arm64_sys_read+0x24/0x38
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
             cat-949     [001] d..1.  1977.859354: rpi_get_interrupt_info+0x10/0x58: [cat] 1467108120: vc4 hdmi hpd disconnected, irq_handler : 000000007aa92b1a 
             cat-949     [001] d..1.  1977.859356: rpi_get_interrupt_info+0x4/0x58 <-show_interrupts+0x27c/0x398
             cat-949     [001] d..1.  1977.859357: <stack trace>
 => rpi_get_interrupt_info+0x8/0x58
 => show_interrupts+0x27c/0x398
 => seq_read_iter+0x34c/0x460
 => proc_reg_read_iter+0x8c/0xe8
 => vfs_read+0x238/0x330
 => ksys_read+0x7c/0x120
 => __arm64_sys_read+0x24/0x38
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
             cat-949     [001] d..1.  1977.859358: rpi_get_interrupt_info+0x10/0x58: [cat] 240824872: vc4 hdmi cec rx, irq_handler : 00000000a21325cf 
             cat-949     [001] d..1.  1977.859360: rpi_get_interrupt_info+0x4/0x58 <-show_interrupts+0x27c/0x398
             cat-949     [001] d..1.  1977.859361: <stack trace>
 => rpi_get_interrupt_info+0x8/0x58
 => show_interrupts+0x27c/0x398
 => seq_read_iter+0x34c/0x460
 => proc_reg_read_iter+0x8c/0xe8
 => vfs_read+0x238/0x330
 => ksys_read+0x7c/0x120
 => __arm64_sys_read+0x24/0x38
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
             cat-949     [001] d..1.  1977.859362: rpi_get_interrupt_info+0x10/0x58: [cat] 240818472: vc4 hdmi cec tx, irq_handler : 00000000a4bcc6ff 
             cat-949     [001] d..1.  1977.859364: rpi_get_interrupt_info+0x4/0x58 <-show_interrupts+0x27c/0x398
             cat-949     [001] d..1.  1977.859365: <stack trace>
 => rpi_get_interrupt_info+0x8/0x58
 => show_interrupts+0x27c/0x398
 => seq_read_iter+0x34c/0x460
 => proc_reg_read_iter+0x8c/0xe8
 => vfs_read+0x238/0x330
 => ksys_read+0x7c/0x120
 => __arm64_sys_read+0x24/0x38
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
             cat-949     [001] d..1.  1977.859366: rpi_get_interrupt_info+0x10/0x58: [cat] 1467108120: vc4 hdmi hpd connected, irq_handler : 000000007aa92b1a 
             cat-949     [001] d..1.  1977.859369: rpi_get_interrupt_info+0x4/0x58 <-show_interrupts+0x27c/0x398
             cat-949     [001] d..1.  1977.859370: <stack trace>
 => rpi_get_interrupt_info+0x8/0x58
 => show_interrupts+0x27c/0x398
 => seq_read_iter+0x34c/0x460
 => proc_reg_read_iter+0x8c/0xe8
 => vfs_read+0x238/0x330
 => ksys_read+0x7c/0x120
 => __arm64_sys_read+0x24/0x38
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
             cat-949     [001] d..1.  1977.859371: rpi_get_interrupt_info+0x10/0x58: [cat] 1467108120: vc4 hdmi hpd disconnected, irq_handler : 000000007aa92b1a 
             cat-949     [001] d..1.  1977.859373: rpi_get_interrupt_info+0x4/0x58 <-show_interrupts+0x27c/0x398
             cat-949     [001] d..1.  1977.859374: <stack trace>
 => rpi_get_interrupt_info+0x8/0x58
 => show_interrupts+0x27c/0x398
 => seq_read_iter+0x34c/0x460
 => proc_reg_read_iter+0x8c/0xe8
 => vfs_read+0x238/0x330
 => ksys_read+0x7c/0x120
 => __arm64_sys_read+0x24/0x38
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
             cat-949     [001] d..1.  1977.859375: rpi_get_interrupt_info+0x10/0x58: [cat] 240824872: vc4 hdmi cec rx, irq_handler : 00000000a21325cf 
             cat-949     [001] d..1.  1977.859377: rpi_get_interrupt_info+0x4/0x58 <-show_interrupts+0x27c/0x398
             cat-949     [001] d..1.  1977.859378: <stack trace>
 => rpi_get_interrupt_info+0x8/0x58
 => show_interrupts+0x27c/0x398
 => seq_read_iter+0x34c/0x460
 => proc_reg_read_iter+0x8c/0xe8
 => vfs_read+0x238/0x330
 => ksys_read+0x7c/0x120
 => __arm64_sys_read+0x24/0x38
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
             cat-949     [001] d..1.  1977.859379: rpi_get_interrupt_info+0x10/0x58: [cat] 240818472: vc4 hdmi cec tx, irq_handler : 00000000a4bcc6ff 
             cat-949     [001] d..1.  1977.859381: rpi_get_interrupt_info+0x4/0x58 <-show_interrupts+0x27c/0x398
             cat-949     [001] d..1.  1977.859382: <stack trace>
 => rpi_get_interrupt_info+0x8/0x58
 => show_interrupts+0x27c/0x398
 => seq_read_iter+0x34c/0x460
 => proc_reg_read_iter+0x8c/0xe8
 => vfs_read+0x238/0x330
 => ksys_read+0x7c/0x120
 => __arm64_sys_read+0x24/0x38
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
             cat-949     [001] d..1.  1977.859383: rpi_get_interrupt_info+0x10/0x58: [cat] 240930336: fe004000.txp, irq_handler : 0000000079ee8308 
             cat-949     [001] d..1.  1977.859385: rpi_get_interrupt_info+0x4/0x58 <-show_interrupts+0x27c/0x398
             cat-949     [001] d..1.  1977.859386: <stack trace>
 => rpi_get_interrupt_info+0x8/0x58
 => show_interrupts+0x27c/0x398
 => seq_read_iter+0x34c/0x460
 => proc_reg_read_iter+0x8c/0xe8
 => vfs_read+0x238/0x330
 => ksys_read+0x7c/0x120
 => __arm64_sys_read+0x24/0x38
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
             cat-949     [001] d..1.  1977.859387: rpi_get_interrupt_info+0x10/0x58: [cat] 240753576: vc4 crtc, irq_handler : 000000009953b6d4 
             cat-949     [001] d..1.  1977.859390: rpi_get_interrupt_info+0x4/0x58 <-show_interrupts+0x27c/0x398
             cat-949     [001] d..1.  1977.859390: <stack trace>
 => rpi_get_interrupt_info+0x8/0x58
 => show_interrupts+0x27c/0x398
 => seq_read_iter+0x34c/0x460
 => proc_reg_read_iter+0x8c/0xe8
 => vfs_read+0x238/0x330
 => ksys_read+0x7c/0x120
 => __arm64_sys_read+0x24/0x38
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
             cat-949     [001] d..1.  1977.859391: rpi_get_interrupt_info+0x10/0x58: [cat] 240753576: vc4 crtc, irq_handler : 000000009953b6d4 
             cat-949     [001] d..1.  1977.859394: rpi_get_interrupt_info+0x4/0x58 <-show_interrupts+0x27c/0x398
             cat-949     [001] d..1.  1977.859395: <stack trace>
 => rpi_get_interrupt_info+0x8/0x58
 => show_interrupts+0x27c/0x398
 => seq_read_iter+0x34c/0x460
 => proc_reg_read_iter+0x8c/0xe8
 => vfs_read+0x238/0x330
 => ksys_read+0x7c/0x120
 => __arm64_sys_read+0x24/0x38
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
             cat-949     [001] d..1.  1977.859396: rpi_get_interrupt_info+0x10/0x58: [cat] 240753576: vc4 crtc, irq_handler : 000000009953b6d4 
             cat-949     [001] d..1.  1977.859399: rpi_get_interrupt_info+0x4/0x58 <-show_interrupts+0x27c/0x398
             cat-949     [001] d..1.  1977.859399: <stack trace>
 => rpi_get_interrupt_info+0x8/0x58
 => show_interrupts+0x27c/0x398
 => seq_read_iter+0x34c/0x460
 => proc_reg_read_iter+0x8c/0xe8
 => vfs_read+0x238/0x330
 => ksys_read+0x7c/0x120
 => __arm64_sys_read+0x24/0x38
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
             cat-949     [001] d..1.  1977.859400: rpi_get_interrupt_info+0x10/0x58: [cat] 240753576: vc4 crtc, irq_handler : 000000009953b6d4 
          <idle>-0       [002] d.h1.  1977.859459: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1977.859466: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1977.859615: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.  1977.859620: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1977.859655: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.859669: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.859669: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.859670: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.859692: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.859694: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.859694: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.859695: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.859753: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.859765: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.859765: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.859766: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.859791: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.859793: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.859793: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.859794: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.859815: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.859819: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.859819: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.859820: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.859823: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.859825: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.859826: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.859826: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.859865: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.859877: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.859877: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.859878: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.859903: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.859905: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.859905: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.859906: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.859926: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.859935: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.859936: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.859936: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.859951: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.859953: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.859953: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.859954: irq_handler_exit: irq=40 ret=unhandled
   kworker/u21:0-86      [000] d.h..  1977.859995: irq_handler_entry: irq=40 name=mmc1
   kworker/u21:0-86      [000] d.h..  1977.859997: irq_handler_exit: irq=40 ret=handled
   kworker/u21:0-86      [000] d.h..  1977.859998: irq_handler_entry: irq=40 name=mmc0
   kworker/u21:0-86      [000] d.h..  1977.859998: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.860161: irq_handler_entry: irq=15 name=DMA IRQ
          <idle>-0       [000] d.h1.  1977.860162: irq_handler_exit: irq=15 ret=handled
          <idle>-0       [000] d.h1.  1977.860192: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.860194: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.860195: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.860195: irq_handler_exit: irq=40 ret=unhandled
     ksoftirqd/0-17      [000] D.H3.  1977.860228: irq_handler_entry: irq=2 name=IPI
     ksoftirqd/0-17      [000] D.H3.  1977.860234: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1977.860263: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.860273: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.860273: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.860274: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.860291: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.860293: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.860294: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.860294: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.  1977.860552: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1977.860558: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1977.860640: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.  1977.860643: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1977.860664: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.860670: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.860670: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.860671: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.860678: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.860680: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.860680: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.860681: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.860705: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.860711: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.860712: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.860712: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.860723: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.860725: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.860727: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.860728: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.861372: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.  1977.861382: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.  1977.861382: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.  1977.861383: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.861396: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.861398: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.861399: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.861399: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.861419: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.861422: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.861423: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.861423: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.861442: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.861444: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.861444: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.861445: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.861446: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.861448: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.861448: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.861448: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.861479: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.861484: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.861485: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.861485: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.861506: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.861509: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.861509: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.861510: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.861511: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.861512: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.861513: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.861513: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.861575: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.861579: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.861579: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.861580: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.861580: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.861582: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.861583: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.861583: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.861603: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.861606: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.861606: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.861607: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.861607: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.861609: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.861610: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.861610: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.861639: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.861643: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.861643: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.861644: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.861644: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.861646: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.861646: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.861647: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.862097: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.  1977.862104: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.  1977.862104: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.  1977.862105: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.862116: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.862118: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.862119: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.862119: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.862137: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.862141: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.862141: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.862142: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.862159: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.862161: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.862162: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.862162: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.862163: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.862165: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.862165: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.862166: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.862194: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.  1977.862204: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.  1977.862205: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.  1977.862205: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1977.862223: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1977.862226: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1977.862227: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1977.862227: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1977.862228: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1977.862230: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1977.862230: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1977.862231: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1977.862258: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1977.862262: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1977.862262: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1977.862263: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1977.862264: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1977.862266: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1977.862266: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1977.862266: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1977.862290: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1977.862292: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1977.862293: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1977.862293: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.862315: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.862329: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.862329: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.862330: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1977.862370: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1977.862374: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1977.862375: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1977.862375: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1977.862376: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1977.862378: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1977.862378: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1977.862379: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.862395: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.862397: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.862397: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.862398: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.862416: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.862420: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.862420: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.862421: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.862439: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.862441: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.862442: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.862442: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.862443: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.862445: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.862445: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.862446: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1977.862475: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1977.862480: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1977.862480: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1977.862481: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1977.862481: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1977.862483: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1977.862484: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1977.862484: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.862587: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.  1977.862595: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.  1977.862595: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.  1977.862596: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.862606: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.862608: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.862609: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.862609: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.862627: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.862631: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.862631: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.862632: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.862650: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.862652: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.862652: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.862653: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.862654: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.862655: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.862656: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.862656: irq_handler_exit: irq=40 ret=unhandled
   kworker/u21:0-86      [000] d.h1.  1977.862683: irq_handler_entry: irq=40 name=mmc1
   kworker/u21:0-86      [000] d.h1.  1977.862690: irq_handler_exit: irq=40 ret=handled
   kworker/u21:0-86      [000] d.h1.  1977.862691: irq_handler_entry: irq=40 name=mmc0
   kworker/u21:0-86      [000] d.h1.  1977.862691: irq_handler_exit: irq=40 ret=unhandled
   kworker/u21:0-86      [000] d.h1.  1977.862692: irq_handler_entry: irq=40 name=mmc1
   kworker/u21:0-86      [000] d.h1.  1977.862694: irq_handler_exit: irq=40 ret=handled
   kworker/u21:0-86      [000] d.h1.  1977.862694: irq_handler_entry: irq=40 name=mmc0
   kworker/u21:0-86      [000] d.h1.  1977.862695: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1977.862710: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1977.862712: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1977.862713: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1977.862713: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1977.862715: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1977.862716: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1977.862717: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1977.862717: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1977.862744: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1977.862748: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1977.862748: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1977.862749: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1977.862749: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1977.862751: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1977.862752: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1977.862752: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1977.862773: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1977.862774: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1977.862775: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1977.862775: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.862798: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.862810: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.862810: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.862811: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.862811: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.862813: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.862814: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.862814: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1977.862854: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1977.862858: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1977.862858: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1977.862859: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1977.862860: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1977.862861: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1977.862862: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1977.862862: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.862877: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.862879: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.862880: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.862880: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.862899: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.862903: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.862903: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.862904: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.862921: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.862924: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.862924: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.862925: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.862925: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.862927: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.862928: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.862928: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1977.862957: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1977.862962: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1977.862962: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1977.862963: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1977.862964: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1977.862966: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1977.862966: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1977.862966: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [001] d.h1.  1977.863106: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1977.863123: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1977.867105: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1977.867108: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1977.867114: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1977.867117: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.  1977.871105: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1977.871107: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1977.875105: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1977.875107: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1977.875112: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1977.875115: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d.h1.  1977.875115: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1977.875119: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.  1977.879105: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1977.879108: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1977.883105: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1977.883108: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1977.883111: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1977.883114: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.  1977.887105: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1977.887107: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1977.891105: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1977.891107: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1977.891110: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] d.h1.  1977.891112: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1977.891113: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.  1977.891116: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1977.891125: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.891127: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.891127: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.891128: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.  1977.891131: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1977.891134: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1977.891144: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.891146: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.891146: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.891147: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.  1977.891150: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1977.891153: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1977.891161: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.891163: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1977.891164: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.891164: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.  1977.891167: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1977.891170: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.  1977.895105: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1977.895107: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1977.899105: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1977.899108: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1977.899120: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1977.899123: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1977.899138: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1977.899139: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1977.899139: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1977.899144: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [001] d.h1.  1977.899145: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.  1977.899148: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.  1977.903105: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1977.903109: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1977.907105: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1977.907107: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1977.907111: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1977.907114: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.  1977.911105: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1977.911107: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1977.915105: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1977.915107: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1977.915110: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1977.915113: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d.h1.  1977.915122: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1977.915123: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1977.919105: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1977.919107: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1977.931106: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1977.931108: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1977.931130: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1977.931131: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1978.019965: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.  1978.019972: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1978.020049: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1978.020051: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1978.023105: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1978.023110: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1978.023122: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1978.023124: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.  1978.023130: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.  1978.023133: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d.h1.  1978.023133: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1978.023134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1978.023144: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1978.023146: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1978.027105: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1978.027109: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1978.031105: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1978.031108: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1978.031111: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1978.031114: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1978.035105: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1978.035108: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1978.039105: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1978.039107: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1978.039111: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1978.039113: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1978.043105: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1978.043108: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1978.081945: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1978.081946: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1978.342909: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1978.342911: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1978.342912: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.  1978.342918: irq_handler_exit: irq=6 ret=handled
     kworker/3:1-811     [003] d.h1.  1978.342953: irq_handler_entry: irq=11 name=arch_timer
     kworker/3:1-811     [003] d.h1.  1978.342956: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1978.343015: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1978.343016: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1978.346323: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.  1978.346328: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [003] d.h1.  1978.346330: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1978.346338: irq_handler_exit: irq=2 ret=handled
     kworker/3:1-811     [003] d.h1.  1978.346368: irq_handler_entry: irq=11 name=arch_timer
     kworker/3:1-811     [003] d.h1.  1978.346373: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1978.346390: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.  1978.346393: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [003] d.h1.  1978.346400: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1978.346409: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d.h1.  1978.412425: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1978.412430: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1978.443108: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1978.443109: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1978.443115: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1978.443117: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1978.443128: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNH2.  1978.443135: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.  1978.443137: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNH2.  1978.443139: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.  1978.443161: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1978.443165: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1978.443193: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1978.443199: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1978.507110: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1978.507111: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1978.507117: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1978.507118: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1978.507175: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1978.507180: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1978.535362: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1978.535368: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1978.827110: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1978.827113: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1978.827117: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1978.827121: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.H1.  1978.827129: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH1.  1978.827144: irq_handler_exit: irq=6 ret=handled
     kworker/0:3-867     [000] d.h1.  1978.827169: irq_handler_entry: irq=28 name=eth0
     kworker/0:3-867     [000] d.h1.  1978.827174: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [003] d.h1.  1978.827175: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1978.827180: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1978.827181: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1978.827189: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1978.827192: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1978.827197: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1978.827208: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.  1978.827212: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [003] d.h1.  1978.827214: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1978.827222: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1978.827240: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.  1978.827243: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [003] d.h1.  1978.827251: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1978.827260: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1978.827281: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.  1978.827284: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [003] d.h1.  1978.827291: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1978.827299: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1978.827320: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.  1978.827323: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [003] d.h1.  1978.827330: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1978.827338: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d.h1.  1978.830974: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1978.830978: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1978.831109: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1978.831119: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1978.923112: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1978.923121: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1978.923195: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1978.923201: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1978.923203: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1978.923205: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1978.923207: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.  1978.923221: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1978.924241: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1978.924245: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1978.955112: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1978.955120: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1978.955130: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.H1.  1978.955134: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.  1978.955138: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNH1.  1978.955145: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.  1978.955163: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1978.955168: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1979.243113: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1979.243121: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2.  1979.243140: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2.  1979.243143: irq_handler_exit: irq=6 ret=handled
     kworker/0:3-867     [000] d.h1.  1979.243177: irq_handler_entry: irq=11 name=arch_timer
     kworker/0:3-867     [000] d.h1.  1979.243183: irq_handler_exit: irq=11 ret=handled
     kworker/0:3-867     [000] dNh1.  1979.243201: irq_handler_entry: irq=14 name=fe00b880.mailbox
     kworker/0:3-867     [000] dNh1.  1979.243204: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [000] d.h1.  1979.244140: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1979.244145: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1979.467113: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1979.467121: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1979.467131: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.H1.  1979.467135: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.  1979.467139: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNH1.  1979.467145: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.  1979.467163: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1979.467168: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1979.467178: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1979.467183: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1979.531114: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1979.531120: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1979.531169: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1979.531173: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1979.851115: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1979.851122: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2.  1979.851136: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2.  1979.851139: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.  1979.851190: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1979.851195: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1979.851197: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1.  1979.851206: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.  1979.851228: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1.  1979.851237: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.  1979.851259: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1.  1979.851267: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.  1979.851287: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1.  1979.851296: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.  1979.851315: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1.  1979.851323: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.  1979.854311: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1979.854316: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1979.855112: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1979.855122: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1979.947115: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1979.947120: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1979.947172: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1979.947177: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1979.947179: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1979.947180: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1979.947182: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.  1979.947195: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1979.948121: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1979.948125: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1979.979115: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1979.979123: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1979.979133: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.H1.  1979.979137: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.  1979.979141: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNH1.  1979.979148: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.  1979.979164: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1979.979168: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1980.311633: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.  1980.311650: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.  1980.311651: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.  1980.311653: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] dNh1.  1980.311656: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.  1980.311659: irq_handler_exit: irq=6 ret=handled
     kworker/0:3-867     [000] d.h1.  1980.311689: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1980.311694: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1980.311695: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1980.311696: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1980.311753: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1980.311762: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1980.311763: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1980.311765: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1980.311808: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1980.311813: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1980.311814: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1980.311815: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1980.311818: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1980.311821: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1980.311822: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1980.311823: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1980.311884: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1980.311888: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1980.311889: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1980.311891: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1980.314910: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.  1980.314922: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1980.314949: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1980.314953: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1980.314954: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1980.314956: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1980.315007: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1980.315017: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1980.315018: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1980.315020: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1980.315066: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1980.315076: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1980.315077: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1980.315079: irq_handler_exit: irq=40 ret=unhandled
   kworker/u21:0-86      [000] d.H1.  1980.315113: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1980.315132: irq_handler_entry: irq=2 name=IPI
   kworker/u21:0-86      [000] d.H1.  1980.315132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1980.315134: irq_handler_exit: irq=2 ret=handled
   kworker/u21:0-86      [000] d.h..  1980.315490: irq_handler_entry: irq=40 name=mmc1
   kworker/u21:0-86      [000] d.h..  1980.315502: irq_handler_exit: irq=40 ret=handled
   kworker/u21:0-86      [000] d.h..  1980.315503: irq_handler_entry: irq=40 name=mmc0
   kworker/u21:0-86      [000] d.h..  1980.315505: irq_handler_exit: irq=40 ret=unhandled
   kworker/u17:4-725     [000] d.h1.  1980.315557: irq_handler_entry: irq=40 name=mmc1
   kworker/u17:4-725     [000] d.h1.  1980.315561: irq_handler_exit: irq=40 ret=handled
   kworker/u17:4-725     [000] d.h1.  1980.315562: irq_handler_entry: irq=40 name=mmc0
   kworker/u17:4-725     [000] d.h1.  1980.315563: irq_handler_exit: irq=40 ret=unhandled
   kworker/u17:4-725     [000] d.h1.  1980.315579: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [003] d.h1.  1980.315579: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1980.315594: irq_handler_exit: irq=2 ret=handled
   kworker/u17:4-725     [000] d.h1.  1980.315613: irq_handler_exit: irq=40 ret=handled
   kworker/u17:4-725     [000] d.h1.  1980.315614: irq_handler_entry: irq=40 name=mmc0
   kworker/u17:4-725     [000] d.h1.  1980.315616: irq_handler_exit: irq=40 ret=unhandled
            sshd-678     [000] d.h1.  1980.315785: irq_handler_entry: irq=40 name=mmc1
            sshd-678     [000] d.h1.  1980.315798: irq_handler_exit: irq=40 ret=handled
            sshd-678     [000] d.h1.  1980.315799: irq_handler_entry: irq=40 name=mmc0
            sshd-678     [000] d.h1.  1980.315801: irq_handler_exit: irq=40 ret=unhandled
            sshd-678     [000] d.h1.  1980.315858: irq_handler_entry: irq=40 name=mmc1
            sshd-678     [000] d.h1.  1980.315888: irq_handler_exit: irq=40 ret=handled
            sshd-678     [000] d.h1.  1980.315889: irq_handler_entry: irq=40 name=mmc0
            sshd-678     [000] d.h1.  1980.315890: irq_handler_exit: irq=40 ret=unhandled
            sshd-678     [000] d.h..  1980.315917: irq_handler_entry: irq=40 name=mmc1
            sshd-678     [000] d.h..  1980.315921: irq_handler_exit: irq=40 ret=handled
            sshd-678     [000] d.h..  1980.315922: irq_handler_entry: irq=40 name=mmc0
            sshd-678     [000] d.h..  1980.315923: irq_handler_exit: irq=40 ret=unhandled
   kworker/u17:4-725     [000] d.h1.  1980.316194: irq_handler_entry: irq=40 name=mmc1
   kworker/u17:4-725     [000] d.h1.  1980.316207: irq_handler_exit: irq=40 ret=handled
   kworker/u17:4-725     [000] d.h1.  1980.316208: irq_handler_entry: irq=40 name=mmc0
   kworker/u17:4-725     [000] d.h1.  1980.316210: irq_handler_exit: irq=40 ret=unhandled
   kworker/u17:4-725     [000] d.h..  1980.316216: irq_handler_entry: irq=40 name=mmc1
   kworker/u17:4-725     [000] d.h..  1980.316220: irq_handler_exit: irq=40 ret=handled
   kworker/u17:4-725     [000] d.h..  1980.316221: irq_handler_entry: irq=40 name=mmc0
   kworker/u17:4-725     [000] d.h..  1980.316222: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.  1980.316261: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1980.316276: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1980.316581: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.  1980.316598: irq_handler_exit: irq=2 ret=handled
            sshd-678     [000] d.h1.  1980.316776: irq_handler_entry: irq=40 name=mmc1
            sshd-678     [000] d.h1.  1980.316790: irq_handler_exit: irq=40 ret=handled
            sshd-678     [000] d.h1.  1980.316791: irq_handler_entry: irq=40 name=mmc0
            sshd-678     [000] d.h1.  1980.316793: irq_handler_exit: irq=40 ret=unhandled
            sshd-678     [000] d.h..  1980.316799: irq_handler_entry: irq=40 name=mmc1
            sshd-678     [000] d.h..  1980.316802: irq_handler_exit: irq=40 ret=handled
            sshd-678     [000] d.h..  1980.316803: irq_handler_entry: irq=40 name=mmc0
            sshd-678     [000] d.h..  1980.316805: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1980.318203: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.  1980.318222: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.  1980.318223: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.  1980.318225: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1980.318258: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1980.318262: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1980.318263: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1980.318265: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1980.318307: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1980.318315: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1980.318316: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1980.318317: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1980.318357: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1980.318361: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1980.318363: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1980.318364: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1980.318366: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1980.318370: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1980.318371: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1980.318372: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1980.318443: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1980.318453: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1980.318455: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1980.318456: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1980.318495: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1980.318502: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1980.318503: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1980.318505: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1980.318585: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1980.318595: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1980.318596: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1980.318598: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1980.318637: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1980.318645: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1980.318646: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1980.318647: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1980.318711: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1980.318721: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1980.318722: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1980.318724: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1980.331119: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1980.331132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1980.331142: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1980.331151: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d.h1.  1980.331504: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1980.331509: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1980.335758: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1980.335764: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1980.337458: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.  1980.337475: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.  1980.337476: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.  1980.337478: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1980.337510: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1980.337514: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1980.337515: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1980.337517: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1980.337557: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1980.337564: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1980.337566: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1980.337567: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1980.337606: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1980.337611: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1980.337612: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1980.337614: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1980.337616: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1980.337619: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1980.337623: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1980.337624: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1980.337694: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1980.337704: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1980.337705: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1980.337707: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1980.337745: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1980.337755: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1980.337756: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1980.337757: irq_handler_exit: irq=40 ret=unhandled
            sshd-678     [000] d.h1.  1980.337834: irq_handler_entry: irq=40 name=mmc1
            sshd-678     [000] d.h1.  1980.337845: irq_handler_exit: irq=40 ret=handled
            sshd-678     [000] d.h1.  1980.337846: irq_handler_entry: irq=40 name=mmc0
            sshd-678     [000] d.h1.  1980.337848: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.  1980.338032: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1980.338046: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1980.338300: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.  1980.338315: irq_handler_exit: irq=2 ret=handled
            sshd-678     [000] d.h1.  1980.338493: irq_handler_entry: irq=40 name=mmc1
            sshd-678     [000] d.h1.  1980.338507: irq_handler_exit: irq=40 ret=handled
            sshd-678     [000] d.h1.  1980.338508: irq_handler_entry: irq=40 name=mmc0
            sshd-678     [000] d.h1.  1980.338510: irq_handler_exit: irq=40 ret=unhandled
            sshd-678     [000] d.h..  1980.338516: irq_handler_entry: irq=40 name=mmc1
            sshd-678     [000] d.h..  1980.338520: irq_handler_exit: irq=40 ret=handled
            sshd-678     [000] d.h..  1980.338521: irq_handler_entry: irq=40 name=mmc0
            sshd-678     [000] d.h..  1980.338522: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1980.339954: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.  1980.339971: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.  1980.339973: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.  1980.339974: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1980.340006: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1980.340010: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1980.340011: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1980.340013: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1980.340054: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1980.340062: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1980.340063: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1980.340064: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1980.340104: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1980.340108: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1980.340110: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1980.340111: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1980.340113: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1980.340117: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1980.340118: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1980.340119: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1980.340190: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1980.340200: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1980.340201: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1980.340202: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1980.340241: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1980.340248: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1980.340249: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1980.340251: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1980.340319: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1980.340330: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1980.340331: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1980.340333: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.  1980.347116: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1980.347127: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1980.351118: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1980.351128: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1980.355116: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1980.355117: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1980.355123: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1980.355123: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.H1.  1980.355133: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNH1.  1980.355141: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d.h1.  1980.371116: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1980.371117: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1980.371123: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1980.371124: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.H2.  1980.371130: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNH2.  1980.371139: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1980.371170: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1980.371174: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1980.371176: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1980.371177: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.  1980.371187: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1980.371195: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1980.371216: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1980.371220: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1980.371221: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1980.371223: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.  1980.371231: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1980.371239: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1980.371258: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1980.371262: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1980.371263: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1980.371265: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.  1980.371273: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1980.371281: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d.h1.  1980.379115: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1980.379117: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1980.379124: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1980.379124: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1980.403409: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.  1980.403425: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1980.403669: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1980.403676: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1980.491116: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1980.491117: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1980.491118: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1980.491123: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1980.491125: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1980.491126: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.H1.  1980.491133: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.  1980.491147: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNH1.  1980.491149: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNH2.  1980.491153: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d.h1.  1980.491205: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1980.491210: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1980.491508: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1980.491513: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1980.547116: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1980.547117: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1980.547124: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1980.547124: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1980.555116: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1980.555118: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1980.555122: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1980.555124: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1980.555179: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1980.555184: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1980.703170: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.  1980.703186: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.  1980.703187: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.  1980.703189: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] dNh1.  1980.703192: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.  1980.703195: irq_handler_exit: irq=6 ret=handled
     kworker/0:3-867     [000] dNh1.  1980.703227: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] dNh1.  1980.703231: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] dNh1.  1980.703232: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] dNh1.  1980.703234: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1980.703294: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1980.703302: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1980.703303: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1980.703305: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1980.703347: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1980.703352: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1980.703353: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1980.703355: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1980.703357: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1980.703360: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1980.703362: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1980.703363: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1980.703421: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1980.703425: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1980.703426: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1980.703428: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1980.706446: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.  1980.706458: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1980.706486: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1980.706490: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1980.706491: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1980.706493: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1980.706542: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1980.706553: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1980.706554: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1980.706555: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1980.706601: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1980.706611: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1980.706612: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1980.706613: irq_handler_exit: irq=40 ret=unhandled
            sshd-678     [000] d.h1.  1980.706701: irq_handler_entry: irq=40 name=mmc1
            sshd-678     [000] d.h1.  1980.706711: irq_handler_exit: irq=40 ret=handled
            sshd-678     [000] d.h1.  1980.706713: irq_handler_entry: irq=40 name=mmc0
            sshd-678     [000] d.h1.  1980.706714: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.  1980.706896: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1980.706912: irq_handler_exit: irq=2 ret=handled
            bash-698     [003] d.h..  1980.707116: irq_handler_entry: irq=11 name=arch_timer
            bash-698     [003] d.h..  1980.707143: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1980.707144: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.  1980.707148: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1980.707220: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.  1980.707231: irq_handler_exit: irq=2 ret=handled
            sshd-678     [000] d.h1.  1980.707423: irq_handler_entry: irq=40 name=mmc1
            sshd-678     [000] d.h1.  1980.707435: irq_handler_exit: irq=40 ret=handled
            sshd-678     [000] d.h1.  1980.707437: irq_handler_entry: irq=40 name=mmc0
            sshd-678     [000] d.h1.  1980.707439: irq_handler_exit: irq=40 ret=unhandled
            sshd-678     [000] d.h..  1980.707445: irq_handler_entry: irq=40 name=mmc1
            sshd-678     [000] d.h..  1980.707448: irq_handler_exit: irq=40 ret=handled
            sshd-678     [000] d.h..  1980.707450: irq_handler_entry: irq=40 name=mmc0
            sshd-678     [000] d.h..  1980.707451: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.  1980.708968: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1980.708974: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1980.709015: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.  1980.709032: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.  1980.709034: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.  1980.709035: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1980.709067: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1980.709071: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1980.709072: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1980.709074: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1980.709116: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1980.709124: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1980.709125: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1980.709126: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1980.709166: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1980.709170: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1980.709171: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1980.709173: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1980.709175: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1980.709178: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1980.709179: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1980.709181: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1980.709251: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1980.709261: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1980.709262: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1980.709264: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1980.709302: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1980.709309: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1980.709311: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1980.709312: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1980.709389: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1980.709400: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1980.709401: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1980.709403: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1980.723119: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1980.723129: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1980.723138: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1980.723147: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d.h1.  1980.723172: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1980.723176: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1980.739117: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1980.739118: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1980.739123: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1980.739125: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.H2.  1980.739130: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNH2.  1980.739138: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1980.739171: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1980.739175: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1980.739176: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1980.739178: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.  1980.739192: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1980.739200: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1980.739220: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1980.739224: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1980.739225: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1980.739227: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.  1980.739235: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1980.739243: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1980.739262: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1980.739266: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1980.739267: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1980.739268: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.  1980.739277: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1980.739284: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d.h1.  1980.747118: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1980.747126: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1980.826787: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1980.826793: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1980.826795: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.  1980.826807: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.  1980.826837: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1980.826841: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1980.875117: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1980.875118: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1980.875124: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1980.875125: irq_handler_exit: irq=11 ret=handled
     kworker/0:3-867     [000] d.h1.  1980.875171: irq_handler_entry: irq=28 name=eth0
     kworker/0:3-867     [000] d.h1.  1980.875175: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.  1980.875222: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1.  1980.875232: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.  1980.875252: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1.  1980.875260: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.  1980.875280: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1.  1980.875287: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.  1980.875306: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1.  1980.875314: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.  1980.879116: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1980.879128: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1980.919117: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1980.919119: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1980.919124: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1980.919124: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1980.919173: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1980.919178: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1980.971117: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1980.971119: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1980.971124: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1980.971125: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2.  1980.971138: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2.  1980.971141: irq_handler_exit: irq=6 ret=handled
     kworker/0:3-867     [000] d.h1.  1980.971189: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1980.971191: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1980.971192: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1980.971202: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1980.972129: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1980.972134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1981.003117: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1981.003119: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1981.003124: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1981.003127: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1981.003134: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.  1981.003143: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.  1981.003168: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1981.003172: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1981.039297: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.  1981.039313: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.  1981.039315: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.  1981.039316: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1981.039351: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1981.039355: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1981.039358: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1981.039361: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1981.039363: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1981.039364: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1981.039406: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1981.039413: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1981.039414: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1981.039416: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1981.039457: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1981.039462: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1981.039463: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1981.039465: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1981.039467: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1981.039470: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1981.039471: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1981.039473: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1981.039529: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1981.039534: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1981.039535: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1981.039536: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1981.042555: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.  1981.042567: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1981.042594: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1981.042598: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1981.042599: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1981.042601: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1981.042649: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1981.042660: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1981.042661: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1981.042662: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1981.042707: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1981.042717: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1981.042718: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1981.042720: irq_handler_exit: irq=40 ret=unhandled
            sshd-678     [000] d.h1.  1981.042804: irq_handler_entry: irq=40 name=mmc1
            sshd-678     [000] d.h1.  1981.042815: irq_handler_exit: irq=40 ret=handled
            sshd-678     [000] d.h1.  1981.042816: irq_handler_entry: irq=40 name=mmc0
            sshd-678     [000] d.h1.  1981.042817: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.  1981.043011: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1981.043023: irq_handler_exit: irq=2 ret=handled
            bash-698     [003] d.h..  1981.043117: irq_handler_entry: irq=11 name=arch_timer
            bash-698     [003] d.h..  1981.043138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1981.043140: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.  1981.043144: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1981.043304: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.  1981.043318: irq_handler_exit: irq=2 ret=handled
            sshd-678     [000] d.h1.  1981.043502: irq_handler_entry: irq=40 name=mmc1
            sshd-678     [000] d.h1.  1981.043515: irq_handler_exit: irq=40 ret=handled
            sshd-678     [000] d.h1.  1981.043517: irq_handler_entry: irq=40 name=mmc0
            sshd-678     [000] d.h1.  1981.043518: irq_handler_exit: irq=40 ret=unhandled
            sshd-678     [000] d.h..  1981.043525: irq_handler_entry: irq=40 name=mmc1
            sshd-678     [000] d.h..  1981.043528: irq_handler_exit: irq=40 ret=handled
            sshd-678     [000] d.h..  1981.043529: irq_handler_entry: irq=40 name=mmc0
            sshd-678     [000] d.h..  1981.043531: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1981.045180: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.  1981.045198: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.  1981.045199: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.  1981.045201: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1981.045233: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1981.045237: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1981.045238: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1981.045240: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1981.045281: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1981.045288: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1981.045289: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1981.045291: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1981.045331: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1981.045336: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1981.045337: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1981.045338: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1981.045340: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1981.045344: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1981.045345: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1981.045346: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1981.045417: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1981.045427: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1981.045428: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1981.045429: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1981.045468: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1981.045475: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1981.045476: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1981.045478: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1981.045549: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1981.045559: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1981.045560: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1981.045562: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.  1981.045899: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1981.045904: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1981.047138: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1981.047143: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1981.059121: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1981.059131: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1981.059140: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1981.059148: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d.h1.  1981.059172: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1981.059176: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1981.075118: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1981.075119: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1981.075125: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1981.075126: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.H1.  1981.075133: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNH1.  1981.075142: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNH1.  1981.075144: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNH1.  1981.075151: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.  1981.075182: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1981.075186: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1981.075187: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1981.075189: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.  1981.075206: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1981.075214: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1981.075232: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1981.075235: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1981.075236: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1981.075238: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.  1981.075246: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1981.075254: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1981.075272: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1981.075276: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1981.075277: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1981.075278: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.  1981.075289: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1981.075296: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d.h1.  1981.083117: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1981.083119: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1981.083126: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1981.083126: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1981.163906: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1981.163910: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1981.255118: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1981.255119: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1981.255124: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1981.255125: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.H1.  1981.255135: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNH1.  1981.255147: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d.h1.  1981.255178: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1981.255183: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1981.259117: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1981.259117: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1981.259120: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1981.259125: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1981.259125: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1981.259127: irq_handler_exit: irq=11 ret=handled
     kworker/0:3-867     [000] d.h..  1981.259169: irq_handler_entry: irq=11 name=arch_timer
     kworker/0:3-867     [000] d.h..  1981.259175: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1981.259197: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] dNh1.  1981.259207: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [000] d.h1.  1981.260045: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1981.260050: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1981.353281: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.  1981.353294: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1981.353366: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1981.353373: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1981.515118: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1981.515120: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1981.515126: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1981.515132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1981.515137: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] d.H1.  1981.515141: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.  1981.515146: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNH1.  1981.515152: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.  1981.515173: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1981.515179: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1981.515187: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1981.515192: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1981.579119: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1981.579121: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1981.579126: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1981.579128: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1981.579185: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1981.579190: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1981.661005: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.  1981.661025: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.  1981.661027: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.  1981.661029: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] dNh1.  1981.661032: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.  1981.661035: irq_handler_exit: irq=6 ret=handled
     kworker/0:3-867     [000] dNh1.  1981.661069: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] dNh1.  1981.661073: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] dNh1.  1981.661074: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] dNh1.  1981.661076: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1981.661140: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1981.661148: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1981.661149: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1981.661151: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1981.661193: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1981.661198: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1981.661199: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1981.661201: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1981.661203: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1981.661206: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1981.661207: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1981.661209: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1981.661267: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1981.661271: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1981.661272: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1981.661274: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1981.664295: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.  1981.664307: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1981.664335: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1981.664339: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1981.664340: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1981.664342: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1981.664392: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1981.664402: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1981.664403: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1981.664405: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1981.664450: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1981.664460: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1981.664461: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1981.664463: irq_handler_exit: irq=40 ret=unhandled
            sshd-678     [000] d.h1.  1981.664554: irq_handler_entry: irq=40 name=mmc1
            sshd-678     [000] d.h1.  1981.664566: irq_handler_exit: irq=40 ret=handled
            sshd-678     [000] d.h1.  1981.664568: irq_handler_entry: irq=40 name=mmc0
            sshd-678     [000] d.h1.  1981.664569: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.  1981.664750: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1981.664762: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1981.665047: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.  1981.665062: irq_handler_exit: irq=2 ret=handled
   kworker/u21:0-86      [000] d.h1.  1981.665243: irq_handler_entry: irq=40 name=mmc1
   kworker/u21:0-86      [000] d.h1.  1981.665257: irq_handler_exit: irq=40 ret=handled
   kworker/u21:0-86      [000] d.h1.  1981.665258: irq_handler_entry: irq=40 name=mmc0
   kworker/u21:0-86      [000] d.h1.  1981.665260: irq_handler_exit: irq=40 ret=unhandled
            sshd-678     [000] d.h1.  1981.665274: irq_handler_entry: irq=40 name=mmc1
            sshd-678     [000] d.h1.  1981.665278: irq_handler_exit: irq=40 ret=handled
            sshd-678     [000] d.h1.  1981.665279: irq_handler_entry: irq=40 name=mmc0
            sshd-678     [000] d.h1.  1981.665280: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.  1981.665476: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1981.665482: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1981.666952: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.  1981.666969: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.  1981.666970: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.  1981.666972: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1981.667004: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1981.667009: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1981.667010: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1981.667011: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1981.667053: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1981.667060: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1981.667061: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1981.667062: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1981.667102: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1981.667107: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1981.667108: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1981.667109: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1981.667111: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1981.667115: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1981.667116: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1981.667117: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1981.667119: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1981.667134: irq_handler_exit: irq=11 ret=handled
     kworker/0:3-867     [000] d.h1.  1981.667219: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1981.667229: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1981.667231: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1981.667232: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1981.667271: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1981.667279: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1981.667280: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1981.667281: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1981.667357: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1981.667367: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1981.667368: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1981.667370: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1981.679122: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1981.679131: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1981.683120: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1981.683126: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1981.683136: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1981.683144: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d.h1.  1981.683167: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1981.683171: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1981.699119: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1981.699121: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1981.699127: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1981.699127: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.H1.  1981.699133: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNH1.  1981.699141: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1981.699171: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1981.699176: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1981.699177: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1981.699179: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.  1981.699191: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1981.699200: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1981.699220: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1981.699224: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1981.699225: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1981.699226: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.  1981.699234: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1981.699242: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1981.699261: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1981.699265: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1981.699266: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1981.699268: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.  1981.699276: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1981.699284: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d.h1.  1981.707120: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1981.707120: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1981.707127: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1981.707128: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1981.787100: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1981.787105: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1981.787107: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.  1981.787118: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.  1981.787150: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1981.787154: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1981.875120: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1981.875122: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1981.875127: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1981.875129: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1981.875181: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1981.875186: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1981.899120: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1981.899122: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1981.899126: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1981.899128: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] dNH2.  1981.899145: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNH2.  1981.899148: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.  1981.899181: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.  1981.899193: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.  1981.899211: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.  1981.899215: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [002] d.h1.  1981.899220: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1981.899229: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1981.899248: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.  1981.899251: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [002] d.h1.  1981.899259: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1981.899267: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1981.899289: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.  1981.899292: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [002] d.h1.  1981.899298: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1981.899306: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1981.899327: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.  1981.899331: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [002] d.h1.  1981.899336: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1981.899344: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d.h1.  1981.902718: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1981.902723: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1981.903121: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1981.903127: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1981.995120: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1981.995122: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1981.995125: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1981.995130: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1981.995184: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1981.995189: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1981.995191: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1981.995193: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1981.995194: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.  1981.995208: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1981.996187: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1981.996191: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1982.020051: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.  1982.020066: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNh1.  1982.020068: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.  1982.020075: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.  1982.023122: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1982.023137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1982.023157: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1982.023167: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d.h1.  1982.023199: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1982.023204: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1982.027119: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1982.027122: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1982.027127: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1982.027129: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1982.027138: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.  1982.027147: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.  1982.027170: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1982.027175: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1982.031121: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1982.031130: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1982.031140: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1982.031148: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1982.035120: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1982.035128: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1982.039119: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1982.039126: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1982.039136: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1982.039145: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1982.043119: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1982.043128: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1982.342701: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1982.342707: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1982.342709: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.  1982.342721: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.  1982.342748: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1982.342753: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1982.496108: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1982.496113: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1982.496114: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.  1982.496128: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.  1982.496159: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1982.496163: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1982.539121: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1982.539123: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1982.539129: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1982.539132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1982.539139: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.  1982.539148: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.  1982.539170: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1982.539174: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1982.603122: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1982.603123: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1982.603124: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1982.603130: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1982.603130: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1982.603131: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.H1.  1982.603138: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNH1.  1982.603150: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.  1982.603184: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1982.603188: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1982.603189: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1982.603194: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1982.923124: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1982.923131: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNH2.  1982.923149: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.  1982.923153: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.  1982.923186: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.  1982.923199: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.  1982.923218: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.  1982.923221: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [001] d.h1.  1982.923227: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.  1982.923236: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1982.923254: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.  1982.923258: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [001] d.h1.  1982.923260: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.  1982.923268: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1982.923288: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.  1982.923292: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [001] d.h1.  1982.923294: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.  1982.923301: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1982.923320: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.  1982.923323: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [001] d.h1.  1982.923331: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.  1982.923339: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.  1982.926533: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1982.926538: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1982.927124: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1982.927130: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1982.927182: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1982.927187: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1983.019123: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1983.019125: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1983.019131: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1983.019132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1983.019185: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1983.019190: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1983.019192: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.019194: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.019195: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.  1983.019209: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.020159: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1983.020164: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1983.021915: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.  1983.021929: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1983.022156: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.  1983.022166: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d.h1.  1983.022178: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1983.022185: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1983.022200: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.022205: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.022206: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.022208: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.025234: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.  1983.025246: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNh1.  1983.025248: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.  1983.025255: irq_handler_exit: irq=6 ret=handled
     kworker/0:3-867     [000] d.h1.  1983.025281: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1983.025285: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1983.025286: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1983.025287: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1983.025320: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1983.025324: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1983.025325: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1983.025327: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1983.025372: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1983.025428: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1983.025430: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1983.025431: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.025456: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.025460: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.025461: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.025462: irq_handler_exit: irq=40 ret=unhandled
   kworker/u21:0-86      [000] d.h1.  1983.025490: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [003] d.h1.  1983.025491: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1983.025502: irq_handler_exit: irq=2 ret=handled
   kworker/u21:0-86      [000] d.h1.  1983.025503: irq_handler_exit: irq=40 ret=handled
   kworker/u21:0-86      [000] d.h1.  1983.025504: irq_handler_entry: irq=40 name=mmc0
   kworker/u21:0-86      [000] d.h1.  1983.025505: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.025543: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.025547: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.025548: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.025549: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.025591: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.025599: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.025600: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.025601: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.025641: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.025645: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.025646: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.025648: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.025650: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.025653: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.025654: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.025656: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.025727: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.025738: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.025739: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.025740: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.025832: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.025836: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.025837: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.025839: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.025853: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.025913: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.025914: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.025916: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.  1983.025948: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1983.025958: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1983.025974: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.025985: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.025986: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.025987: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.026025: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.026030: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.026031: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.026032: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.026077: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.026098: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.026099: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.026101: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.026118: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.026122: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.026123: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.026124: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.  1983.026155: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1983.026166: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1983.026488: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.  1983.026504: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.  1983.026505: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.  1983.026507: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.026535: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.026539: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.026540: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.026542: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.026582: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.026589: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.026590: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.026591: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.026631: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.026635: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.026636: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.026638: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.026640: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.026643: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.026644: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.026646: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.026711: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.026721: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.026722: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.026724: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.026788: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.026812: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.026813: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.026814: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.  1983.026840: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1983.026848: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1983.026866: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.026876: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.026877: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.026879: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.026916: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.026920: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.026921: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.026923: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.026967: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.026988: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.026989: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.026991: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.027008: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.027011: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.027012: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.027014: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.  1983.027043: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1983.027053: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1983.027180: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.  1983.027197: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.  1983.027198: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.  1983.027200: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.027228: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.027232: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.027233: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.027236: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.027276: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.027283: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.027284: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.027286: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.027325: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.027330: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.027331: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.027332: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.027334: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.027338: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.027339: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.027340: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.027406: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.027416: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.027418: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.027419: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.027486: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.027509: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.027510: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.027512: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.  1983.027537: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1983.027546: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1983.027563: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.027573: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.027575: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.027576: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.027614: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.027618: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.027619: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.027620: irq_handler_exit: irq=40 ret=unhandled
   kworker/u21:0-86      [000] d.h..  1983.027660: irq_handler_entry: irq=40 name=mmc1
   kworker/u21:0-86      [000] d.h..  1983.027663: irq_handler_exit: irq=40 ret=handled
   kworker/u21:0-86      [000] d.h..  1983.027664: irq_handler_entry: irq=40 name=mmc0
   kworker/u21:0-86      [000] d.h..  1983.027666: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.027809: irq_handler_entry: irq=15 name=DMA IRQ
          <idle>-0       [000] d.h1.  1983.027812: irq_handler_exit: irq=15 ret=handled
          <idle>-0       [000] d.h1.  1983.027834: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.027837: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.027839: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.027840: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.  1983.027870: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1983.027880: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1983.027893: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.  1983.027909: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.  1983.027910: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.  1983.027912: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.027940: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.027944: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.027945: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.027947: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.027986: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.027993: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.027994: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.027995: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.028035: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.028039: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.028040: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.028042: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.028044: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.028047: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.028048: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.028050: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.028115: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.028125: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.028126: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.028128: irq_handler_exit: irq=40 ret=unhandled
   kworker/u21:0-86      [000] d.h1.  1983.028185: irq_handler_entry: irq=40 name=mmc1
   kworker/u21:0-86      [000] d.h1.  1983.028189: irq_handler_exit: irq=40 ret=handled
   kworker/u21:0-86      [000] d.h1.  1983.028190: irq_handler_entry: irq=40 name=mmc0
   kworker/u21:0-86      [000] d.h1.  1983.028191: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.028301: irq_handler_entry: irq=15 name=DMA IRQ
          <idle>-0       [000] d.h1.  1983.028303: irq_handler_exit: irq=15 ret=handled
          <idle>-0       [000] d.h1.  1983.028306: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.028309: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.028310: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.028312: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.  1983.028350: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1983.028359: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1983.028378: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.028388: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.028390: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.028391: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.028429: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.028433: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.028434: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.028436: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.028481: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.028487: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.028489: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.028490: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.028492: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.028496: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.028497: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.028498: irq_handler_exit: irq=40 ret=unhandled
   kworker/u21:0-86      [000] d.h..  1983.028516: irq_handler_entry: irq=40 name=mmc1
   kworker/u21:0-86      [000] d.h..  1983.028528: irq_handler_exit: irq=40 ret=handled
   kworker/u21:0-86      [000] d.h..  1983.028529: irq_handler_entry: irq=40 name=mmc0
   kworker/u21:0-86      [000] d.h..  1983.028531: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.  1983.028542: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1983.028552: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1983.028574: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.028578: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.028579: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.028581: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.028620: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.028627: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.028628: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.028630: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.028669: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.028674: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.028675: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.028676: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.028679: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.028682: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.028683: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.028685: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.028748: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.028758: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.028759: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.028761: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.  1983.028805: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1983.028814: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1983.028832: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.028842: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.028844: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.028845: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [001] d.h1.  1983.029285: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.  1983.029298: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.  1983.037280: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1983.037289: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1983.043124: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1983.043139: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1983.043156: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1983.043166: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d.h1.  1983.043630: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1983.043635: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1983.051124: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1983.051125: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1983.051131: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1983.051132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1983.059124: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1983.059125: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1983.059131: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1983.059132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1983.059179: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.059184: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.059185: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.059187: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.  1983.059198: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1983.059207: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1983.059228: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.059231: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.059233: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.059234: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.  1983.059243: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1983.059251: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1983.059270: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.059274: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.059275: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.059277: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.  1983.059285: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.  1983.059292: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d.h1.  1983.165423: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1983.165430: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1983.165432: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.  1983.165448: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.  1983.165482: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1983.165486: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1983.212703: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1983.212707: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1983.275124: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1983.275125: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1983.275126: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1983.275133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1983.275134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1983.275135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.H1.  1983.275144: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNH1.  1983.275157: irq_handler_exit: irq=6 ret=handled
     kworker/0:3-867     [000] d.h1.  1983.275188: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.  1983.275190: irq_handler_entry: irq=11 name=arch_timer
     kworker/0:3-867     [000] d.h1.  1983.275195: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.  1983.275195: irq_handler_exit: irq=11 ret=handled
     kworker/0:3-867     [000] d.h..  1983.275208: irq_handler_entry: irq=14 name=fe00b880.mailbox
     kworker/0:3-867     [000] d.h..  1983.275211: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [000] d.h1.  1983.275735: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1983.275740: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1983.464269: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1983.464274: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1983.464276: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.  1983.464289: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.  1983.464319: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1983.464324: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1983.563124: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1983.563125: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1983.563126: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1983.563131: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1983.563131: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1983.563134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.  1983.563178: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1983.563182: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.  1983.563183: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.  1983.563183: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.  1983.563187: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1983.563188: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1983.613296: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.  1983.613313: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.  1983.613314: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.  1983.613316: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] dNh1.  1983.613319: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.  1983.613322: irq_handler_exit: irq=6 ret=handled
     kworker/0:3-867     [000] d.h1.  1983.613352: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1983.613356: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1983.613357: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1983.613359: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.613416: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.613426: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.613427: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.613429: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.613471: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.613476: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.613477: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.613478: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.613481: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.613484: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.613485: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.613487: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.613545: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.613550: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.613551: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.613555: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.616578: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.  1983.616590: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1983.616616: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.616621: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.616622: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.616623: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.616673: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.616683: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.616684: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.616686: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.616731: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.616740: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.616742: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.616743: irq_handler_exit: irq=40 ret=unhandled
            sshd-678     [000] d.h1.  1983.616873: irq_handler_entry: irq=40 name=mmc1
            sshd-678     [000] d.h1.  1983.616885: irq_handler_exit: irq=40 ret=handled
            sshd-678     [000] d.h1.  1983.616887: irq_handler_entry: irq=40 name=mmc0
            sshd-678     [000] d.h1.  1983.616889: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.  1983.617178: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1983.617194: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dnh1.  1983.617982: irq_handler_entry: irq=1 name=IPI
          <idle>-0       [001] dNh1.  1983.617984: irq_handler_exit: irq=1 ret=handled
          <idle>-0       [000] d.h1.  1983.618323: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.  1983.618344: irq_handler_exit: irq=2 ret=handled
   kworker/u21:0-86      [000] d.h..  1983.618650: irq_handler_entry: irq=40 name=mmc1
   kworker/u21:0-86      [000] d.h..  1983.618667: irq_handler_exit: irq=40 ret=handled
   kworker/u21:0-86      [000] d.h..  1983.618668: irq_handler_entry: irq=40 name=mmc0
   kworker/u21:0-86      [000] d.h..  1983.618671: irq_handler_exit: irq=40 ret=unhandled
   kworker/u21:0-86      [000] d.h..  1983.618675: irq_handler_entry: irq=40 name=mmc1
   kworker/u21:0-86      [000] d.h..  1983.618680: irq_handler_exit: irq=40 ret=handled
   kworker/u21:0-86      [000] d.h..  1983.618681: irq_handler_entry: irq=40 name=mmc0
   kworker/u21:0-86      [000] d.h..  1983.618682: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.  1983.619121: irq_handler_entry: irq=11 name=arch_timer
   get_ftrace.sh-950     [001] d.h..  1983.619127: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.  1983.619132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1983.619177: irq_handler_entry: irq=2 name=IPI
   get_ftrace.sh-950     [001] d.h..  1983.619180: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.  1983.619181: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d.h1.  1983.619202: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.  1983.619214: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.  1983.620394: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.  1983.620419: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.  1983.620421: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.  1983.620423: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h..  1983.620459: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h..  1983.620464: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h..  1983.620465: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h..  1983.620466: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.620513: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.620522: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.620523: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.620525: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.620571: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.620576: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.620577: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.620579: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.  1983.620581: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.  1983.620585: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.  1983.620586: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.  1983.620587: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1983.620674: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1983.620685: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1983.620686: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1983.620688: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1983.620733: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1983.620742: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1983.620743: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1983.620744: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-867     [000] d.h1.  1983.620876: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-867     [000] d.h1.  1983.620887: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-867     [000] d.h1.  1983.620888: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-867     [000] d.h1.  1983.620889: irq_handler_exit: irq=40 ret=unhandled
   get_ftrace.sh-950     [001] d.h..  1983.623132: irq_handler_entry: irq=11 name=arch_timer
   get_ftrace.sh-950     [001] d.h..  1983.623188: irq_handler_exit: irq=11 ret=handled
