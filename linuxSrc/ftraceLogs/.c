# tracer: function
#
# entries-in-buffer/entries-written: 8018/8018   #P:4
#
#                                _-----=> irqs-off/BH-disabled
#                               / _----=> need-resched
#                              | / _---=> hardirq/softirq
#                              || / _--=> preempt-depth
#                              ||| / _-=> migrate-disable
#                              |||| /     delay
#           TASK-PID     CPU#  |||||  TIMESTAMP  FUNCTION
#              | |         |   |||||     |         |
          <idle>-0       [001] d.h1.    52.755501: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    52.755627: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    52.755628: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    52.755639: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    52.756127: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    52.756259: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    52.756328: irq_handler_entry: irq=29 name=eth0
          <idle>-0       [000] d.h1.    52.756332: irq_handler_exit: irq=29 ret=handled
          <idle>-0       [000] d.h1.    52.756965: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    52.756967: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.    52.757153: irq_handler_entry: irq=29 name=eth0
          <idle>-0       [000] d.h1.    52.757156: irq_handler_exit: irq=29 ret=handled
          <idle>-0       [000] d.h1.    52.757567: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    52.757568: irq_handler_exit: irq=28 ret=handled
 systemd-journal-238     [003] d.h..    52.758954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    52.758955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    52.758956: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    52.758974: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    52.758975: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [003] d.h..    52.758975: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    52.758977: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.    52.758978: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    52.758986: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    52.759122: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    52.759123: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    52.759131: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.    52.762550: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    52.762554: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    52.762952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    52.762952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    52.762955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    52.762956: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    52.766952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    52.766952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    52.766954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    52.766955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    52.767132: irq_handler_entry: irq=2 name=IPI
     kworker/2:1-70      [002] d.h1.    52.767154: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    52.767260: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    52.767261: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    52.767272: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.    52.767272: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    52.767274: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] dNh1.    52.767276: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] dNh1.    52.767279: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] dNh1.    52.767281: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [000] d.h1.    52.767294: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    52.767296: irq_handler_exit: irq=11 ret=handled
     kworker/2:1-70      [002] d.h1.    52.767418: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.    52.767528: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    52.767529: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    52.767544: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d.h1.    52.767598: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    52.767600: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    52.770952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    52.770952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    52.770956: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    52.770959: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] d.h1.    52.770960: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.    52.771079: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    52.771080: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    52.771088: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d.h1.    52.774952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    52.774952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    52.774954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    52.774954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    52.774958: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    52.775079: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    52.775080: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    52.775089: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.    52.775090: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    52.775208: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    52.775209: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    52.775217: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    52.778952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    52.778952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    52.778954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    52.778955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    52.782952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    52.782954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    52.786952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    52.786955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    52.786960: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    52.787081: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    52.787082: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    52.787091: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.    52.787092: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    52.787210: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    52.787211: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    52.787219: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    52.790952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    52.790955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    52.794952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    52.794955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    52.794959: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    52.795078: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    52.795079: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    52.795088: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.    52.795089: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    52.795207: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    52.795208: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    52.795216: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    52.798952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    52.798955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    52.799108: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    52.799111: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    52.802952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    52.802965: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] d.h1.    52.802966: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    52.802970: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    52.803084: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    52.803085: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    52.803094: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] dNh1.    52.803197: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    52.803198: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    52.803205: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    52.806952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    52.806955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    52.894953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    52.894956: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNH2.    52.895099: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    52.895110: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.    52.895111: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    52.895158: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    52.895159: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    52.895160: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [001] d.h1.    52.895160: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    52.895162: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    52.895169: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [001] d.h1.    52.895172: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    52.895230: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    52.895231: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    52.895236: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNh1.    52.895340: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    52.895341: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    52.895349: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.    52.897326: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    52.897329: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    52.899217: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    52.899219: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    52.962953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    52.962957: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNH2.    52.963103: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNH2.    52.963306: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] dNH2.    52.963307: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNH2.    52.963318: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.    52.990954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    52.990958: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNH2.    52.991100: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNH2.    52.991299: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] dNH2.    52.991300: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNH2.    52.991312: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    52.991333: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    52.991474: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.    52.991476: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] d.h1.    52.991485: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    52.993887: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    52.993889: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [003] d.h1.    52.993893: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    52.994014: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    52.994015: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    52.994169: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] dNh1.    52.994170: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    52.994180: irq_handler_exit: irq=6 ret=handled
 systemd-journal-238     [003] d.h..    52.994953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    52.994953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    52.994957: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [003] d.h..    52.994961: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2.    52.995105: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNH2.    52.995106: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNH2.    52.995107: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2.    52.995116: irq_handler_exit: irq=6 ret=handled
     kworker/0:2-115     [000] d.h..    52.995164: irq_handler_entry: irq=11 name=arch_timer
     kworker/0:2-115     [000] d.h..    52.995381: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    52.995455: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    52.995457: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    52.997138: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    52.997139: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    52.997141: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] dNh1.    52.997287: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [000] d.h1.    52.997307: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    52.997459: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNh1.    52.997460: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] dNh1.    52.997461: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] dNh1.    52.997462: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => finish_task_switch.isra.0+0x7c/0x250
 => __schedule+0x398/0xb60
 => schedule_idle+0x30/0x58
 => do_idle+0x158/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] dNh1.    52.997463: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [000] d.h1.    52.998952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    52.998953: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] dNh..    52.998961: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    52.998968: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    52.998968: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    52.998970: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d.h1.    53.002952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    53.002957: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    53.009322: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] dNh1.    53.009460: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] dNh1.    53.009461: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    53.009471: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.    53.009471: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    53.009592: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    53.009593: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    53.009601: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    53.009660: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] d.h1.    53.009672: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    53.009676: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNh1.    53.009788: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    53.009788: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    53.009797: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    53.009823: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.009827: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.009828: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.009829: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    53.010952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    53.010953: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    53.010962: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    53.010967: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    53.010968: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    53.010969: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    53.012986: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    53.013123: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNh1.    53.013124: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    53.013133: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.    53.013135: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    53.013147: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.013149: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.013149: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.013150: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] dNh1.    53.013255: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    53.013256: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    53.013264: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    53.013406: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.013409: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.013409: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.013410: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    53.013583: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.013608: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.013608: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.013609: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    53.013648: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.013650: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.013651: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.013651: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] dNH2.    53.013793: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNH2.    53.014010: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNH2.    53.014010: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNH2.    53.014011: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    53.014022: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    53.014043: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.014045: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.014046: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.014046: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] dNh1.    53.014155: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    53.014156: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    53.014165: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    53.014306: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.014310: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.014310: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.014311: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    53.014475: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.014478: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.014479: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.014479: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    53.014480: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.014482: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.014482: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.014483: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    53.014839: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.014844: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.014845: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.014845: irq_handler_exit: irq=40 ret=unhandled
 systemd-journal-238     [003] d.h..    53.014952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    53.014968: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [003] d.h..    53.014969: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    53.014969: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNH2.    53.014995: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNH2.    53.015009: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    53.015183: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.015185: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.015186: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.015186: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    53.015206: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.015218: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.015218: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.015219: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    53.015231: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.015243: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.015243: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.015244: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    53.015244: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.015246: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.015247: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.015247: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    53.015397: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    53.015413: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.015418: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.015418: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.015421: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] dNh1.    53.015523: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    53.015524: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    53.015532: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    53.015669: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.015672: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.015672: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.015673: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    53.015840: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.015849: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.015850: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.015850: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    53.015868: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.015870: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.015870: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.015871: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    53.016017: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    53.016143: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    53.016144: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    53.016152: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    53.016236: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.    53.016389: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.    53.016389: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.    53.016390: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    53.016402: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.016404: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.016405: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.016405: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    53.016570: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.016575: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.016575: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.016576: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    53.016738: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.016741: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.016741: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.016742: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    53.016743: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.016745: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.016745: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.016746: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    53.017075: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.017081: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.017081: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.017082: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    53.017263: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.017265: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.017265: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.017266: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    53.017274: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.017281: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.017281: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.017282: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    53.017283: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.017285: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.017285: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.017285: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    53.017434: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    53.017448: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.017453: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.017454: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.017454: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] dNh1.    53.017558: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    53.017559: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    53.017567: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    53.017701: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.017703: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.017704: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.017704: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    53.017870: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.017879: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.017879: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.017880: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    53.017897: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.017899: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.017899: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.017899: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    53.018045: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    53.018068: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [002] dNh1.    53.018168: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    53.018169: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    53.018177: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] dNh1.    53.018309: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.    53.018309: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.    53.018310: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    53.018321: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.018323: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.018323: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.018324: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    53.018487: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.018492: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.018492: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.018493: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    53.018655: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.018657: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.018657: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.018658: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    53.018659: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.018661: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.018661: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.018661: irq_handler_exit: irq=40 ret=unhandled
 systemd-journal-238     [003] d.h..    53.018953: irq_handler_entry: irq=11 name=arch_timer
     kworker/0:2-115     [000] d.h..    53.018964: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    53.018969: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    53.018978: irq_handler_entry: irq=2 name=IPI
     kworker/0:2-115     [000] d.h..    53.018978: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    53.018978: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dnh1.    53.018997: irq_handler_entry: irq=1 name=IPI
          <idle>-0       [002] dNh1.    53.018998: irq_handler_exit: irq=1 ret=handled
          <idle>-0       [000] d.h1.    53.019022: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.019029: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.019029: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.019030: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    53.019034: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    53.019152: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    53.019153: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    53.019161: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    53.019198: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.019199: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.019200: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.019201: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    53.019210: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.019217: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.019217: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.019218: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    53.019219: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.019221: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.019221: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.019221: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    53.019225: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    53.019342: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    53.019342: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    53.019350: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    53.019495: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.019500: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.019500: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.019501: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    53.019502: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.019503: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.019504: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.019504: irq_handler_exit: irq=40 ret=unhandled
  NetworkManager-517     [002] dnh..    53.019509: irq_handler_entry: irq=1 name=IPI
  NetworkManager-517     [002] dNh..    53.019510: irq_handler_exit: irq=1 ret=handled
          <idle>-0       [000] d.H2.    53.019642: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] d.H2.    53.019651: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    53.020184: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.020186: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.020187: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.020188: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    53.020199: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    53.020342: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    53.020367: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.020369: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.020370: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.020370: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    53.020469: irq_handler_entry: irq=15 name=DMA IRQ
          <idle>-0       [000] d.h1.    53.020470: irq_handler_exit: irq=15 ret=handled
          <idle>-0       [000] d.h1.    53.020502: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.020504: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.020505: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.020505: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    53.020509: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    53.020561: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [002] dNh1.    53.020632: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    53.020775: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.    53.020775: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.    53.020776: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] dNh1.    53.020777: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    53.020787: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    53.020805: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.020807: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.020807: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.020808: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    53.021050: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.021055: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.021056: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.021056: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    53.021222: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.021225: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.021225: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.021226: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    53.021227: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.021229: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.021229: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.021230: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    53.021382: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    53.021508: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    53.021529: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.021534: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.021534: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.021535: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    53.021536: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.021538: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.021538: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.021538: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    53.021542: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    53.021662: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    53.021701: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.021703: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.021704: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.021704: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    53.021808: irq_handler_entry: irq=15 name=DMA IRQ
          <idle>-0       [000] d.h1.    53.021809: irq_handler_exit: irq=15 ret=handled
          <idle>-0       [000] d.h1.    53.021810: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.021811: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.021812: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.021812: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    53.021821: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    53.021943: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    53.022089: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.022094: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.022094: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.022097: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    53.022098: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.022099: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.022100: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.022100: irq_handler_exit: irq=40 ret=unhandled
  NetworkManager-517     [002] dnh1.    53.022106: irq_handler_entry: irq=1 name=IPI
  NetworkManager-517     [002] dNh1.    53.022106: irq_handler_exit: irq=1 ret=handled
          <idle>-0       [000] d.h1.    53.022244: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.022247: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.022247: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.022248: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    53.022251: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    53.022377: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    53.022394: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.022397: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.022397: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.022398: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    53.022401: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.022403: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.022403: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.022404: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    53.022407: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    53.022425: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [002] dNh1.    53.022528: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    53.022667: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.    53.022667: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.    53.022668: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    53.022681: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.022683: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.022683: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.022684: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    53.022934: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.022938: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.022939: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.022939: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    53.022952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    53.022953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    53.022969: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [003] d.h..    53.022970: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    53.022970: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] d.h1.    53.022972: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNH2.    53.023090: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNH2.    53.023104: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    53.023243: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.023246: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.023247: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.023247: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    53.023248: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.023250: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.023250: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.023251: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    53.023406: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    53.023530: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    53.023531: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    53.023539: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    53.023560: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.023565: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.023566: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.023566: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    53.023567: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.023569: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.023569: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.023570: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    53.023573: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    53.023689: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    53.023690: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    53.023698: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    53.023855: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.023861: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.023861: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.023862: irq_handler_exit: irq=40 ret=unhandled
  NetworkManager-517     [002] dnh..    53.023866: irq_handler_entry: irq=1 name=IPI
  NetworkManager-517     [002] dNh..    53.023867: irq_handler_exit: irq=1 ret=handled
          <idle>-0       [001] d.h1.    53.024269: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    53.024405: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    53.024406: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    53.024415: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    53.026955: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    53.026955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    53.026955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    53.026956: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    53.026969: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    53.026969: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [003] d.h..    53.026973: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    53.026975: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [003] d.h..    53.030952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    53.030962: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    53.030962: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    53.030964: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.    53.031377: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    53.031380: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [003] d.h..    53.034952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    53.034960: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [003] d.h..    53.038952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    53.038959: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    53.038969: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    53.039111: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    53.039112: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    53.039121: irq_handler_exit: irq=6 ret=handled
 systemd-journal-238     [003] d.h..    53.042952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    53.042961: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [003] d.h..    53.046952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    53.046960: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [003] d.h..    53.050952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    53.050959: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [003] d.h..    53.054952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    53.054961: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    53.054961: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    53.054961: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.    53.054971: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    53.055100: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    53.055101: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    53.055110: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    53.055135: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.055139: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.055139: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.055140: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [001] d.h1.    53.055148: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    53.055264: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    53.055265: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    53.055273: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    53.055284: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.055286: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.055286: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.055287: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [001] d.h1.    53.055290: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    53.055406: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    53.055406: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    53.055414: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    53.055424: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.055426: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.055427: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.055427: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [001] d.h1.    53.055430: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    53.055545: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    53.055546: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    53.055553: irq_handler_exit: irq=6 ret=handled
 systemd-journal-238     [003] d.h..    53.058953: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    53.058961: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [003] d.h..    53.062952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    53.062961: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.070954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    53.070958: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.216970: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    53.217138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.    53.217139: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    53.217300: irq_handler_exit: irq=6 ret=handled
     kworker/3:2-95      [003] d.h1.    53.217346: irq_handler_entry: irq=11 name=arch_timer
     kworker/3:2-95      [003] d.h1.    53.217556: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [003] d.h..    53.218953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    53.218974: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [003] d.h..    53.218974: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    53.218975: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    53.219319: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    53.219321: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    53.219325: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    53.219326: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [003] d.h1.    53.220416: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    53.220416: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    53.220417: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    53.220418: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    53.220419: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [003] dNh1.    53.220563: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.222952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    53.223136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.226952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    53.227138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.230952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    53.231136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.234952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    53.235136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.238952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    53.239134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.242952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    53.243134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.246952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    53.247134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.250952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    53.251134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.254953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    53.255135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.258952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    53.259134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dnh1.    53.262453: irq_handler_entry: irq=1 name=IPI
          <idle>-0       [000] dNh1.    53.262454: irq_handler_exit: irq=1 ret=handled
 journal-offline-812     [000] d.h2.    53.262956: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    53.262956: irq_handler_entry: irq=11 name=arch_timer
 journal-offline-812     [000] d.h2.    53.262980: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [003] d.h..    53.262987: irq_handler_exit: irq=11 ret=handled
 journal-offline-812     [000] d.h2.    53.262998: irq_handler_entry: irq=2 name=IPI
 journal-offline-812     [000] d.h2.    53.263186: irq_handler_exit: irq=2 ret=handled
 journal-offline-812     [000] dnh..    53.265060: irq_handler_entry: irq=1 name=IPI
 journal-offline-812     [000] dNh..    53.265062: irq_handler_exit: irq=1 ret=handled
 journal-offline-812     [000] d.h..    53.266952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    53.266955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    53.266970: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.266982: irq_handler_entry: irq=2 name=IPI
 journal-offline-812     [000] d.h..    53.266987: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.    53.267123: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d.h1.    53.267856: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    53.267859: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.270952: irq_handler_entry: irq=11 name=arch_timer
 journal-offline-812     [000] d.h..    53.270953: irq_handler_entry: irq=11 name=arch_timer
 journal-offline-812     [000] d.h..    53.270963: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.    53.271172: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.274955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    53.274955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    53.274962: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.    53.275149: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    53.278952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    53.278953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    53.278954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.    53.279137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    53.279142: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    53.279279: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    53.282952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    53.282953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    53.283129: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.    53.283129: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    53.286952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    53.286952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    53.287125: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.    53.287125: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    53.290952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    53.290953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    53.290954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.    53.291247: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    53.294952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    53.294952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    53.295125: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.    53.295125: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    53.298952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    53.298952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    53.299125: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.    53.299125: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    53.302492: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    53.302495: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.302952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    53.303136: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    53.303136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    53.303138: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d.h1.    53.306952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    53.307133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.310952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    53.311134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    53.311141: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    53.311267: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    53.311268: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    53.311276: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    53.311293: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    53.311295: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.314952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    53.315129: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.318952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    53.319136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.    53.319137: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    53.319296: irq_handler_exit: irq=6 ret=handled
     kworker/3:2-95      [003] d.h..    53.321094: irq_handler_entry: irq=11 name=arch_timer
     kworker/3:2-95      [003] d.h..    53.321308: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.322952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    53.323069: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    53.323071: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    53.323074: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    53.323076: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [003] dNh1.    53.323140: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.    53.323141: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    53.323264: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [003] d.h1.    53.323285: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    53.323291: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    53.323291: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    53.323292: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    53.323293: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [003] dNh1.    53.323458: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [003] d.h..    53.326953: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    53.326972: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.443659: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    53.443661: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.443662: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    53.443963: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] dNh1.    53.443964: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    53.443974: irq_handler_exit: irq=6 ret=handled
     kworker/3:2-95      [003] d.h1.    53.443995: irq_handler_entry: irq=11 name=arch_timer
     kworker/3:2-95      [003] d.h1.    53.444196: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    53.445970: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    53.445971: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    53.445971: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    53.445972: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [003] d.h..    53.446952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    53.446976: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    53.446977: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [003] dNh..    53.446977: irq_handler_exit: irq=11 ret=handled
     kworker/3:2-95      [003] d.h1.    53.446997: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    53.447006: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    53.447006: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    53.447007: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    53.447008: irq_handler_exit: irq=14 ret=handled
     kworker/3:2-95      [003] d.h1.    53.447205: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.450953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    53.451144: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.454952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    53.455136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.458952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    53.459134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.462952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    53.463134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.466953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    53.467133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.470952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    53.471133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.474952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    53.475135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.478952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    53.479136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.482952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    53.483132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.486952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    53.487134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.490952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    53.491134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.494952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    53.495134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.496114: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    53.496116: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.498952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    53.499133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.502952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    53.503133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.506952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    53.507134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.510952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    53.511133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.514953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    53.515133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.518952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    53.519134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.522952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    53.523134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.526952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    53.527133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.530952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    53.531135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.534952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    53.535133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.538952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    53.539133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.542952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    53.543134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.544105: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    53.544427: irq_handler_exit: irq=6 ret=handled
     kworker/3:2-95      [003] d.h..    53.544463: irq_handler_entry: irq=11 name=arch_timer
     kworker/3:2-95      [003] d.h..    53.544682: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    53.546438: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    53.546440: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    53.546442: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    53.546442: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [003] d.h..    53.546953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    53.546976: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [003] dNh..    53.546976: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    53.546977: irq_handler_exit: irq=2 ret=handled
     kworker/3:2-95      [003] d.h1.    53.546993: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dnh1.    53.546998: irq_handler_entry: irq=1 name=IPI
          <idle>-0       [001] dNh1.    53.546999: irq_handler_exit: irq=1 ret=handled
          <idle>-0       [000] d.h1.    53.547006: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    53.547007: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    53.547009: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    53.547010: irq_handler_exit: irq=14 ret=handled
     kworker/3:2-95      [003] d.h1.    53.547202: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    53.548861: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    53.548864: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    53.550952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    53.550971: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] d.h1.    53.550973: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    53.551095: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    53.551096: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    53.551104: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.    53.551780: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    53.551782: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    53.568050: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    53.568053: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] D.H2.    53.568141: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] D.H2.    53.568142: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.    53.568482: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.    53.568651: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.    53.568652: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.    53.568655: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] dNh1.    53.568657: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    53.568668: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    53.568669: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    53.568694: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    53.568696: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    53.568697: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.568700: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.568700: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.568701: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [001] dNh1.    53.568789: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    53.568789: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    53.568796: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    53.568948: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.568954: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.568955: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.568955: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    53.569118: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.569120: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.569121: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.569121: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    53.569122: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.569124: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.569124: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.569125: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    53.569279: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    53.569410: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    53.569411: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    53.569419: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    53.569436: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.569438: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.569439: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [002] d.h1.    53.569439: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    53.569439: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    53.569441: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    53.569447: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    53.569563: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    53.569564: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    53.569572: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    53.570952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    53.570952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    53.570961: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    53.570964: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.H1.    53.570964: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.H1.    53.570965: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d.h1.    53.572311: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] dNh1.    53.572445: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] dNh1.    53.572445: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    53.572454: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    53.572466: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.572468: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.572468: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.572469: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    53.572473: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    53.572588: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    53.572589: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    53.572597: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    53.572623: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.572630: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.572630: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.572631: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    53.572634: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    53.572750: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    53.572751: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    53.572758: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    53.572778: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.572784: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.572784: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.572785: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    53.572788: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    53.572903: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    53.572904: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    53.572912: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    53.572968: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    53.572969: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.    53.572984: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.572990: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.572990: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.572991: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    53.572994: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    53.573113: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    53.573113: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    53.573121: irq_handler_exit: irq=6 ret=handled
 systemd-journal-238     [001] d.h..    53.574953: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    53.574963: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    53.580564: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    53.580567: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    53.586954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    53.586958: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNH2.    53.587167: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    53.587426: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNH2.    53.587427: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    53.587441: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    53.602954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    53.602958: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNH2.    53.603131: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    53.603385: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNH2.    53.603386: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    53.603399: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    53.603420: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.603422: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.603423: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.603424: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.H2.    53.603560: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] d.H2.    53.603568: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    53.606248: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.606250: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.606251: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.606252: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [001] d.h1.    53.606260: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    53.606380: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    53.606381: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    53.606535: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNh1.    53.606535: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    53.606545: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    53.606556: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.606558: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.606559: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    53.606559: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.H2.    53.606686: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] d.H2.    53.606695: irq_handler_exit: irq=6 ret=handled
 systemd-journal-238     [001] d.h..    53.606953: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    53.606962: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    53.606962: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    53.606963: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.    53.618954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    53.618958: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    53.643391: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    53.643393: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    53.711970: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    53.711972: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    53.711973: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    53.712275: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNh1.    53.712276: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    53.712286: irq_handler_exit: irq=6 ret=handled
     kworker/1:1-57      [001] d.h1.    53.712326: irq_handler_entry: irq=11 name=arch_timer
     kworker/1:1-57      [001] d.h1.    53.712533: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    53.714299: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    53.714301: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    53.714304: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    53.714305: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [001] d.h..    53.714952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    53.714975: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    53.714976: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    53.714976: irq_handler_exit: irq=2 ret=handled
     kworker/1:1-57      [001] d.h..    53.714994: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    53.715003: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    53.715003: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    53.715004: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    53.715005: irq_handler_exit: irq=14 ret=handled
     kworker/1:1-57      [001] d.h..    53.715203: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    53.718952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    53.719143: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    53.722952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    53.723136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    53.726952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    53.727135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    53.730952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    53.731134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    53.734952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    53.735134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    53.738952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    53.739135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    53.742952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    53.743134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    53.746952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    53.747135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    53.750952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    53.751134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    53.754952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    53.755132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    53.758952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    53.759134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    53.762952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    53.763134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    53.764117: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    53.764119: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    53.766952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    53.767134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    53.770952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    53.771136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    53.774952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    53.775137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    53.778952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    53.779133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    53.782952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    53.783132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    53.786952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    53.787133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    53.790953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    53.790953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    53.790956: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    53.791133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNH2.    53.791265: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNH2.    53.791283: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.    53.791308: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    53.791310: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    53.794952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    53.795127: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    53.798952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    53.799134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    53.802952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    53.803133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    53.806952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    53.807133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    53.810952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    53.811133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    53.812115: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    53.812440: irq_handler_exit: irq=6 ret=handled
     kworker/1:1-57      [001] d.h..    53.812475: irq_handler_entry: irq=11 name=arch_timer
     kworker/1:1-57      [001] d.h..    53.812690: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    53.814458: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    53.814458: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    53.814459: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    53.814460: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [001] d.h..    53.814952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    53.814977: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    53.814978: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [001] dNh..    53.814979: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] dnh1.    53.815000: irq_handler_entry: irq=1 name=IPI
          <idle>-0       [002] dNh1.    53.815001: irq_handler_exit: irq=1 ret=handled
          <idle>-0       [001] d.h1.    53.815003: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    53.815008: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    53.815009: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    53.815011: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    53.815012: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [001] dNh1.    53.815145: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    53.816483: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    53.816486: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    53.818573: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    53.818575: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    53.818952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    53.818966: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] d.h1.    53.818967: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] dNh1.    53.819089: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    53.819090: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    53.819099: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    53.822952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    53.822955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    53.826952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    53.826966: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] d.h1.    53.826966: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] dNh1.    53.827086: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    53.827086: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    53.827095: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d.h1.    53.918953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    53.918953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    53.918956: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    53.918958: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNH2.    53.919096: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    53.919108: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    53.919139: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    53.919140: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    53.919141: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [002] dNH2.    53.919226: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNH2.    53.919500: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNH2.    53.919501: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNH2.    53.919512: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    53.919628: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    53.919630: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] d.h1.    53.919638: irq_handler_exit: irq=6 ret=handled
     kworker/1:2-64      [001] d.h1.    53.919652: irq_handler_entry: irq=11 name=arch_timer
     kworker/1:2-64      [001] d.h1.    53.919857: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    53.921619: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    53.921620: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    53.921622: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    53.921624: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [001] d.h1.    53.921625: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    53.921756: irq_handler_exit: irq=2 ret=handled
     kworker/1:2-64      [001] d.h..    53.921768: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    53.921777: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    53.921777: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    53.921778: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    53.921779: irq_handler_exit: irq=14 ret=handled
     kworker/1:2-64      [001] d.h..    53.921980: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    53.922953: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [002] d.h..    53.922953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    53.922964: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [002] dNh..    53.922965: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    53.922967: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.    53.922973: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    53.976056: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    53.976058: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    54.014954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    54.014957: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] dNH2.    54.015129: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNH2.    54.015354: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] dNH2.    54.015355: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNH2.    54.015368: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    54.015392: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    54.015529: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.    54.015532: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] d.h1.    54.015540: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    54.018227: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    54.018229: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [002] d.h1.    54.018231: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    54.018361: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d.h1.    54.018952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    54.018953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    54.018957: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.019136: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    54.019137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.019137: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    54.019137: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2.    54.019265: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2.    54.019274: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] dNh1.    54.019403: irq_handler_exit: irq=6 ret=handled
     kworker/2:1-70      [002] d.h1.    54.019432: irq_handler_entry: irq=11 name=arch_timer
     kworker/2:1-70      [002] d.h1.    54.019640: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [000] d.h..    54.021407: irq_handler_entry: irq=14 name=fe00b880.mailbox
 systemd-journal-238     [000] d.h..    54.021409: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
 systemd-journal-238     [000] d.h..    54.021412: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el0_interrupt+0x44/0xc0
 => __el0_irq_handler_common+0x18/0x28
 => el0t_64_irq_handler+0x10/0x20
 => el0t_64_irq+0x190/0x198
 systemd-journal-238     [000] d.h..    54.021415: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [002] d.h1.    54.021416: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    54.021547: irq_handler_exit: irq=2 ret=handled
     kworker/2:1-70      [002] d.h..    54.021559: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [000] d.h..    54.021568: irq_handler_entry: irq=14 name=fe00b880.mailbox
 systemd-journal-238     [000] d.h..    54.021569: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
 systemd-journal-238     [000] d.h..    54.021570: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el0_interrupt+0x44/0xc0
 => __el0_irq_handler_common+0x18/0x28
 => el0t_64_irq_handler+0x10/0x20
 => el0t_64_irq+0x190/0x198
 systemd-journal-238     [000] d.h..    54.021571: irq_handler_exit: irq=14 ret=handled
     kworker/2:1-70      [002] d.h..    54.021772: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    54.022952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [000] d.h..    54.022952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [000] d.h..    54.022961: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    54.022972: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    54.143108: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    54.143110: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    54.143111: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    54.143268: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] dNh1.    54.143269: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    54.143269: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    54.143270: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] d.h1.    54.143284: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    54.143285: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNh1.    54.143399: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    54.143400: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    54.143408: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    54.144921: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    54.144923: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.216970: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    54.216971: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    54.334952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    54.334953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    54.334956: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    54.334956: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.H1.    54.334961: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] d.h1.    54.334962: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    54.335265: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    54.335266: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH1.    54.335454: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNh1.    54.335455: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] dNH1.    54.335455: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH1.    54.335467: irq_handler_exit: irq=6 ret=handled
     kworker/0:2-115     [000] d.h1.    54.335499: irq_handler_entry: irq=11 name=arch_timer
     kworker/0:2-115     [000] d.h1.    54.335709: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    54.335778: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    54.335780: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    54.337467: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    54.337468: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    54.337470: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] dNh1.    54.337619: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [000] d.h1.    54.337634: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    54.337784: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNh1.    54.337785: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] dNh1.    54.337786: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] dNh1.    54.337787: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => finish_task_switch.isra.0+0x7c/0x250
 => __schedule+0x398/0xb60
 => schedule_idle+0x30/0x58
 => do_idle+0x158/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] dNh1.    54.337788: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [000] d.h1.    54.338952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    54.338953: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    54.338962: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    54.338968: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    54.338968: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    54.338970: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.    54.342953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.343139: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.346952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.347136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.350953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.351134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.354953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.355135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.358952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.359133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.362952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.363134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.366952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.367134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.370952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.371135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.374952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.375134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    54.377372: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    54.377374: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.378952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.379133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.382952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.383135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.386952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.387134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.388117: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    54.388119: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.390952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.391133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.394953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.395134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] dnh1.    54.398270: irq_handler_entry: irq=1 name=IPI
          <idle>-0       [002] dNh1.    54.398272: irq_handler_exit: irq=1 ret=handled
 journal-offline-813     [002] d.h..    54.398956: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h1.    54.398956: irq_handler_entry: irq=11 name=arch_timer
 journal-offline-813     [002] d.h..    54.398983: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h1.    54.398987: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    54.399003: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    54.399158: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    54.399159: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    54.399168: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    54.399198: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    54.399200: irq_handler_exit: irq=11 ret=handled
 journal-offline-813     [002] d.h..    54.402954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    54.402956: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    54.402970: irq_handler_exit: irq=11 ret=handled
 journal-offline-813     [002] d.h..    54.402970: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.406952: irq_handler_entry: irq=11 name=arch_timer
 journal-offline-813     [002] d.h..    54.406953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    54.406959: irq_handler_exit: irq=11 ret=handled
 journal-offline-813     [002] d.h..    54.406962: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    54.406971: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    54.407120: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    54.407122: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    54.407133: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    54.407134: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    54.407265: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d.h1.    54.410954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    54.410954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    54.410961: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    54.411150: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    54.414952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    54.414952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    54.414955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    54.415136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    54.415141: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    54.415272: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    54.415273: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    54.415281: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d.h1.    54.418952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    54.418952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    54.418954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    54.419127: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    54.422952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    54.422952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    54.422954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    54.423135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    54.423140: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    54.423269: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    54.423270: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    54.423278: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d.h1.    54.426952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    54.426952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    54.426954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    54.427127: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    54.430952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    54.430952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    54.430953: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    54.431135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    54.431139: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    54.431267: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    54.431268: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    54.431277: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d.h1.    54.434952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    54.434952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    54.434954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    54.435128: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    54.435129: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    54.435130: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNH1.    54.435132: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH1.    54.435343: irq_handler_exit: irq=6 ret=handled
     kworker/1:2-64      [001] d.h1.    54.435504: irq_handler_entry: irq=11 name=arch_timer
     kworker/1:2-64      [001] d.h1.    54.435717: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    54.437477: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    54.437479: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    54.437482: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    54.437485: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [001] d.h..    54.437487: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    54.437602: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [001] d.h1.    54.437619: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    54.437626: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    54.437626: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    54.437627: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    54.437628: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [001] dNh1.    54.437766: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    54.438952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    54.438974: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.483836: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    54.483839: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.494952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    54.494955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNH2.    54.495123: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    54.495346: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNH2.    54.495347: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    54.495360: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    54.536774: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    54.536777: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.536777: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    54.537073: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNh1.    54.537073: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    54.537083: irq_handler_exit: irq=6 ret=handled
     kworker/1:2-64      [001] d.h1.    54.537106: irq_handler_entry: irq=11 name=arch_timer
     kworker/1:2-64      [001] d.h1.    54.537307: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    54.538953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    54.538975: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] d.h..    54.538975: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    54.538975: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    54.539079: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    54.539080: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    54.539081: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    54.539082: irq_handler_exit: irq=14 ret=handled
     kworker/1:2-64      [001] d.h1.    54.540155: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    54.540163: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    54.540163: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    54.540164: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    54.540165: irq_handler_exit: irq=14 ret=handled
     kworker/1:2-64      [001] d.h1.    54.540362: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.542953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.543139: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.546952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.547136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.548119: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    54.548122: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.550952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.551133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.554953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.555135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.558953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.559136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.562952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.563134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.566952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.567133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    54.568672: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    54.568675: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] D.H2.    54.568758: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] D.H2.    54.568760: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.    54.569075: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.    54.569248: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.    54.569249: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.    54.569252: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] dNh1.    54.569253: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    54.569264: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    54.569266: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    54.569292: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    54.569294: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    54.569295: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    54.569297: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    54.569298: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    54.569298: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [001] dNh1.    54.569386: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    54.569547: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    54.569554: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    54.569555: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    54.569555: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    54.569724: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    54.569726: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    54.569726: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    54.569727: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    54.569728: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    54.569732: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    54.569733: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    54.569733: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    54.569889: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    54.570020: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    54.570021: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    54.570029: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    54.570048: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    54.570050: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [002] d.h1.    54.570050: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    54.570050: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    54.570051: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    54.570053: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    54.570061: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    54.570177: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    54.570178: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    54.570186: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    54.570952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    54.570953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    54.570959: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    54.570964: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    54.572971: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] dNh1.    54.573101: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] dNh1.    54.573102: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    54.573110: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    54.573122: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    54.573124: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    54.573124: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    54.573125: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    54.573129: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    54.573246: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    54.573246: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    54.573254: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    54.573280: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    54.573287: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    54.573287: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    54.573288: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    54.573291: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    54.573407: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    54.573408: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    54.573416: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    54.573436: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    54.573442: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    54.573442: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    54.573443: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    54.573446: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    54.573561: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    54.573562: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    54.573570: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    54.573626: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    54.573627: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.    54.573643: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    54.573647: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    54.573648: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    54.573648: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    54.573649: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    54.573651: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    54.573651: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    54.573652: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    54.573655: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    54.573775: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    54.573776: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    54.573784: irq_handler_exit: irq=6 ret=handled
 systemd-journal-238     [001] d.h..    54.574954: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    54.574965: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    54.581429: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    54.581431: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.586954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    54.586957: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNH2.    54.587168: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    54.587425: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNH2.    54.587426: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    54.587440: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    54.602954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    54.602958: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNH2.    54.603131: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    54.603385: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNH2.    54.603386: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    54.603399: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    54.603420: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    54.603422: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    54.603422: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    54.603423: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.H2.    54.603558: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] d.H2.    54.603567: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    54.606298: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    54.606301: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    54.606301: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    54.606302: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [001] d.h1.    54.606307: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    54.606435: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    54.606445: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    54.606447: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    54.606447: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    54.606447: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [001] d.h1.    54.606450: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    54.606571: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.    54.606952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    54.607135: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    54.607136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    54.607137: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.    54.610953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.611138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.614952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.615136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.618952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.619134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.622952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.623132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.626952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.627133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.630952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.631133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.634952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.635134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.638952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.639135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    54.639136: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    54.639297: irq_handler_exit: irq=6 ret=handled
     kworker/1:2-64      [001] d.h..    54.639335: irq_handler_entry: irq=11 name=arch_timer
     kworker/1:2-64      [001] d.h..    54.639544: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    54.641309: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    54.641311: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    54.641315: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    54.641316: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [001] d.h..    54.641318: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    54.641433: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [001] d.h1.    54.641451: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    54.641456: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    54.641457: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    54.641458: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    54.641458: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [001] dNh1.    54.641598: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    54.642952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    54.642972: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    54.644996: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    54.644999: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.716971: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.717126: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    54.717127: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    54.717137: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    54.718061: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    54.718063: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    54.740969: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    54.740971: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.782953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    54.782957: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNH2.    54.783121: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    54.783345: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNH2.    54.783345: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    54.783358: irq_handler_exit: irq=6 ret=handled
     kworker/1:2-64      [001] d.h1.    54.783375: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    54.783383: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    54.783384: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    54.783385: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    54.783385: irq_handler_exit: irq=14 ret=handled
     kworker/1:2-64      [001] d.h1.    54.783532: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.786543: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.786695: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.786952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    54.787136: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    54.787137: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    54.787137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    54.788509: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    54.788509: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    54.788510: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    54.788512: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [001] d.h..    54.788513: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] d.h..    54.788626: irq_handler_exit: irq=2 ret=handled
     kworker/1:2-64      [001] d.h1.    54.789602: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    54.789611: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    54.789611: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    54.789612: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    54.789613: irq_handler_exit: irq=14 ret=handled
     kworker/1:2-64      [001] d.h1.    54.789816: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.790952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.791136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.794953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.795137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.798952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.799134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.802952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.803135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.806952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.807134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.810952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.811132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.814952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.815133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.818953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.819134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.822952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.823134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.826952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.827134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.830952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.831133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.834952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.835135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.836171: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    54.836173: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.838952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.839133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.842952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.843133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.846952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.847133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.850952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.851134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.854952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.855134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.858952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.859133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.862952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.863133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.866952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.867134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.870952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.871133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.874952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.875132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.878952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.879134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.882952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    54.883134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    54.883135: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    54.883293: irq_handler_exit: irq=6 ret=handled
     kworker/1:2-64      [001] d.h1.    54.883327: irq_handler_entry: irq=11 name=arch_timer
     kworker/1:2-64      [001] d.h1.    54.883533: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    54.885308: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    54.885309: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    54.885310: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    54.885311: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [001] d.h..    54.885313: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    54.885429: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [001] d.h1.    54.885445: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    54.885452: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    54.885452: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    54.885453: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    54.885454: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [001] dNh1.    54.885592: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    54.886952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    54.886974: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.910108: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    54.910110: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.942952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    54.942955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNH2.    54.943099: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    54.943300: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNH2.    54.943301: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    54.943313: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    54.943347: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    54.943348: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    54.943349: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    54.943486: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    54.943488: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] d.h1.    54.943496: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    54.995396: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    54.995398: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.995399: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    54.995695: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNh1.    54.995696: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    54.995706: irq_handler_exit: irq=6 ret=handled
 systemd-journal-238     [001] d.h1.    54.995734: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h1.    54.995900: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    54.997703: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    54.997704: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    54.997707: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    54.997708: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [001] d.h1.    54.998494: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    54.998495: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    54.998496: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    54.998496: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    54.998497: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [001] dNh1.    54.998644: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    54.998952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    54.999138: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    54.999139: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    54.999139: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.002953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.003136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.006952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.007136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    55.007455: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    55.007456: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    55.007457: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    55.007459: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    55.009129: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    55.009130: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    55.009130: irq_handler_entry: irq=40 name=mmc0
 systemd-journal-238     [001] dnh..    55.009138: irq_handler_entry: irq=1 name=IPI
 systemd-journal-238     [001] dNh..    55.009140: irq_handler_exit: irq=1 ret=handled
          <idle>-0       [000] d.h1.    55.009285: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    55.009286: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] d.h1.    55.009295: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    55.009296: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    55.009297: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    55.009297: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    55.009301: irq_handler_exit: irq=40 ret=handled
 systemd-journal-238     [001] d.h1.    55.009301: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh1.    55.009441: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    55.009455: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    55.009459: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    55.009459: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    55.009460: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    55.009711: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    55.009712: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    55.009712: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    55.009715: irq_handler_exit: irq=40 ret=handled
 systemd-journal-238     [001] d.h..    55.009716: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    55.009881: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    55.009890: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    55.009891: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    55.009891: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    55.009894: irq_handler_exit: irq=40 ret=handled
 systemd-journal-238     [001] d.h..    55.009894: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    55.010002: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    55.010014: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    55.010014: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    55.010015: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    55.010016: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    55.010267: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    55.010268: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    55.010268: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    55.010270: irq_handler_exit: irq=40 ret=handled
 systemd-journal-238     [001] d.h..    55.010271: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    55.010377: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    55.010386: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    55.010387: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    55.010387: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    55.010390: irq_handler_exit: irq=40 ret=handled
 systemd-journal-238     [001] d.h..    55.010390: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    55.010493: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    55.010505: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    55.010506: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    55.010506: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    55.010507: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    55.010758: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    55.010759: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    55.010759: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    55.010761: irq_handler_exit: irq=40 ret=handled
 systemd-journal-238     [001] d.h..    55.010763: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    55.010868: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    55.010877: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    55.010878: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    55.010878: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    55.010880: irq_handler_exit: irq=40 ret=handled
 systemd-journal-238     [001] d.h..    55.010881: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    55.010984: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [001] dNh..    55.010985: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    55.011002: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    55.011003: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [001] dNh..    55.011003: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.H1.    55.011015: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.H1.    55.011016: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.H1.    55.011016: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.H1.    55.011017: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    55.011268: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    55.011268: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    55.011269: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    55.011271: irq_handler_exit: irq=40 ret=handled
 systemd-journal-238     [001] d.h..    55.011272: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    55.011372: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    55.011382: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    55.011382: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    55.011383: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    55.011385: irq_handler_exit: irq=40 ret=handled
 systemd-journal-238     [001] d.h..    55.011386: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    55.011489: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    55.011501: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    55.011502: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    55.011502: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    55.011503: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    55.011755: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    55.011756: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    55.011756: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    55.011758: irq_handler_exit: irq=40 ret=handled
 systemd-journal-238     [001] d.h..    55.011759: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    55.011864: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    55.011873: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    55.011873: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    55.011874: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    55.011876: irq_handler_exit: irq=40 ret=handled
 systemd-journal-238     [001] d.h..    55.011877: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    55.011980: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    55.011992: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    55.011993: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    55.011993: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    55.011994: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    55.012246: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    55.012247: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    55.012247: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    55.012249: irq_handler_exit: irq=40 ret=handled
 systemd-journal-238     [001] d.h..    55.012250: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    55.012355: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    55.012365: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    55.012365: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    55.012366: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    55.012368: irq_handler_exit: irq=40 ret=handled
 systemd-journal-238     [001] d.h..    55.012368: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    55.012471: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    55.012483: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    55.012483: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    55.012483: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    55.012484: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    55.012738: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    55.012739: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    55.012739: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    55.012741: irq_handler_exit: irq=40 ret=handled
 systemd-journal-238     [001] d.h..    55.012742: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    55.012848: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    55.012857: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    55.012858: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    55.012858: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    55.012992: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    55.012993: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] d.h1.    55.013002: irq_handler_exit: irq=6 ret=handled
 systemd-journal-238     [001] d.h..    55.014952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    55.014964: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    55.014964: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    55.014965: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dnh1.    55.014984: irq_handler_entry: irq=1 name=IPI
          <idle>-0       [000] d.H1.    55.014985: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [002] dNh1.    55.014985: irq_handler_exit: irq=1 ret=handled
          <idle>-0       [000] d.H1.    55.014986: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.H1.    55.014986: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.H1.    55.014988: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    55.015322: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    55.015322: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    55.015323: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.    55.015478: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.    55.015480: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    55.015489: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    55.015507: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    55.015510: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    55.015511: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    55.015512: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    55.015512: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.    55.015656: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    55.018952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [002] d.h..    55.018953: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [002] d.h..    55.018966: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    55.018969: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    55.018970: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    55.018970: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    55.018971: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    55.018972: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [002] d.h..    55.022952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    55.022953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    55.022960: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    55.022980: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [002] dNh..    55.022981: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    55.022981: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d.h1.    55.038954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    55.038958: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] dNH2.    55.039107: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNH2.    55.039312: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] dNH2.    55.039313: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNH2.    55.039325: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    55.039349: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    55.039488: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.    55.039491: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] d.h1.    55.039500: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    55.042052: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    55.042054: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [002] d.h1.    55.042060: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    55.042184: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    55.042185: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    55.042338: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] dNh1.    55.042339: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    55.042349: irq_handler_exit: irq=6 ret=handled
 systemd-journal-238     [002] d.h..    55.042953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    55.042953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    55.042958: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.H2.    55.042960: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [002] d.h..    55.042961: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.H2.    55.042961: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d.h1.    55.050954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    55.050957: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    55.092208: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    55.092210: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.216971: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    55.216972: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    55.218952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    55.218955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] dNH2.    55.219125: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNH2.    55.219559: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] dNH2.    55.219559: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNH2.    55.219572: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d.h1.    55.283158: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    55.283161: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    55.358953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    55.358957: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.358962: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] d.H1.    55.358964: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    55.359261: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    55.359262: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNH1.    55.359446: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNh1.    55.359446: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] dNH1.    55.359447: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNH1.    55.359458: irq_handler_exit: irq=6 ret=handled
     kworker/2:1-70      [002] d.h..    55.359494: irq_handler_entry: irq=11 name=arch_timer
     kworker/2:1-70      [002] d.h..    55.359699: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    55.361463: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    55.361466: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    55.361469: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    55.361471: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [002] d.h1.    55.361473: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    55.361601: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d.h1.    55.361618: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    55.361624: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    55.361624: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    55.361625: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    55.361626: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [002] dNh1.    55.361761: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    55.362952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    55.362952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    55.362963: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    55.362964: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [001] d.h..    55.362964: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    55.362968: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    55.405531: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    55.405533: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.468343: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    55.468345: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.468346: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    55.468652: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNh1.    55.468652: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    55.468662: irq_handler_exit: irq=6 ret=handled
     kworker/1:2-64      [001] d.h1.    55.468685: irq_handler_entry: irq=11 name=arch_timer
     kworker/1:2-64      [001] d.h1.    55.468887: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    55.470658: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    55.470659: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    55.470660: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    55.470661: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [001] d.h..    55.470953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    55.470974: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] d.h..    55.470975: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    55.470975: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.    55.471759: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    55.471761: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    55.471762: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    55.471765: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    55.471766: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [001] dNh1.    55.471903: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.474952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.475134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.478953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.479137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.482952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.483135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.486952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.487134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.490952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.491133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.494952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.495133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.498953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.499134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.502952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.503133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.506952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.507133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.510952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.511132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.514952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.515133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.518952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.519133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.521353: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    55.521355: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.522952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.523133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.526952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.527133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.530952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.531133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] dnh1.    55.533765: irq_handler_entry: irq=1 name=IPI
          <idle>-0       [002] dNh1.    55.533766: irq_handler_exit: irq=1 ret=handled
 journal-offline-814     [002] d.h..    55.534957: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    55.534957: irq_handler_entry: irq=11 name=arch_timer
 journal-offline-814     [002] d.h..    55.534988: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    55.534991: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    55.535003: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    55.535151: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    55.535152: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    55.535160: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    55.535192: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    55.535195: irq_handler_exit: irq=11 ret=handled
 journal-offline-814     [002] d.h..    55.538954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    55.538956: irq_handler_entry: irq=11 name=arch_timer
 journal-offline-814     [002] d.h..    55.538968: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.538969: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.542953: irq_handler_entry: irq=11 name=arch_timer
 journal-offline-814     [002] d.h..    55.542953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    55.542960: irq_handler_exit: irq=11 ret=handled
 journal-offline-814     [002] d.h..    55.542964: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    55.542971: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    55.543124: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    55.543126: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    55.543138: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    55.543138: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    55.543269: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d.h1.    55.546954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    55.546954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    55.546961: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    55.547146: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    55.550952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    55.550952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    55.550954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    55.551137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    55.551143: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    55.551273: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    55.551274: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    55.551282: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d.h1.    55.554952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    55.554953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    55.554954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    55.554959: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    55.555079: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    55.555080: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    55.555242: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNh1.    55.555244: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    55.558952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    55.558952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    55.558955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    55.559135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    55.562952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    55.562953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    55.562954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    55.563134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    55.563140: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    55.563269: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    55.563270: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    55.563278: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    55.566608: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    55.566610: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] D.H2.    55.566687: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] D.H2.    55.566689: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [002] d.h1.    55.566952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    55.566952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    55.566953: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    55.567130: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    55.567268: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.    55.567440: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.    55.567440: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.    55.567443: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] dNh1.    55.567444: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    55.567453: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    55.567478: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    55.567481: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    55.567481: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    55.567482: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    55.567654: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    55.567660: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    55.567661: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    55.567661: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    55.567825: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    55.567828: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    55.567828: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    55.567829: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    55.567830: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    55.567832: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    55.567832: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    55.567833: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    55.567989: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    55.568117: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    55.568135: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    55.568137: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    55.568138: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    55.568138: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    55.568142: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    55.568264: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    55.570952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    55.570952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    55.570952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    55.570959: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    55.570964: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    55.570965: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    55.571214: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] dNh..    55.571346: irq_handler_exit: irq=6 ret=handled
     kworker/1:2-64      [001] d.h1.    55.571387: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    55.571498: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    55.571501: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    55.571502: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    55.571502: irq_handler_exit: irq=40 ret=unhandled
     kworker/2:1-70      [002] dnh..    55.571509: irq_handler_entry: irq=1 name=IPI
     kworker/2:1-70      [002] dNh..    55.571510: irq_handler_exit: irq=1 ret=handled
     kworker/1:2-64      [001] d.h1.    55.571681: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    55.571829: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    55.571837: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    55.571837: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    55.571838: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    55.571842: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    55.571975: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    55.571995: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    55.571999: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    55.572000: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    55.572000: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    55.572001: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    55.572003: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    55.572003: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    55.572004: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    55.572007: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    55.572128: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    55.572194: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    55.572195: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.    55.572211: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    55.572216: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    55.572216: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    55.572216: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    55.572217: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    55.572219: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    55.572219: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    55.572220: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    55.572223: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    55.572347: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    55.573361: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    55.573363: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    55.573367: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    55.573369: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [001] d.h..    55.573370: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    55.573481: irq_handler_exit: irq=2 ret=handled
     kworker/1:2-64      [001] d.h1.    55.573497: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    55.573505: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    55.573506: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    55.573507: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    55.573508: irq_handler_exit: irq=14 ret=handled
     kworker/1:2-64      [001] d.h1.    55.573710: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    55.574952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    55.574952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    55.574952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    55.574962: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    55.574965: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    55.574970: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    55.578953: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    55.578961: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    55.578961: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    55.578962: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.    55.586954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    55.586958: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNH2.    55.587164: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    55.587425: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNH2.    55.587426: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    55.587439: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    55.602954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    55.602958: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNH2.    55.603134: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    55.603389: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNH2.    55.603390: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    55.603404: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    55.603426: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    55.603428: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    55.603429: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    55.603430: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.H2.    55.603567: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] d.H2.    55.603575: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    55.606237: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    55.606239: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    55.606239: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    55.606240: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [001] d.h1.    55.606245: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    55.606377: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    55.606387: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    55.606389: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    55.606389: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    55.606390: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [001] d.h1.    55.606393: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    55.606514: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.    55.606952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    55.607135: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    55.607135: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    55.607136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.610952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.611136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.614952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.615134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.618952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.619133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.622952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.623135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.624121: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    55.624123: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.626952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.627132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.630952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.631134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.634952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.635134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.638952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.639134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.642952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.643134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.646952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.647132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.650952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.651133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.654952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.655133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.658952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.659133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.662952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.663133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.666952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.667134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.670952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.671133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    55.671134: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    55.671295: irq_handler_exit: irq=6 ret=handled
     kworker/1:2-64      [001] d.h1.    55.671335: irq_handler_entry: irq=11 name=arch_timer
     kworker/1:2-64      [001] d.h1.    55.671544: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    55.673308: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    55.673310: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    55.673312: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    55.673314: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [001] d.h..    55.673316: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    55.673430: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [001] d.h1.    55.673447: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    55.673454: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    55.673454: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    55.673455: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    55.673456: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [001] dNh1.    55.673594: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    55.674952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    55.674974: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.698586: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    55.698588: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.806952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    55.806956: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNH2.    55.807103: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    55.807303: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNH2.    55.807304: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    55.807315: irq_handler_exit: irq=6 ret=handled
 systemd-journal-238     [001] d.h1.    55.807350: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h1.    55.807515: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    55.809313: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    55.809314: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    55.809314: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    55.809315: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [001] d.h1.    55.810413: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    55.810415: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    55.810416: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    55.810416: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    55.810418: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [001] dNh1.    55.810562: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.810952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    55.811136: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    55.811136: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    55.811136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.814953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.815136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.818952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.819135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.822952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.823134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.826952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.827135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.830952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.831134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.834952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.835134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.838952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.839133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.842952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.843132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.846952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.847132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.850952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.851134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.854952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.855133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.858952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.859132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.860120: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    55.860123: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.862952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.863133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.866952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.867134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.870952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.871134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.874952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.875133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.878952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.879133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.882952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.883133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.886952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.887133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.890952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.891134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.894952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.895134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.898952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.899133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.902952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.903132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.906953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    55.907133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    55.907134: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    55.907292: irq_handler_exit: irq=6 ret=handled
     kworker/1:2-64      [001] d.h1.    55.909101: irq_handler_entry: irq=11 name=arch_timer
     kworker/1:2-64      [001] d.h1.    55.909309: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.910952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    55.911072: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    55.911073: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    55.911074: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    55.911076: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [001] dNh1.    55.911137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    55.911137: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    55.911260: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [001] d.h1.    55.911277: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    55.911283: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    55.911283: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    55.911284: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    55.911285: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [001] dNh1.    55.911451: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    55.914953: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    55.914974: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    55.966954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    55.966957: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNH2.    55.967104: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    55.967304: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNH2.    55.967305: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    55.967317: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    55.967351: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    55.967352: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    55.967352: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    55.967491: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    55.967493: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] d.h1.    55.967502: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    56.007717: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.007851: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    56.007852: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    56.008149: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNh1.    56.008150: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    56.008159: irq_handler_exit: irq=6 ret=handled
           gmain-570     [001] d.h1.    56.008193: irq_handler_entry: irq=11 name=arch_timer
           gmain-570     [001] dNh1.    56.008370: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    56.010156: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    56.010157: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    56.010159: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    56.010162: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [001] d.h..    56.010163: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    56.010276: irq_handler_exit: irq=2 ret=handled
     kworker/1:2-64      [001] d.h..    56.010289: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    56.010298: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    56.010298: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    56.010299: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    56.010300: irq_handler_exit: irq=14 ret=handled
     kworker/1:2-64      [001] d.h..    56.010503: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    56.010953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    56.010982: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    56.010983: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [001] d.h..    56.010983: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    56.010994: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    56.011121: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    56.011121: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    56.011130: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    56.011152: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    56.011155: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.014953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    56.014960: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.018952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    56.018955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    56.018959: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    56.019083: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    56.019084: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    56.019093: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    56.019093: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    56.019215: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.    56.020575: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    56.020577: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.022952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.023135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.026952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.027135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    56.027140: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    56.027268: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    56.027268: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    56.027276: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    56.030952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.031129: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.034952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.035135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.038952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.039133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.042952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.043133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.046952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.047133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.050952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.051133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.054952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.055134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.058952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.059133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.062952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.063134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    56.063326: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    56.063329: irq_handler_exit: irq=28 ret=handled
 systemd-journal-238     [001] d.h..    56.063331: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    56.063441: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    56.063455: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    56.063456: irq_handler_exit: irq=28 ret=handled
 systemd-journal-238     [001] d.h..    56.063457: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    56.063569: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.    56.066953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    56.066954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    56.066958: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2.    56.067108: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2.    56.067269: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNh1.    56.067271: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    56.067335: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    56.067337: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.070953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.071138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.072115: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    56.072117: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.074952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.075133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.078953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.079134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.082952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.083134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.086952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.087134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.090952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.091133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.094952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.095133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.098952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.099134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.102952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.103133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.106952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.107132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.108120: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    56.108448: irq_handler_exit: irq=6 ret=handled
     kworker/1:2-64      [001] d.h..    56.108485: irq_handler_entry: irq=11 name=arch_timer
     kworker/1:2-64      [001] d.h..    56.108701: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    56.110460: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    56.110462: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    56.110465: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    56.110467: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [001] d.h..    56.110953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    56.110976: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    56.110977: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    56.110978: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.H1.    56.111002: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [003] dnh1.    56.111002: irq_handler_entry: irq=1 name=IPI
          <idle>-0       [001] d.h1.    56.111003: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.H1.    56.111003: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [003] dNh1.    56.111003: irq_handler_exit: irq=1 ret=handled
          <idle>-0       [000] d.H1.    56.111004: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => do_interrupt_handler+0x58/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => idle_cpu+0x18/0x60
 => sched_balance_softirq+0x6c/0x88
 => handle_softirqs+0x114/0x348
 => __do_softirq+0x1c/0x28
 => ____do_softirq+0x18/0x30
 => call_on_irq_stack+0x30/0x70
 => do_softirq_own_stack+0x24/0x38
 => irq_exit_rcu+0x88/0xc8
 => el1_interrupt+0x38/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.H1.    56.111005: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [001] dNh1.    56.111146: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.114952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    56.114968: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] d.h1.    56.114968: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.    56.115089: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    56.115090: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    56.115098: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.    56.206530: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    56.206532: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    56.282585: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    56.282588: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    56.282588: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    56.282742: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.    56.282742: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    56.282742: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    56.282743: irq_handler_exit: irq=6 ret=handled
     kworker/2:1-70      [002] d.h1.    56.282763: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    56.282861: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    56.282862: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    56.282870: irq_handler_exit: irq=6 ret=handled
 systemd-journal-238     [003] d.h..    56.282952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    56.282961: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [003] d.h..    56.282961: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    56.282962: irq_handler_exit: irq=2 ret=handled
     kworker/2:1-70      [002] d.h1.    56.283068: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    56.284737: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    56.284738: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    56.284739: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    56.284741: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [002] d.h1.    56.284742: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    56.284874: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d.h1.    56.284893: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    56.284896: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    56.284897: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    56.284897: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    56.284898: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [002] dNh1.    56.285038: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    56.286952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    56.286953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    56.286966: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] d.h1.    56.286966: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [003] dNh..    56.286966: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    56.286967: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d.h1.    56.322584: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    56.322587: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.382952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    56.382954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    56.382955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    56.382957: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNH3.    56.383090: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH3.    56.383313: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.    56.383313: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] d.h1.    56.383353: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    56.383433: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    56.383434: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    56.383441: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNh1.    56.383564: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    56.385328: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    56.385329: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    56.385330: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    56.385331: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [001] d.h1.    56.385332: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    56.385457: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.    56.385471: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    56.385477: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    56.385477: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    56.385478: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    56.385478: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [001] dNh1.    56.385612: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.386952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    56.386952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    56.386961: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [003] d.h..    56.386962: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    56.386962: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.    56.386967: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    56.412779: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    56.412781: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.429121: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    56.429123: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    56.542953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    56.542955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNH2.    56.543127: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNH2.    56.543352: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] dNH2.    56.543353: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNH2.    56.543366: irq_handler_exit: irq=6 ret=handled
     kworker/3:2-95      [003] d.h1.    56.543402: irq_handler_entry: irq=11 name=arch_timer
     kworker/3:2-95      [003] d.h1.    56.543609: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    56.545374: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    56.545375: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    56.545376: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    56.545377: irq_handler_exit: irq=14 ret=handled
     kworker/3:2-95      [003] d.h1.    56.546851: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    56.546859: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    56.546859: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    56.546862: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    56.546863: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [000] d.h1.    56.547333: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    56.547334: irq_handler_exit: irq=2 ret=handled
     kworker/3:2-95      [003] d.h1.    56.547334: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dnh1.    56.547349: irq_handler_entry: irq=1 name=IPI
          <idle>-0       [001] dNh1.    56.547350: irq_handler_exit: irq=1 ret=handled
          <idle>-0       [001] d.h1.    56.549948: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    56.549950: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    56.550952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    56.550973: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] d.h1.    56.550974: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    56.551095: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    56.551096: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    56.551104: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    56.566507: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    56.566509: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] D.H3.    56.566586: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] D.H3.    56.566588: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.    56.567157: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.    56.567322: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.    56.567323: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.    56.567325: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] dNh1.    56.567327: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    56.567337: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    56.567338: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    56.567361: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    56.567363: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    56.567363: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    56.567366: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    56.567367: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    56.567367: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [001] dNh1.    56.567457: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    56.567458: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    56.567464: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    56.567617: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    56.567623: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    56.567623: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    56.567624: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    56.567789: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    56.567791: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    56.567792: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    56.567792: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    56.567793: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    56.567795: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    56.567795: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    56.567796: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    56.567951: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    56.568078: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    56.568079: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    56.568087: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    56.568103: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [002] d.h1.    56.568105: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    56.568105: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    56.568106: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    56.568106: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    56.568107: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    56.568112: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    56.568227: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    56.568227: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    56.568236: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d.h1.    56.570913: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    56.570952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    56.570952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    56.570963: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    56.570963: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    56.570964: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    56.570965: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    56.571044: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] dNh1.    56.571044: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    56.571051: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    56.571062: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    56.571064: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    56.571064: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    56.571065: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    56.571068: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    56.571184: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    56.571184: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    56.571192: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    56.571217: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    56.571224: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    56.571224: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    56.571225: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    56.571228: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    56.571342: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    56.571343: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    56.571352: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    56.571372: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    56.571376: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    56.571377: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    56.571377: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    56.571378: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    56.571380: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    56.571380: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    56.571381: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    56.571384: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    56.571498: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    56.571499: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    56.571507: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    56.571556: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    56.571557: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.    56.571571: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    56.571577: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    56.571578: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    56.571578: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    56.571582: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    56.571698: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    56.571699: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    56.571707: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.    56.571842: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    56.571977: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.    56.571978: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    56.571987: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] dnh1.    56.574292: irq_handler_entry: irq=1 name=IPI
          <idle>-0       [002] dNh1.    56.574294: irq_handler_exit: irq=1 ret=handled
 journal-offline-815     [002] d.h..    56.574954: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h1.    56.574955: irq_handler_entry: irq=11 name=arch_timer
 journal-offline-815     [002] d.h..    56.574978: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h1.    56.574985: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    56.574994: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    56.575135: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    56.575136: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    56.575144: irq_handler_exit: irq=6 ret=handled
 journal-offline-815     [002] d.h..    56.578954: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    56.578955: irq_handler_entry: irq=11 name=arch_timer
 journal-offline-815     [002] d.h..    56.578972: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    56.578973: irq_handler_exit: irq=11 ret=handled
 journal-offline-815     [002] d.h..    56.582953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    56.582956: irq_handler_entry: irq=11 name=arch_timer
 journal-offline-815     [002] d.h..    56.582964: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.582969: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    56.582982: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    56.583128: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    56.583129: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    56.583140: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    56.583141: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    56.583270: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.    56.586953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    56.586953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    56.586959: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    56.587146: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    56.590952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    56.590953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    56.590954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    56.591137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    56.591138: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    56.591262: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    56.591266: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    56.591392: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    56.591392: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    56.591400: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d.h1.    56.594952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    56.594953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    56.594954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    56.595130: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    56.598952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    56.598952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    56.598954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    56.599136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    56.599141: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    56.599271: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    56.599271: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    56.599279: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    56.600800: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    56.600803: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.602952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    56.602952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    56.602954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    56.603127: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    56.606952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    56.606952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    56.606953: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    56.607135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    56.607139: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    56.607268: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    56.607269: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    56.607277: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d.h1.    56.610952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    56.610953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    56.610954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    56.611128: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    56.611128: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    56.611252: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    56.611406: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    56.611410: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    56.611411: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    56.611413: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.H2.    56.611558: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] d.H2.    56.611567: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    56.614410: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    56.614412: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    56.614413: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    56.614413: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [001] d.h1.    56.614418: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    56.614547: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    56.614557: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    56.614559: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    56.614559: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    56.614560: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [001] d.h1.    56.614563: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    56.614684: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d.h1.    56.614952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    56.614952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    56.614953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    56.614955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    56.614959: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH3.    56.615090: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH3.    56.615252: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNh1.    56.615253: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    56.618952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    56.618952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    56.618954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    56.619138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    56.619318: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    56.619321: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    56.622952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    56.622953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    56.623126: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    56.623126: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.626952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.627135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    56.627135: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    56.627136: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.    56.630952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.631134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.634952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.635134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.638952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.639135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.642952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.643134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    56.643135: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    56.643295: irq_handler_exit: irq=6 ret=handled
     kworker/1:2-64      [001] d.h1.    56.645128: irq_handler_entry: irq=11 name=arch_timer
     kworker/1:2-64      [001] d.h1.    56.645341: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.646952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    56.647101: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    56.647102: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    56.647106: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    56.647108: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [001] dNh1.    56.647137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    56.647138: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    56.647260: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [001] d.h1.    56.647277: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    56.647283: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    56.647284: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    56.647285: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    56.647285: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [001] dNh1.    56.647452: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    56.650953: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    56.650973: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.656242: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    56.656244: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.798952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    56.798955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNH2.    56.799099: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    56.799301: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNH2.    56.799302: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    56.799314: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNH2.    56.799478: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    56.799488: irq_handler_exit: irq=6 ret=handled
     kworker/1:2-64      [001] d.h1.    56.799518: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    56.799526: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    56.799527: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    56.799528: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    56.799528: irq_handler_exit: irq=14 ret=handled
     kworker/1:2-64      [001] d.h1.    56.799677: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    56.802952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    56.802972: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    56.802973: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    56.802973: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [001] d.h1.    56.803003: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] dNh1.    56.803183: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    56.804979: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    56.804980: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    56.804981: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    56.804983: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [001] d.h1.    56.804984: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    56.805115: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.    56.805129: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    56.805134: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    56.805135: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    56.805136: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    56.805137: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [001] dNh1.    56.805271: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.806952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.807133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.810953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.811136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.814952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.815134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.818952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.819134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.822952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.823133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.826952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.827134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.830952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.831135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.834952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.835133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.838952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.839136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.842952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.843135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.846952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.847133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.850952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.851133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.852116: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    56.852118: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.854952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.855132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.858952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.859134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.862952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.863133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.866952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.867134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.870952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.871133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.874952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.875132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.878952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.879135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.882952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.883134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.886952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.887133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.890955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.891136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.894952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.895133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.898953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    56.899134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    56.899135: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    56.899292: irq_handler_exit: irq=6 ret=handled
     kworker/1:2-64      [001] d.h..    56.899331: irq_handler_entry: irq=11 name=arch_timer
     kworker/1:2-64      [001] d.h..    56.899544: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    56.901304: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    56.901304: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    56.901306: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    56.901308: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [001] d.h..    56.901310: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    56.901424: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [001] d.h1.    56.901440: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    56.901446: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    56.901447: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    56.901448: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    56.901448: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [001] dNh1.    56.901587: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    56.902952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    56.902972: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] d.h..    56.902972: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    56.902972: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.    56.927243: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    56.927245: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    56.966973: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    56.966975: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    56.990953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    56.990956: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNH2.    56.991098: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    56.991299: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNH2.    56.991300: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    56.991311: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    56.991346: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    56.991347: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    56.991347: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    56.991487: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    56.991489: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] d.h1.    56.991498: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    57.044209: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    57.044212: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    57.044212: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    57.044510: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNh1.    57.044511: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    57.044521: irq_handler_exit: irq=6 ret=handled
     kworker/1:2-64      [001] d.h1.    57.044545: irq_handler_entry: irq=11 name=arch_timer
     kworker/1:2-64      [001] d.h1.    57.044749: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    57.046527: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    57.046527: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    57.046529: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    57.046530: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [001] d.h..    57.046952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    57.046975: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    57.046975: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    57.046976: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [001] d.h1.    57.046994: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] dNh1.    57.047137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    57.048481: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    57.048482: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    57.048482: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    57.048484: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [001] d.h..    57.048485: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    57.048595: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.    57.050953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    57.051137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    57.054952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    57.055135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    57.058952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    57.059134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    57.062952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    57.063135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    57.066952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    57.067133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    57.070952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    57.071135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    57.074952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    57.075135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    57.078952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    57.079134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    57.082952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    57.083136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    57.086952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    57.087135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    57.087302: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    57.087304: irq_handler_exit: irq=28 ret=handled
 systemd-journal-238     [001] d.h..    57.087305: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    57.087414: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    57.087428: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    57.087429: irq_handler_exit: irq=28 ret=handled
 systemd-journal-238     [001] d.h..    57.087429: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    57.087587: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.    57.090953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    57.090953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    57.090957: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    57.091138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    57.094952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    57.095134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    57.096104: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    57.096107: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    57.098952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    57.099133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    57.102952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    57.103134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    57.106952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    57.107133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    57.110952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    57.111135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    57.111930: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    57.111933: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    57.114952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    57.115133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    57.118952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    57.119134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    57.122952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    57.123132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    57.126952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    57.127131: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    57.130952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    57.131133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    57.134952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    57.135133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    57.138952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    57.139134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    57.142952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    57.143133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    57.146952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    57.147134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    57.147135: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    57.147291: irq_handler_exit: irq=6 ret=handled
     kworker/1:2-64      [001] d.h1.    57.147327: irq_handler_entry: irq=11 name=arch_timer
     kworker/1:2-64      [001] d.h1.    57.147535: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    57.149303: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    57.149305: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    57.149307: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    57.149309: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [001] d.h..    57.149311: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    57.149425: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [001] d.h1.    57.149442: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] dNh1.    57.149587: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    57.150952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    57.150971: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    57.152259: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    57.152259: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    57.152260: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    57.152261: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [001] d.h1.    57.152263: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    57.152381: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    57.152382: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    57.152535: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNh1.    57.152536: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    57.152545: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    57.187763: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    57.187895: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    57.187896: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    57.188050: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNh1.    57.188050: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    57.188060: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    57.406954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    57.406959: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNH3.    57.407096: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH3.    57.407528: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNH3.    57.407529: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH3.    57.407541: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    57.470353: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    57.470356: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    57.525477: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    57.525478: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    57.525479: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    57.525639: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    57.525639: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    57.525640: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    57.525641: irq_handler_exit: irq=6 ret=handled
     kworker/0:2-115     [000] d.h1.    57.525670: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    57.525762: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    57.525763: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    57.525770: irq_handler_exit: irq=6 ret=handled
     kworker/0:2-115     [000] d.h1.    57.525962: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    57.526042: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    57.526044: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    57.526952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    57.526953: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    57.526963: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    57.526968: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    57.526969: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    57.526970: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    57.527637: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    57.527638: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    57.527641: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] dNh1.    57.527778: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [000] dNh1.    57.527780: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    57.527789: irq_handler_exit: irq=6 ret=handled
     kworker/0:2-115     [000] d.h1.    57.527803: irq_handler_entry: irq=11 name=arch_timer
     kworker/0:2-115     [000] d.h1.    57.528008: irq_handler_exit: irq=11 ret=handled
     kworker/0:2-115     [000] d.h1.    57.528009: irq_handler_entry: irq=14 name=fe00b880.mailbox
     kworker/0:2-115     [000] d.h1.    57.528010: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
     kworker/0:2-115     [000] d.h1.    57.528011: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => _raw_spin_unlock_irq+0x10/0x58
 => schedule+0x10c/0x148
 => schedule_timeout+0x98/0x1a0
 => wait_for_completion_timeout+0x80/0x160
 => mbox_send_message+0xf8/0x140
 => rpi_firmware_property_list+0x104/0x298
 => rpi_firmware_property+0x78/0xc8
 => raspberrypi_fw_get_rate+0x50/0x90
 => clk_recalc+0x40/0xb8
 => clk_change_rate+0xf4/0x4e0
 => clk_core_set_rate_nolock+0x198/0x3c8
 => clk_set_rate+0x40/0x190
 => _opp_config_clk_single+0x38/0xb8
 => _set_opp+0x140/0x490
 => dev_pm_opp_set_rate+0x198/0x298
 => set_target+0x38/0x50
 => __cpufreq_driver_target+0x2b4/0x6d8
 => od_dbs_update+0xc4/0x1c0
 => dbs_work_handler+0x48/0x90
 => process_one_work+0x158/0x3d0
 => worker_thread+0x2d8/0x3e8
 => kthread+0x11c/0x128
 => ret_from_fork+0x10/0x20
     kworker/0:2-115     [000] d.h1.    57.528012: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [000] d.h1.    57.530953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    57.530972: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    57.530974: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    57.531093: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    57.531094: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    57.531103: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    57.566653: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    57.566654: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] D.H2.    57.566733: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] D.H2.    57.566734: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.    57.566952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    57.566953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    57.566956: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    57.566956: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2.    57.567130: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2.    57.567142: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    57.567143: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    57.567261: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    57.567262: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    57.567270: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    57.567366: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.    57.567523: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.    57.567524: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.    57.567526: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] dNh1.    57.567527: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    57.567536: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    57.567557: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    57.567560: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    57.567560: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    57.567561: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    57.567728: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    57.567735: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    57.567735: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    57.567736: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    57.567900: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    57.567902: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    57.567903: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    57.567903: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    57.567904: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    57.567906: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    57.567906: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    57.567907: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    57.568061: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    57.568188: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    57.568189: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    57.568197: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    57.568214: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    57.568216: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [002] d.h1.    57.568217: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    57.568217: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    57.568217: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    57.568219: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    57.568221: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    57.568343: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d.h1.    57.570937: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    57.570939: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    57.570952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    57.570952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    57.570953: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    57.570963: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    57.570965: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    57.570966: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    57.570967: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    57.571086: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    57.571102: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    57.571104: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    57.571104: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    57.571105: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    57.571109: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    57.571230: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    57.571254: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    57.571261: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    57.571261: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    57.571264: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    57.571267: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    57.571387: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    57.571405: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    57.571409: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    57.571410: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    57.571410: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    57.571411: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    57.571413: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    57.571413: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    57.571414: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    57.571416: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    57.571536: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    57.571589: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    57.571591: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.    57.571607: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    57.571612: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    57.571613: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    57.571613: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    57.571614: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    57.571616: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    57.571616: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    57.571617: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    57.571620: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    57.571744: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [001] d.h..    57.574952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    57.574952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    57.574962: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    57.574967: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    57.586954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    57.586957: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNH2.    57.587164: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    57.587423: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNH2.    57.587424: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    57.587437: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    57.602954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    57.602958: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNH2.    57.603132: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    57.603386: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNH2.    57.603387: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    57.603400: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    57.603422: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    57.603424: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    57.603424: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    57.603425: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.H2.    57.603560: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] d.H2.    57.603569: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    57.606249: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    57.606251: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    57.606252: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    57.606252: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [001] d.h1.    57.606258: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    57.606380: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    57.606389: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    57.606391: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    57.606392: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    57.606392: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [001] d.h1.    57.606395: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    57.606515: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.    57.606952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    57.607133: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    57.607133: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    57.607134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    57.610952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    57.611136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    57.614952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    57.615137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    57.618952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    57.619134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    57.622952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    57.623134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    57.626952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    57.627134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    57.627135: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    57.627293: irq_handler_exit: irq=6 ret=handled
     kworker/1:2-64      [001] d.h1.    57.629105: irq_handler_entry: irq=11 name=arch_timer
     kworker/1:2-64      [001] d.h1.    57.629315: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    57.630952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    57.631077: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    57.631079: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    57.631082: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    57.631083: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [001] dNh1.    57.631136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    57.631137: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    57.631260: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [001] d.h1.    57.631277: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    57.631283: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    57.631284: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    57.631285: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    57.631285: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [001] dNh1.    57.631451: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    57.634953: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    57.634974: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    57.639035: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    57.639037: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    57.822954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    57.822957: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNH2.    57.823108: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    57.823310: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNH2.    57.823311: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    57.823322: irq_handler_exit: irq=6 ret=handled
     kworker/1:2-64      [001] d.h..    57.823356: irq_handler_entry: irq=11 name=arch_timer
     kworker/1:2-64      [001] d.h..    57.823560: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    57.825330: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    57.825330: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    57.825331: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    57.825332: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [001] d.h1.    57.826955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    57.826994: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    57.826995: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [001] dNh1.    57.826997: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.H1.    57.827008: irq_handler_entry: irq=2 name=IPI
     kworker/1:2-64      [001] d.h1.    57.827033: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNH1.    57.827195: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNH1.    57.827195: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH1.    57.827206: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] dNH1.    57.827207: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] dNH1.    57.827208: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] dNH1.    57.827210: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => do_interrupt_handler+0x58/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => sched_balance_domains+0xcc/0x3d8
 => _nohz_idle_balance.isra.0+0x280/0x3b8
 => sched_balance_softirq+0x6c/0x88
 => handle_softirqs+0x114/0x348
 => __do_softirq+0x1c/0x28
 => ____do_softirq+0x18/0x30
 => call_on_irq_stack+0x30/0x70
 => do_softirq_own_stack+0x24/0x38
 => irq_exit_rcu+0x88/0xc8
 => el1_interrupt+0x38/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] dNH1.    57.827211: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [003] dnh1.    57.827228: irq_handler_entry: irq=1 name=IPI
          <idle>-0       [003] dNh1.    57.827229: irq_handler_exit: irq=1 ret=handled
          <idle>-0       [000] d.h1.    57.827251: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    57.827254: irq_handler_exit: irq=11 ret=handled
     kworker/1:2-64      [001] d.h1.    57.827404: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dnh1.    57.828858: irq_handler_entry: irq=1 name=IPI
          <idle>-0       [000] dNh1.    57.828858: irq_handler_exit: irq=1 ret=handled
          <idle>-0       [001] d.h1.    57.830957: irq_handler_entry: irq=11 name=arch_timer
 journal-offline-816     [000] d.h..    57.830958: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    57.830958: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    57.830979: irq_handler_exit: irq=11 ret=handled
 journal-offline-816     [000] d.h..    57.830983: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [003] d.h..    57.830991: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    57.834953: irq_handler_entry: irq=11 name=arch_timer
 journal-offline-816     [000] d.h..    57.834956: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    57.834956: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    57.834964: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [003] d.h..    57.834976: irq_handler_exit: irq=11 ret=handled
 journal-offline-816     [000] d.h..    57.834988: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    57.838953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    57.838957: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    57.838957: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    57.838960: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    57.838968: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    57.838985: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    57.838987: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.    57.839124: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    57.842952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    57.842953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    57.842958: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    57.843142: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    57.843142: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.    57.843144: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] d.h1.    57.843144: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    57.843267: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    57.846952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    57.846952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    57.846955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.    57.847136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    57.850952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    57.850953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    57.850955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.    57.851133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    57.854952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    57.854952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    57.854954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.    57.855134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    57.858956: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    57.858956: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    57.858972: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    57.858984: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] d.h1.    57.858984: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    57.858985: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    57.858986: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    57.859114: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d.h1.    57.862952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    57.863137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    57.866955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    57.867137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    57.870953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    57.871134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    57.874952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    57.875133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    57.878952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    57.879135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    57.880118: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    57.880121: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    57.882952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    57.883134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    57.886952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    57.887134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    57.890952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    57.891133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    57.894953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    57.895133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    57.898952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    57.899134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    57.900631: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    57.900634: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    57.902952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    57.903134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    57.906952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    57.907135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    57.910952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    57.911133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    57.914953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    57.915136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    57.918952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    57.919134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    57.919142: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    57.919272: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    57.919273: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    57.919281: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    57.919304: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    57.919306: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    57.922952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    57.923126: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNH1.    57.923130: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNH1.    57.923338: irq_handler_exit: irq=6 ret=handled
     kworker/3:2-95      [003] d.h1.    57.923381: irq_handler_entry: irq=11 name=arch_timer
     kworker/3:2-95      [003] d.h1.    57.923590: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    57.925364: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    57.925365: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    57.925369: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    57.925371: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [003] d.h..    57.925372: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [003] dNh..    57.925522: irq_handler_exit: irq=2 ret=handled
     kworker/3:2-95      [003] d.h..    57.925538: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    57.925547: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    57.925547: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    57.925548: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    57.925549: irq_handler_exit: irq=14 ret=handled
     kworker/3:2-95      [003] d.h..    57.925750: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [003] d.h..    57.926953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    57.926978: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    57.926979: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [003] d.h..    57.926979: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.014954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    58.014958: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNH2.    58.015129: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNH2.    58.015353: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] dNH2.    58.015354: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNH2.    58.015366: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    58.015398: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    58.015399: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    58.015400: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    58.015544: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    58.015545: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] d.h1.    58.015553: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.    58.072111: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    58.072114: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.072115: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    58.072413: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] dNh1.    58.072414: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    58.072423: irq_handler_exit: irq=6 ret=handled
     kworker/3:2-95      [003] d.h1.    58.072450: irq_handler_entry: irq=11 name=arch_timer
     kworker/3:2-95      [003] d.h1.    58.072654: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    58.074433: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    58.074434: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    58.074436: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    58.074437: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [003] d.h..    58.074953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    58.074976: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [003] dNh..    58.074976: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    58.074977: irq_handler_exit: irq=2 ret=handled
     kworker/3:2-95      [003] d.h1.    58.074993: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    58.075002: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    58.075003: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    58.075004: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    58.075005: irq_handler_exit: irq=14 ret=handled
     kworker/3:2-95      [003] d.h1.    58.075199: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.078953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.079146: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.082952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.083137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.086953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.087136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.090952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.091135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.094952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.095134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.098952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.099135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.102952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.103132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.106953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.107133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.110952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.111134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    58.111324: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    58.111328: irq_handler_exit: irq=28 ret=handled
 systemd-journal-238     [003] d.h..    58.111329: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [003] dNh..    58.111439: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    58.111453: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    58.111454: irq_handler_exit: irq=28 ret=handled
 systemd-journal-238     [003] d.h..    58.111454: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [003] dNh..    58.111609: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d.h1.    58.114953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    58.114953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    58.114956: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.    58.115137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.118952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.119134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.122952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.123134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.124104: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    58.124106: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.126952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.127133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.130952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.131134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.134952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.135133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.138952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.139133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.142952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.143134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.146952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.147132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.150952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.151133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.154952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.155134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.158952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.159133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.162952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.163132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.166952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.167133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.170952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.171133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.174952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.175134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.    58.175135: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    58.175294: irq_handler_exit: irq=6 ret=handled
     kworker/3:2-95      [003] d.h1.    58.175331: irq_handler_entry: irq=11 name=arch_timer
     kworker/3:2-95      [003] d.h1.    58.175537: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    58.177304: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    58.177307: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    58.177309: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    58.177311: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [003] d.h..    58.177313: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [003] dNh..    58.177427: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [003] d.h1.    58.177444: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    58.177450: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    58.177451: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    58.177451: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    58.177452: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [003] dNh1.    58.177590: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [003] d.h..    58.178952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    58.178971: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.266997: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    58.266999: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    58.391955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    58.391957: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    58.391957: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    58.392118: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.    58.392118: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    58.392118: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    58.392119: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    58.392134: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    58.392136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.    58.392239: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    58.392240: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    58.392248: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.    58.393786: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    58.393788: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    58.430952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    58.430953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    58.430956: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.430956: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    58.430962: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    58.431082: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    58.431082: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    58.431091: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.    58.431092: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] d.h1.    58.431105: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    58.431107: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.    58.431211: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    58.431211: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    58.431220: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    58.566369: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    58.566371: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] D.H2.    58.566453: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] D.H2.    58.566455: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.    58.566775: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.    58.566936: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.    58.566937: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.    58.566939: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] dNh1.    58.566940: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    58.566952: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.    58.566953: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    58.567073: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    58.567074: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    58.567081: irq_handler_exit: irq=6 ret=handled
     kworker/0:2-115     [000] d.h1.    58.567187: irq_handler_entry: irq=40 name=mmc1
     kworker/0:2-115     [000] d.h1.    58.567191: irq_handler_exit: irq=40 ret=handled
     kworker/0:2-115     [000] d.h1.    58.567191: irq_handler_entry: irq=40 name=mmc0
     kworker/0:2-115     [000] d.h1.    58.567192: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-263     [000] d.h1.    58.567402: irq_handler_entry: irq=11 name=arch_timer
     kworker/0:3-263     [000] d.h1.    58.567617: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    58.567650: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    58.567657: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    58.567657: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    58.567658: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    58.567829: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    58.567832: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    58.567832: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    58.567833: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    58.567834: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    58.567835: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    58.567836: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    58.567836: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    58.567991: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    58.568116: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    58.568117: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    58.568125: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    58.568142: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [002] d.h1.    58.568145: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    58.568145: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    58.568145: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    58.568146: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    58.568147: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    58.568153: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    58.568268: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    58.568268: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    58.568276: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    58.569369: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    58.569370: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    58.569373: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] dNh1.    58.569508: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [000] d.h1.    58.569526: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    58.569676: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNh1.    58.569677: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] dNh1.    58.569678: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] dNh1.    58.569679: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => finish_task_switch.isra.0+0x7c/0x250
 => __schedule+0x398/0xb60
 => schedule_idle+0x30/0x58
 => do_idle+0x158/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] dNh1.    58.569680: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [000] d.h1.    58.570952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    58.570953: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    58.570966: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    58.570969: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    58.570970: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    58.570971: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d.h1.    58.570991: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] dNh1.    58.571119: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] dNh1.    58.571120: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    58.571129: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    58.571140: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    58.571143: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    58.571143: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    58.571144: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    58.571149: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    58.571263: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    58.571264: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    58.571272: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    58.571298: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    58.571305: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    58.571305: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    58.571306: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    58.571309: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    58.571424: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    58.571425: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    58.571433: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    58.571454: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    58.571459: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    58.571460: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    58.571460: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    58.571464: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    58.571578: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    58.571578: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    58.571586: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    58.571643: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    58.571645: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.    58.571660: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    58.571665: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    58.571665: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    58.571666: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    58.571666: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    58.571668: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    58.571669: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    58.571669: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    58.571673: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    58.571789: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    58.571790: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    58.571798: irq_handler_exit: irq=6 ret=handled
 systemd-journal-238     [003] d.h..    58.574952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    58.574962: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [003] d.h..    58.578952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    58.578958: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.586953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    58.586957: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    58.586965: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    58.587085: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    58.587086: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    58.587095: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.    58.587096: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] d.h1.    58.587109: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    58.587111: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.    58.587217: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    58.587218: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    58.587226: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    58.590952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    58.590956: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    58.594952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    58.594967: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] d.h1.    58.594967: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.    58.595085: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    58.595086: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    58.595094: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.    58.602953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    58.602953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    58.602955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.602957: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNH2.    58.603157: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    58.603168: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.    58.603171: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    58.603191: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    58.603193: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    58.603193: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    58.603194: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [001] d.h1.    58.603200: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    58.603287: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    58.603288: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    58.603295: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNh1.    58.603397: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    58.603398: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    58.603405: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    58.603416: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    58.603419: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    58.603419: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    58.603419: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [001] d.h1.    58.603423: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    58.603538: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    58.603538: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    58.603546: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    58.603556: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    58.603558: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    58.603559: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    58.603559: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [001] d.h1.    58.603562: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    58.603677: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    58.603678: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    58.603686: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.    58.618954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    58.618959: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    58.621246: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    58.621248: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    58.641489: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    58.641491: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.716970: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.717124: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.    58.717125: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    58.717282: irq_handler_exit: irq=6 ret=handled
     kworker/3:2-95      [003] d.h1.    58.717317: irq_handler_entry: irq=11 name=arch_timer
     kworker/3:2-95      [003] d.h1.    58.717524: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [003] d.h..    58.718952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    58.718974: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    58.718975: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [003] d.h..    58.718975: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    58.719291: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    58.719292: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    58.719295: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    58.719297: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [003] d.h..    58.719298: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [003] dNh..    58.719462: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [003] d.h1.    58.719479: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    58.719486: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    58.719486: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    58.719487: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    58.719488: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [003] dNh1.    58.719684: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.722953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.723145: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.726952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.727136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.730952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.731134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.734952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.735133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.738952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.739133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.742952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.743135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.746952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.747132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.750952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.751134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.754952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.755134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.758952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.759135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.762952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.763133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.766952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.767132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.768108: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    58.768110: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.770952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.771132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.774952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.775133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.778952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.779134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.782952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.783133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.786953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.787134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.790952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.791133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.794952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.795134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.798952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.799133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.802952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.803133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.806952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.807131: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.810952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.811133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.814952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.815134: irq_handler_exit: irq=11 ret=handled
     kworker/3:2-95      [003] d.h1.    58.815322: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    58.815329: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    58.815329: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    58.815331: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    58.815331: irq_handler_exit: irq=14 ret=handled
     kworker/3:2-95      [003] d.h1.    58.815489: irq_handler_exit: irq=11 ret=handled
     kworker/3:2-95      [003] d.h1.    58.818209: irq_handler_entry: irq=6 name=IPI
     kworker/3:2-95      [003] d.h1.    58.818407: irq_handler_exit: irq=6 ret=handled
 systemd-journal-238     [003] d.h1.    58.818443: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] dNh1.    58.818621: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [003] d.h..    58.818953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    58.818974: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [003] d.h..    58.818974: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    58.818975: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    58.820411: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    58.820412: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    58.820415: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    58.820417: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [003] d.h..    58.820418: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [003] dNh..    58.820521: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [003] d.h1.    58.820535: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    58.820542: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    58.820542: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    58.820543: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    58.820544: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [003] dNh1.    58.820681: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.822953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.823140: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.826952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.827135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.830952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.831135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.834952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.835133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.838952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.839134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.842952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.843134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.846952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.847134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.850952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.851134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.854952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.855135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.858952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.859133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.862952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.863133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.866952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.867133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.870952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.871133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.872115: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    58.872117: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.874952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.875132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.878952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.879133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.882952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.883133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.886952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.887133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.890952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.891134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.894952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.895133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.898952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.899134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dnh1.    58.902128: irq_handler_entry: irq=1 name=IPI
          <idle>-0       [000] dNh1.    58.902129: irq_handler_exit: irq=1 ret=handled
 journal-offline-817     [000] d.h..    58.902956: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h2.    58.902956: irq_handler_entry: irq=11 name=arch_timer
 journal-offline-817     [000] d.h..    58.902984: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [003] d.h2.    58.902989: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.906955: irq_handler_entry: irq=11 name=arch_timer
 journal-offline-817     [000] d.h..    58.906955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.907172: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    58.907176: irq_handler_entry: irq=2 name=IPI
 journal-offline-817     [000] dNh..    58.907176: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    58.907178: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dnh1.    58.907203: irq_handler_entry: irq=1 name=IPI
          <idle>-0       [002] dNh1.    58.907205: irq_handler_exit: irq=1 ret=handled
          <idle>-0       [000] d.h1.    58.910955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    58.910955: irq_handler_entry: irq=11 name=arch_timer
 journal-offline-817     [002] d.h..    58.910955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    58.910966: irq_handler_exit: irq=11 ret=handled
 journal-offline-817     [002] d.h..    58.910970: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.    58.911284: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    58.914952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    58.914954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    58.914954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    58.914955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    58.915141: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.    58.915141: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [003] d.h..    58.915151: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [003] dNh..    58.915262: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.    58.918861: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    58.918864: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    58.918865: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] d.h1.    58.918952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    58.918952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    58.918952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    58.918954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    58.918955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    58.919180: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNh1.    58.919181: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    58.919181: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    58.919182: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    58.919183: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    58.919184: irq_handler_exit: irq=2 ret=handled
     kworker/1:2-64      [001] d.h1.    58.919223: irq_handler_entry: irq=11 name=arch_timer
     kworker/1:2-64      [001] d.h1.    58.919438: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    58.919519: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    58.919521: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    58.921198: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    58.921199: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    58.921203: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    58.921206: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [001] d.h1.    58.921206: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    58.921335: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.    58.921352: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    58.921358: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    58.921358: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    58.921359: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    58.921360: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [001] dNh1.    58.921496: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    58.922952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    58.922952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    58.922953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    58.922954: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [003] d.h..    58.922965: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    58.922966: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    58.926952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    58.926953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    58.926953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    58.926954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    58.927129: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.    58.927129: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    58.930952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    58.930952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    58.930953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    58.930954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    58.931129: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.    58.931129: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    58.934953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    58.934953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    58.935127: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.    58.935127: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.938952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    58.939135: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    58.939135: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    58.939135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.942952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.943134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    58.943140: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    58.943267: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    58.943268: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    58.943276: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.    58.946952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.947127: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.950952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.951134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.954952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.955133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.958952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.959134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.962952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.963134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.966952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.967133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.970955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.971136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.974952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.975133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.976153: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    58.976156: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.978952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.979135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.982952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.983136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.986952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.987134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    58.987751: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    58.987756: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.990952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.991133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.994952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.995132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    58.998952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    58.999133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.002952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.003133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.006952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.007134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    59.009280: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] dNh1.    59.009421: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] dNh1.    59.009422: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    59.009432: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.    59.009433: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    59.009555: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    59.010205: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.010208: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.010209: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.010212: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    59.010222: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    59.010368: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d.h1.    59.010952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    59.010953: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    59.010970: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    59.010970: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    59.013373: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] dNh1.    59.013508: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] dNh1.    59.013508: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    59.013520: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.    59.013521: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    59.013533: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.013535: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.013535: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.013535: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    59.013539: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    59.013641: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    59.013641: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    59.013651: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] dNh1.    59.013747: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    59.013748: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    59.013755: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    59.013771: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.013773: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.013774: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.013774: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    59.013777: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    59.013894: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    59.013895: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    59.013903: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    59.013929: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.013953: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.013953: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.013954: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    59.013993: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.013996: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.013996: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.013996: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    59.013999: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    59.014026: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [002] dNh1.    59.014116: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    59.014116: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    59.014123: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] dNh1.    59.014260: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.    59.014260: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.    59.014261: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] dNh1.    59.014263: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    59.014272: irq_handler_exit: irq=6 ret=handled
  NetworkManager-517     [000] d.h1.    59.014407: irq_handler_entry: irq=40 name=mmc1
  NetworkManager-517     [000] d.h1.    59.014411: irq_handler_exit: irq=40 ret=handled
  NetworkManager-517     [000] d.h1.    59.014411: irq_handler_entry: irq=40 name=mmc0
  NetworkManager-517     [000] d.h1.    59.014412: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    59.014940: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.014946: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.014947: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.014947: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    59.014953: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    59.014954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    59.014967: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [003] d.h..    59.014968: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.014969: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d.h1.    59.014983: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2.    59.015104: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNH2.    59.015118: irq_handler_exit: irq=11 ret=handled
     ksoftirqd/0-17      [000] d.h1.    59.015257: irq_handler_entry: irq=40 name=mmc1
     ksoftirqd/0-17      [000] d.h1.    59.015260: irq_handler_exit: irq=40 ret=handled
     ksoftirqd/0-17      [000] d.h1.    59.015261: irq_handler_entry: irq=40 name=mmc0
     ksoftirqd/0-17      [000] d.h1.    59.015261: irq_handler_exit: irq=40 ret=unhandled
     ksoftirqd/0-17      [000] d.h1.    59.015263: irq_handler_entry: irq=40 name=mmc1
     ksoftirqd/0-17      [000] d.h1.    59.015264: irq_handler_exit: irq=40 ret=handled
     ksoftirqd/0-17      [000] d.h1.    59.015265: irq_handler_entry: irq=40 name=mmc0
     ksoftirqd/0-17      [000] d.h1.    59.015265: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    59.015416: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    59.015541: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    59.015542: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    59.015550: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    59.015578: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.015584: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.015584: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.015585: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    59.015589: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    59.015705: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    59.015705: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    59.015714: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    59.015761: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.015763: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.015763: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.015764: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    59.015786: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.015798: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.015798: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.015799: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    59.015811: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.015823: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.015823: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.015824: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    59.015825: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.015827: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.015827: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.015827: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    59.015831: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    59.015947: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    59.015947: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    59.015955: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    59.015964: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    59.016088: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    59.016089: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.    59.016092: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.    59.016093: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.    59.016093: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] dNh1.    59.016094: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.    59.016096: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.    59.016097: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.    59.016097: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    59.016101: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    59.016223: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    59.016224: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    59.016232: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    59.016246: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.016248: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.016248: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.016249: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    59.016252: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    59.016367: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    59.016368: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    59.016376: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    59.016395: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.016403: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.016404: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.016404: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    59.016422: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.016424: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.016424: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.016425: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    59.016428: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    59.016542: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    59.016543: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    59.016551: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    59.016558: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    59.016680: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    59.016790: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.    59.016951: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.    59.016952: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.    59.016952: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    59.016965: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.016967: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.016967: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.016968: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    59.017136: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.017140: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.017140: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.017141: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    59.017306: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.017308: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.017309: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.017309: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    59.017310: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.017312: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.017312: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.017313: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    59.017467: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    59.017590: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    59.017591: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    59.017599: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    59.017619: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.017624: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.017624: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.017625: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    59.017629: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.017631: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.017632: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.017632: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    59.017636: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    59.017751: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    59.017752: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    59.017760: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    59.017793: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.017795: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.017796: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.017796: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    59.017806: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.017813: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.017814: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.017814: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    59.017815: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.017817: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.017817: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.017818: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    59.017821: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    59.017937: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    59.017938: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    59.017947: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    59.017954: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    59.018075: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    59.018076: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.    59.018081: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.    59.018081: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.    59.018082: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    59.018086: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    59.018209: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    59.018209: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    59.018217: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    59.018230: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.018232: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.018233: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.018233: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    59.018237: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    59.018352: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    59.018353: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    59.018361: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    59.018380: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.018389: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.018390: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.018391: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    59.018407: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.018409: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.018410: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.018410: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    59.018413: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    59.018527: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    59.018528: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    59.018536: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    59.018543: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    59.018664: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    59.018665: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.    59.018819: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.    59.018820: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.    59.018821: irq_handler_exit: irq=40 ret=unhandled
  NetworkManager-517     [000] d.h1.    59.018833: irq_handler_entry: irq=40 name=mmc1
  NetworkManager-517     [000] d.h1.    59.018835: irq_handler_exit: irq=40 ret=handled
  NetworkManager-517     [000] d.h1.    59.018835: irq_handler_entry: irq=40 name=mmc0
  NetworkManager-517     [000] d.h1.    59.018836: irq_handler_exit: irq=40 ret=unhandled
 systemd-journal-238     [003] d.h..    59.018953: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    59.018970: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [003] d.h..    59.018971: irq_handler_entry: irq=6 name=IPI
  NetworkManager-517     [000] d.H2.    59.019355: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    59.019376: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] d.h1.    59.019377: irq_handler_exit: irq=2 ret=handled
  NetworkManager-517     [000] d.H2.    59.019377: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    59.019412: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.019417: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.019418: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.019418: irq_handler_exit: irq=40 ret=unhandled
 systemd-journal-238     [003] dNh..    59.019480: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    59.019628: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.019631: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.019632: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.019632: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    59.019633: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.019635: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.019635: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.019636: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    59.019791: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    59.019914: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    59.019915: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    59.019923: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    59.019948: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.019954: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.019955: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.019955: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    59.019959: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    59.020074: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    59.020075: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    59.020083: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    59.020125: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.020127: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.020128: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.020128: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    59.020138: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.020147: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.020148: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.020148: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    59.020152: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    59.020266: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    59.020267: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    59.020275: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    59.020283: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    59.020406: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    59.020407: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.    59.020410: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.    59.020411: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.    59.020411: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] dNh1.    59.020412: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.    59.020414: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.    59.020414: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.    59.020415: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    59.020419: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    59.020541: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    59.020542: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    59.020550: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    59.020563: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.020566: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.020566: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.020567: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    59.020570: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    59.020685: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    59.020685: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    59.020693: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    59.020714: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.020716: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.020716: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.020716: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    59.020816: irq_handler_entry: irq=15 name=DMA IRQ
          <idle>-0       [000] d.h1.    59.020818: irq_handler_exit: irq=15 ret=handled
          <idle>-0       [000] d.h1.    59.020850: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.020852: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.020852: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.020853: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    59.020856: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    59.020909: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [002] dNh1.    59.020972: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    59.020972: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    59.020977: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] dNh1.    59.021113: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.    59.021114: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.    59.021114: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] dNh1.    59.021115: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    59.021241: irq_handler_exit: irq=2 ret=handled
  NetworkManager-517     [000] d.h1.    59.021253: irq_handler_entry: irq=40 name=mmc1
  NetworkManager-517     [000] d.h1.    59.021255: irq_handler_exit: irq=40 ret=handled
  NetworkManager-517     [000] d.h1.    59.021256: irq_handler_entry: irq=40 name=mmc0
  NetworkManager-517     [000] d.h1.    59.021256: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    59.021759: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.021765: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.021765: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.021766: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    59.021945: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.021947: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.021948: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.021948: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    59.021949: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.021951: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.021952: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.021952: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    59.022108: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    59.022234: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    59.022235: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    59.022243: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    59.022267: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.022274: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.022274: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.022275: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    59.022278: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    59.022394: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    59.022395: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    59.022403: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    59.022445: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.022447: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.022447: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.022448: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    59.022552: irq_handler_entry: irq=15 name=DMA IRQ
          <idle>-0       [000] d.h1.    59.022553: irq_handler_exit: irq=15 ret=handled
          <idle>-0       [000] d.h1.    59.022554: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.022556: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.022556: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.022557: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    59.022567: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    59.022685: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    59.022686: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    59.022694: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    59.022703: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    59.022826: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    59.022827: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.    59.022830: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.    59.022831: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.    59.022831: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] dNh1.    59.022832: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.    59.022834: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.    59.022834: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.    59.022835: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    59.022838: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    59.022952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    59.022954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] dNh1.    59.022961: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    59.022962: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    59.022963: irq_handler_exit: irq=6 ret=handled
 systemd-journal-238     [003] d.h..    59.022971: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    59.022971: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.H1.    59.022977: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.H1.    59.022979: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.H1.    59.022980: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.H1.    59.022980: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    59.022988: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    59.023103: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    59.023104: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    59.023112: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    59.023130: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.023134: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.023134: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.023135: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    59.023138: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.023139: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.023140: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.023140: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    59.023143: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    59.023161: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [002] dNh1.    59.023258: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    59.023259: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    59.023266: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] dNh1.    59.023400: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.    59.023401: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.    59.023402: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] dNh1.    59.023403: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    59.023528: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    59.023529: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    59.023537: irq_handler_exit: irq=6 ret=handled
  NetworkManager-517     [000] d.h1.    59.023552: irq_handler_entry: irq=40 name=mmc1
  NetworkManager-517     [000] d.h1.    59.023554: irq_handler_exit: irq=40 ret=handled
  NetworkManager-517     [000] d.h1.    59.023554: irq_handler_entry: irq=40 name=mmc0
  NetworkManager-517     [000] d.h1.    59.023555: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    59.024055: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.024060: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.024061: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.024061: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    59.024244: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.024246: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.024247: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.024247: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    59.024248: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.024250: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.024250: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.024251: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    59.024406: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    59.024531: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    59.024532: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    59.024541: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    59.024564: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.024569: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.024569: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.024570: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    59.024571: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.024573: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.024573: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.024574: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    59.024577: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    59.024691: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    59.024692: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    59.024700: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    59.024728: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    59.024850: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    59.024851: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.    59.024855: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.    59.024855: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.    59.024856: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] dNh1.    59.024857: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.    59.024858: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.    59.024859: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.    59.024859: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    59.024863: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    59.024986: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    59.024987: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    59.024996: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    59.025243: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    59.025375: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    59.025376: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    59.025385: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    59.026956: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    59.026956: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    59.026956: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    59.026972: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [003] d.h..    59.026978: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    59.026979: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    59.026980: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    59.026982: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [003] d.h..    59.030953: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    59.030961: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.032668: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    59.032670: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [003] d.h..    59.034952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    59.034960: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [003] d.h..    59.038953: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    59.038960: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.039111: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    59.039143: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.039145: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    59.039145: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.039154: irq_handler_exit: irq=40 ret=handled
 systemd-journal-238     [003] d.h..    59.039154: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    59.039247: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    59.039248: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    59.039256: irq_handler_exit: irq=6 ret=handled
 systemd-journal-238     [003] dNh..    59.039341: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [003] d.h..    59.042952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    59.042970: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [003] d.h..    59.046952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    59.046959: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [003] d.h..    59.050952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    59.050959: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [003] d.h..    59.054952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    59.054961: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [003] d.h..    59.054961: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    59.054962: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.    59.054970: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    59.055099: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    59.055100: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    59.055108: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    59.055130: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.055133: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.055134: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.055134: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [001] d.h1.    59.055143: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    59.055259: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    59.055260: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    59.055268: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    59.055279: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.055281: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.055282: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.055282: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [001] d.h1.    59.055285: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    59.055400: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    59.055400: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    59.055408: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    59.055418: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.055420: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.055421: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.055421: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [001] d.h1.    59.055424: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    59.055538: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    59.055539: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    59.055547: irq_handler_exit: irq=6 ret=handled
 systemd-journal-238     [003] d.h..    59.058953: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    59.058963: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [003] d.h..    59.062952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    59.062961: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [003] d.h..    59.066952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    59.066958: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.070953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    59.070959: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.134953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    59.134955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNH2.    59.135111: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNH2.    59.135320: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] dNH2.    59.135321: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNH2.    59.135333: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    59.135361: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    59.135642: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.    59.135644: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] d.h1.    59.135653: irq_handler_exit: irq=6 ret=handled
 systemd-journal-238     [003] d.h1.    59.138952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    59.138953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    59.138957: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [003] dNh1.    59.138967: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.H2.    59.138968: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.H2.    59.138970: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.H1.    59.138983: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.H1.    59.138985: irq_handler_exit: irq=28 ret=handled
 systemd-journal-238     [003] d.h..    59.138986: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [003] dNh..    59.139091: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d.h1.    59.142952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.143138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.146952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.147137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.150952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.151135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.154953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.155137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.158952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.159134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.162952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.163134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.166952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.167134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.170952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.171134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.174952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.175134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.178952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.179134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.182953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.183134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.186952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.187134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.188106: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    59.188108: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.190952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.191132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.194952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.195134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.198952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.199133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.202952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.203134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.206952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.207134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.210952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.211134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    59.212404: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    59.212406: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [001] d.h1.    59.212462: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    59.212596: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    59.212597: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    59.212607: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.    59.212608: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    59.212728: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    59.213497: irq_handler_entry: irq=29 name=eth0
          <idle>-0       [000] d.h1.    59.213500: irq_handler_exit: irq=29 ret=handled
          <idle>-0       [000] d.h1.    59.214390: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    59.214391: irq_handler_exit: irq=28 ret=handled
 systemd-journal-238     [003] d.h..    59.214954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    59.214955: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    59.214971: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.214973: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.227737: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    59.227739: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    59.232498: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    59.232500: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.254954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    59.254957: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.H1.    59.254969: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNH1.    59.255372: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] dNH1.    59.255373: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNH1.    59.255384: irq_handler_exit: irq=6 ret=handled
     kworker/3:2-95      [003] d.h1.    59.255427: irq_handler_entry: irq=11 name=arch_timer
     kworker/3:2-95      [003] d.h1.    59.255635: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    59.257410: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    59.257412: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    59.257416: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    59.257417: irq_handler_exit: irq=14 ret=handled
     kworker/3:2-95      [003] d.h..    59.258933: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    59.258941: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    59.258942: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    59.258943: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    59.258943: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [000] d.h1.    59.259422: irq_handler_entry: irq=2 name=IPI
     kworker/3:2-95      [003] d.h..    59.259423: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    59.259424: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d.h1.    59.262953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.263147: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.266952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.267135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.270952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.271135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.274952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.275135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.278952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.279134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.282952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.283134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.286952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.287134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.290952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.291134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.294952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.295134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.298952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.299133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.302952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.303133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    59.306857: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    59.306860: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.306952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.307132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.308114: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    59.308116: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.310952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.311132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.314952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.315134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.318952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.319133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.322952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.323133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.326955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.327138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.330952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.331133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.334952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.335132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.338952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.339133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.342952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.343132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    59.345363: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    59.345366: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [001] d.h1.    59.345412: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    59.345567: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    59.345569: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    59.345579: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] dnh1.    59.346004: irq_handler_entry: irq=1 name=IPI
          <idle>-0       [000] dNh1.    59.346006: irq_handler_exit: irq=1 ret=handled
 journal-offline-818     [000] d.h1.    59.346597: irq_handler_entry: irq=29 name=eth0
 journal-offline-818     [000] d.h1.    59.346601: irq_handler_exit: irq=29 ret=handled
 journal-offline-818     [000] d.h..    59.346955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    59.346956: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h2.    59.346956: irq_handler_entry: irq=11 name=arch_timer
 journal-offline-818     [000] d.h..    59.346980: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.346982: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [003] d.h2.    59.346982: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.347000: irq_handler_entry: irq=2 name=IPI
 journal-offline-818     [000] d.h..    59.347085: irq_handler_entry: irq=28 name=eth0
 journal-offline-818     [000] d.h..    59.347087: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [001] dNh1.    59.347142: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    59.347143: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    59.347152: irq_handler_exit: irq=6 ret=handled
 journal-offline-818     [000] d.h..    59.350955: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    59.350955: irq_handler_entry: irq=11 name=arch_timer
 journal-offline-818     [000] d.h..    59.350976: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [003] d.h..    59.350976: irq_handler_exit: irq=11 ret=handled
 journal-offline-818     [000] d.h..    59.354953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    59.354956: irq_handler_entry: irq=11 name=arch_timer
 journal-offline-818     [000] d.h..    59.354965: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.354968: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.354979: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    59.355120: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    59.355121: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] d.h1.    59.355283: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    59.355283: irq_handler_exit: irq=6 ret=handled
     kworker/1:2-64      [001] d.h1.    59.355338: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.355412: irq_handler_exit: irq=2 ret=handled
     kworker/1:2-64      [001] d.h1.    59.355615: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    59.357325: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    59.357327: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    59.357331: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    59.357334: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [001] d.h1.    59.357335: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    59.357468: irq_handler_exit: irq=2 ret=handled
     kworker/1:2-64      [001] d.h1.    59.357484: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    59.357492: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    59.357493: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    59.357494: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    59.357495: irq_handler_exit: irq=14 ret=handled
     kworker/1:2-64      [001] d.h1.    59.357694: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    59.358952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    59.358952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [003] d.h..    59.358952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    59.358959: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [003] d.h..    59.358968: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.358970: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    59.362952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    59.362952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    59.362952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    59.362955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.362958: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.H1.    59.362965: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] d.h1.    59.362967: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNH1.    59.363147: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    59.366952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    59.366953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    59.366954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.366955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    59.366961: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.366976: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.366977: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    59.367197: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.    59.367201: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    59.367327: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    59.370952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    59.370952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    59.370952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    59.370954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.371131: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.    59.371132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.374952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    59.374952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    59.374952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    59.374954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    59.374954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.    59.375137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    59.378952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    59.378952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    59.378952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    59.378953: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.378954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.    59.379242: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    59.382952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    59.382952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    59.382952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    59.382954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.383125: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.    59.383126: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    59.386952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    59.386953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.387125: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    59.387125: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    59.390952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    59.390952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    59.390954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    59.391134: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    59.391135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    59.391136: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d.h1.    59.394952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.395135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.398952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.399134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.402952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.403134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.406952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.407134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.410953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.411137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.412129: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    59.412132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.414952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.415132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.418952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.419133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.422952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.423134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.426952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.427133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.430952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.431134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.434952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.435134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.438952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.439134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.442952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.443133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.446952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.447133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.450952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.451132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.454952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    59.455134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.455141: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNH1.    59.455144: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNH1.    59.455343: irq_handler_exit: irq=6 ret=handled
     kworker/3:2-95      [003] d.h..    59.455384: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    59.455439: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    59.455440: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    59.455445: irq_handler_exit: irq=6 ret=handled
     kworker/3:2-95      [003] d.h..    59.455653: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    59.457368: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    59.457370: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    59.457373: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    59.457376: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [003] d.h1.    59.457377: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    59.457507: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d.h1.    59.457525: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    59.457531: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    59.457531: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    59.457532: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    59.457533: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [003] dNh1.    59.457668: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.458952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    59.458954: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    59.458966: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.458968: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.550954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    59.550958: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.562975: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    59.562978: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.562978: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    59.563285: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNh1.    59.563286: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    59.563295: irq_handler_exit: irq=6 ret=handled
     kworker/1:2-64      [001] d.h1.    59.563318: irq_handler_entry: irq=11 name=arch_timer
     kworker/1:2-64      [001] d.h1.    59.563517: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    59.565300: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    59.565300: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    59.565303: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    59.565304: irq_handler_exit: irq=14 ret=handled
     kworker/1:2-64      [001] d.h1.    59.566339: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    59.566347: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    59.566348: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    59.566349: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    59.566349: irq_handler_exit: irq=14 ret=handled
     kworker/1:2-64      [001] d.h1.    59.566558: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    59.566718: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    59.566720: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] D.H2.    59.566802: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] D.H2.    59.566803: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [001] d.h1.    59.566952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    59.567146: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    59.567147: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    59.567147: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    59.567400: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.    59.567576: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.    59.567577: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.    59.567579: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] dNh1.    59.567581: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    59.567590: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    59.567617: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    59.567619: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    59.567620: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.567623: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.567623: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.567624: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    59.567795: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.567802: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.567802: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.567803: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    59.567969: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.567972: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.567973: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.567973: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    59.567974: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.567976: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.567976: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.567977: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    59.568133: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    59.568259: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    59.568260: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    59.568269: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    59.568284: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [002] d.h1.    59.568286: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    59.568286: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.568287: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.568287: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    59.568288: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    59.568295: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    59.568409: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    59.568410: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    59.568418: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    59.570952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    59.570953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    59.570959: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    59.570965: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    59.571122: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] dNh1.    59.571252: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] dNh1.    59.571253: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    59.571261: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    59.571273: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.571275: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.571275: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.571276: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    59.571280: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    59.571395: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    59.571396: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    59.571404: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    59.571428: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.571436: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.571437: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.571437: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    59.571441: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    59.571555: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    59.571556: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    59.571564: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    59.571583: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.571588: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.571588: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.571589: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    59.571589: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.571591: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.571591: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.571592: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    59.571595: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    59.571709: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    59.571710: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    59.571718: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    59.571772: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    59.571773: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.    59.571790: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.571795: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.571795: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.571796: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    59.571796: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.571798: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.571799: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.571799: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    59.571803: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    59.571920: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    59.571921: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    59.571929: irq_handler_exit: irq=6 ret=handled
 systemd-journal-238     [001] d.h..    59.574952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    59.574963: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    59.578151: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    59.578153: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.586954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    59.586957: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNH2.    59.587167: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    59.587426: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNH2.    59.587427: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    59.587440: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    59.602953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    59.602958: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNH2.    59.603133: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    59.603388: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNH2.    59.603389: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    59.603402: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    59.603423: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.603426: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.603426: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.603427: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.H2.    59.603561: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] d.H2.    59.603569: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    59.606313: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.606316: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.606316: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.606317: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [001] d.h1.    59.606330: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    59.606452: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    59.606453: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    59.606607: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNh1.    59.606608: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    59.606617: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    59.606629: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    59.606631: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    59.606631: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    59.606632: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.H2.    59.606758: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] d.H2.    59.606767: irq_handler_exit: irq=6 ret=handled
 systemd-journal-238     [001] d.h..    59.606953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    59.606963: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] d.h..    59.606963: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    59.606964: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.    59.614954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    59.614957: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNH2.    59.615246: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    59.615447: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNH2.    59.615448: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    59.615460: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    59.618953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    59.618958: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    59.641418: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    59.641420: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.668143: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    59.668145: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.668146: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    59.668444: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNh1.    59.668445: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    59.668455: irq_handler_exit: irq=6 ret=handled
     kworker/1:2-64      [001] d.h1.    59.668489: irq_handler_entry: irq=11 name=arch_timer
     kworker/1:2-64      [001] d.h1.    59.668698: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    59.670463: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    59.670465: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    59.670468: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    59.670469: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [001] d.h..    59.670952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    59.670975: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    59.670976: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [001] dNh..    59.670976: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h1.    59.670997: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    59.671004: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    59.671004: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    59.671005: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    59.671006: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [001] dNh1.    59.671193: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.674953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    59.675142: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.678952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    59.679134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.682952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    59.683135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.686952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    59.687135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.690952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    59.691134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.694952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    59.695133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.698953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    59.699135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.702952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    59.703135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.706952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    59.707133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.710952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    59.711133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.714952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    59.715132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    59.716969: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    59.716970: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.718952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    59.719133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.720118: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    59.720120: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.722952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    59.723133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.726952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    59.727134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.730952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    59.731134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.734952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    59.735133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.738952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    59.739132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.742952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    59.743133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.746952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    59.747132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.750952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    59.751133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.754952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    59.755132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.758952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    59.759133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.762952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    59.763132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.766952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    59.767132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.770952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    59.771133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    59.771134: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    59.771292: irq_handler_exit: irq=6 ret=handled
     kworker/1:2-64      [001] d.h..    59.771328: irq_handler_entry: irq=11 name=arch_timer
     kworker/1:2-64      [001] d.h..    59.771537: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    59.773301: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    59.773302: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    59.773303: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    59.773305: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [001] d.h..    59.773306: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    59.773421: irq_handler_exit: irq=2 ret=handled
     kworker/1:2-64      [001] d.h1.    59.773436: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    59.773444: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    59.773444: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    59.773445: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    59.773446: irq_handler_exit: irq=14 ret=handled
     kworker/1:2-64      [001] d.h1.    59.773642: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    59.774952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    59.774975: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.806954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    59.806957: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNH2.    59.807107: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    59.807309: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNH2.    59.807310: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    59.807322: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    59.966954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    59.966957: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNH3.    59.967090: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH3.    59.967518: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNH3.    59.967519: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH3.    59.967532: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNH3.    59.967532: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNH3.    59.967536: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h1.    59.967577: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h1.    59.967744: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    59.969541: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    59.969542: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    59.969542: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    59.969543: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [001] d.h..    59.970953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    59.970975: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    59.970976: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [001] dNh..    59.970976: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] dnh1.    59.970996: irq_handler_entry: irq=1 name=IPI
          <idle>-0       [002] dNh1.    59.970997: irq_handler_exit: irq=1 ret=handled
          <idle>-0       [001] d.h1.    59.970999: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    59.971002: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    59.971004: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    59.971005: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    59.971006: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [001] dNh1.    59.971145: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    59.972720: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    59.972724: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    59.974952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    59.974967: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] d.h1.    59.974969: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] dNh1.    59.975090: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    59.975091: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    59.975099: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    60.007584: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.007714: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    60.007715: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] d.h1.    60.007725: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    60.007726: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] dNh1.    60.007845: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    60.007845: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    60.007853: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    60.010953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    60.010961: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.014952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    60.014966: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] d.h1.    60.014967: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] dNh1.    60.015084: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    60.015084: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    60.015092: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    60.018952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    60.018955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.019099: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    60.019101: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.022952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    60.022965: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] d.h1.    60.022965: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] dNh1.    60.023082: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    60.023083: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    60.023091: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d.h1.    60.024473: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    60.024476: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.062952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    60.062954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    60.062955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    60.062958: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNH2.    60.063120: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    60.063133: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    60.063164: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    60.063166: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    60.063166: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    60.063174: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [001] d.h1.    60.063175: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNH2.    60.063250: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    60.063360: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    60.063361: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    60.063369: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] dNH2.    60.063513: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNH2.    60.063514: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNH2.    60.063523: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    60.158955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    60.158960: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNH2.    60.159129: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    60.159359: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNH2.    60.159360: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    60.159373: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    60.159395: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    60.159665: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.    60.159667: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] d.h1.    60.159676: irq_handler_exit: irq=6 ret=handled
 systemd-journal-238     [001] d.h..    60.162953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    60.162954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    60.162959: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] dNh..    60.162968: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2.    60.163107: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNH2.    60.163109: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNH2.    60.163110: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2.    60.163119: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] dNH2.    60.163120: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNH2.    60.163121: irq_handler_exit: irq=28 ret=handled
 systemd-journal-238     [001] d.h..    60.163122: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    60.163226: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    60.163228: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    60.163231: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.166952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    60.167139: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    60.167140: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    60.167140: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.    60.170952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.171136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.174952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.175134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.178952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.179134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.182952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.183134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.186952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.187134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.190952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.191135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.194953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.195134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.198952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.199134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.202952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.203134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.206952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.207133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.210952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.211134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.212118: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    60.212120: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.214952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.215133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.218952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.219134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.222952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.223134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.226952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.227133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.230952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.231135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.234952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.235133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.238952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.239135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.242952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.243133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.246952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.247133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.250952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.251134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.254952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.255134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.258952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.259133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    60.259134: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    60.259293: irq_handler_exit: irq=6 ret=handled
     kworker/1:2-64      [001] d.h..    60.259332: irq_handler_entry: irq=11 name=arch_timer
     kworker/1:2-64      [001] d.h..    60.259547: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    60.261307: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    60.261309: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    60.261312: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    60.261315: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [001] d.h..    60.261316: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    60.261431: irq_handler_exit: irq=2 ret=handled
     kworker/1:2-64      [001] d.h1.    60.261447: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    60.261455: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    60.261456: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    60.261457: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    60.261457: irq_handler_exit: irq=14 ret=handled
     kworker/1:2-64      [001] d.h1.    60.261654: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    60.262952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    60.262976: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.295569: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    60.295571: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    60.323176: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    60.323178: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    60.466971: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    60.466973: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.478953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    60.478956: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNH3.    60.479094: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH3.    60.479527: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNH3.    60.479528: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH3.    60.479541: irq_handler_exit: irq=6 ret=handled
 systemd-journal-238     [001] d.h3.    60.482978: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    60.483003: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    60.483004: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [001] dNh3.    60.483007: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] dnh1.    60.483026: irq_handler_entry: irq=1 name=IPI
          <idle>-0       [002] dNh1.    60.483027: irq_handler_exit: irq=1 ret=handled
          <idle>-0       [003] dnh1.    60.483237: irq_handler_entry: irq=1 name=IPI
          <idle>-0       [003] dNh1.    60.483238: irq_handler_exit: irq=1 ret=handled
          <idle>-0       [002] d.h1.    60.483239: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    60.483242: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    60.483546: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    60.483548: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] dnh1.    60.483709: irq_handler_entry: irq=1 name=IPI
          <idle>-0       [002] dNh1.    60.483709: irq_handler_exit: irq=1 ret=handled
 journal-offline-819     [002] d.h..    60.486957: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    60.486957: irq_handler_entry: irq=11 name=arch_timer
 journal-offline-819     [002] d.h..    60.486987: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    60.486990: irq_handler_exit: irq=11 ret=handled
 journal-offline-819     [002] d.h..    60.490954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    60.490956: irq_handler_entry: irq=11 name=arch_timer
 journal-offline-819     [002] d.h..    60.490967: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.490969: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    60.490981: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    60.491131: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    60.491132: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    60.491143: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    60.491144: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    60.491271: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.    60.494955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    60.494955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    60.494965: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    60.495165: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    60.498952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    60.498952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    60.498954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    60.499138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    60.499144: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    60.499270: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    60.499271: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    60.499279: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d.h1.    60.502952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    60.502952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    60.502954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    60.503130: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    60.506952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    60.506952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    60.506954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    60.507138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    60.507142: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    60.507266: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    60.507266: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    60.507274: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d.h1.    60.510952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    60.510952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    60.510954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    60.511129: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    60.514952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    60.514952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    60.514953: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    60.515135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    60.515139: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    60.515262: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    60.515263: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    60.515271: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d.h1.    60.518952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    60.518952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    60.518954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    60.519129: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    60.522952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    60.522952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    60.522954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    60.523133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    60.523137: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    60.523261: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    60.523261: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    60.523269: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d.h1.    60.526952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    60.526952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    60.526953: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    60.527127: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    60.530952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    60.530952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    60.530954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    60.531136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    60.531139: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    60.531264: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    60.531264: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    60.531272: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    60.532777: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    60.532779: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    60.534952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    60.534952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    60.534954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    60.535127: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    60.535305: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    60.535307: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    60.538952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    60.538952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.539125: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    60.539125: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.542952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    60.543135: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    60.543135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    60.543136: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.    60.546952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.547133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.550952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.551134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.554952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.555132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.558952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.559134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.562953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.563136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    60.564366: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    60.564369: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [001] d.h1.    60.564421: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    60.564556: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    60.565408: irq_handler_entry: irq=29 name=eth0
          <idle>-0       [000] d.h1.    60.565411: irq_handler_exit: irq=29 ret=handled
          <idle>-0       [000] d.h1.    60.566007: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    60.566008: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [001] d.h1.    60.566954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    60.566981: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    60.566982: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.H1.    60.567026: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.H1.    60.567027: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [001] dNh1.    60.567153: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    60.567353: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.    60.567530: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.    60.567531: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.    60.567533: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] dNh1.    60.567534: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    60.567544: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    60.567572: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    60.567575: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    60.567575: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    60.567578: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    60.567579: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    60.567579: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    60.567750: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    60.567756: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    60.567756: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    60.567757: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    60.567924: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    60.567926: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    60.567927: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    60.567927: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    60.567928: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    60.567930: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    60.567930: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    60.567931: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    60.568086: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    60.568211: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    60.568214: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    60.568222: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    60.568242: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    60.568244: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    60.568244: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    60.568245: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    60.568249: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    60.568366: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    60.568366: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    60.568374: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    60.570952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    60.570953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    60.570961: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    60.570967: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    60.571380: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] dNh1.    60.571511: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] dNh1.    60.571512: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    60.571520: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    60.571533: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    60.571536: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    60.571536: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    60.571537: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    60.571540: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    60.571656: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    60.571657: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    60.571665: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    60.571691: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    60.571698: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    60.571698: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    60.571699: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    60.571702: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    60.571817: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    60.571818: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    60.571826: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    60.571847: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    60.571851: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    60.571851: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    60.571852: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    60.571853: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    60.571854: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    60.571855: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    60.571855: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    60.571858: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    60.571973: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    60.571974: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    60.571981: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    60.572035: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    60.572036: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.    60.572052: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    60.572057: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    60.572057: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    60.572058: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    60.572059: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    60.572061: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    60.572061: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    60.572062: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    60.572065: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    60.572183: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    60.572184: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    60.572192: irq_handler_exit: irq=6 ret=handled
 systemd-journal-238     [001] d.h..    60.574954: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    60.574963: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    60.578034: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    60.578036: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    60.578952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    60.578959: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.579439: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    60.579768: irq_handler_exit: irq=6 ret=handled
     kworker/1:2-64      [001] d.h..    60.579809: irq_handler_entry: irq=11 name=arch_timer
     kworker/1:2-64      [001] d.h..    60.580027: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    60.581783: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    60.581785: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    60.581788: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    60.581789: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [001] d.h..    60.582952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    60.582978: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    60.582979: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [001] dNh..    60.582979: irq_handler_exit: irq=11 ret=handled
     kworker/1:2-64      [001] d.h1.    60.583002: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    60.583011: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    60.583011: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    60.583012: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    60.583013: irq_handler_exit: irq=14 ret=handled
     kworker/1:2-64      [001] d.h1.    60.583208: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.586953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.587145: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.590952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.591136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.594952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.595135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.598952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.599135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.602952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.603134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    60.603337: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    60.603341: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    60.603342: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    60.603343: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] dNH2.    60.603494: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2.    60.603503: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    60.603524: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    60.603526: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    60.603526: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    60.603527: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    60.603680: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    60.603683: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    60.603683: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    60.603683: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    60.606952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    60.606953: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    60.606962: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    60.606966: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    60.610952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    60.610955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    60.618953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    60.618955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    60.638953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    60.638955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2.    60.639123: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2.    60.639135: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    60.639136: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    60.639161: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    60.639164: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    60.639257: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    60.639258: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    60.639266: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    60.640829: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    60.640831: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    60.681883: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    60.681885: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [001] d.h1.    60.681931: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    60.682054: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    60.682055: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    60.682355: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNh1.    60.682356: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    60.682366: irq_handler_exit: irq=6 ret=handled
     kworker/1:2-64      [001] d.h1.    60.682400: irq_handler_entry: irq=11 name=arch_timer
     kworker/1:2-64      [001] d.h1.    60.682605: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    60.682952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    60.682974: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] d.h..    60.682974: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    60.682975: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dnh1.    60.683000: irq_handler_entry: irq=1 name=IPI
          <idle>-0       [002] dNh1.    60.683000: irq_handler_exit: irq=1 ret=handled
 systemd-journal-238     [001] d.h..    60.683308: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] d.h..    60.683422: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    60.683866: irq_handler_entry: irq=29 name=eth0
          <idle>-0       [000] d.h1.    60.683869: irq_handler_exit: irq=29 ret=handled
          <idle>-0       [000] d.h1.    60.684380: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    60.684384: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    60.684388: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    60.684392: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [001] d.h..    60.684393: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    60.684430: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    60.684431: irq_handler_exit: irq=28 ret=handled
 systemd-journal-238     [001] dNh..    60.684504: irq_handler_exit: irq=2 ret=handled
     kworker/1:2-64      [001] d.h1.    60.684524: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    60.684533: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    60.684533: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    60.684535: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    60.684536: irq_handler_exit: irq=14 ret=handled
     kworker/1:2-64      [001] d.h1.    60.684741: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    60.686953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    60.686954: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    60.686967: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    60.686978: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    60.690952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    60.690961: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.691601: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    60.691603: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    60.692697: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    60.692699: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    60.722952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    60.722953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    60.722956: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.722956: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    60.770599: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    60.770600: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [002] d.h1.    60.770619: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    60.770748: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    60.770750: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    60.770759: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    60.770760: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    60.770879: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    60.770880: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    60.770883: irq_handler_exit: irq=6 ret=handled
 systemd-journal-238     [001] d.h..    60.770952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    60.770960: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    60.770961: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    60.770962: irq_handler_exit: irq=2 ret=handled
            sshd-745     [002] dNh..    60.771001: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    60.771017: irq_handler_entry: irq=2 name=IPI
            sshd-745     [002] dNh..    60.771018: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    60.771018: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    60.771566: irq_handler_entry: irq=29 name=eth0
          <idle>-0       [000] d.h1.    60.771568: irq_handler_exit: irq=29 ret=handled
          <idle>-0       [000] d.h1.    60.772121: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    60.772122: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [002] d.h1.    60.774954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    60.774975: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] d.h1.    60.774976: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    60.775102: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    60.775103: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    60.775111: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d.h1.    60.782257: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    60.782260: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    60.782261: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    60.782417: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] dNh1.    60.782418: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] d.h1.    60.782418: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    60.782419: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNh1.    60.782537: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    60.782538: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    60.782546: irq_handler_exit: irq=6 ret=handled
 systemd-journal-238     [001] d.h..    60.782953: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    60.782961: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    60.782961: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    60.782962: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.    60.810952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    60.810953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    60.810953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    60.810956: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.810956: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    60.810956: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    60.830953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    60.830953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    60.830953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    60.830955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    60.830955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.830955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNH2.    60.831101: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNH2.    60.831252: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    60.831440: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] dNH2.    60.831441: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNH2.    60.831441: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    60.831452: irq_handler_exit: irq=6 ret=handled
     kworker/2:1-70      [002] d.h..    60.831464: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    60.831473: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    60.831475: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    60.831478: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    60.831479: irq_handler_exit: irq=14 ret=handled
     kworker/2:1-70      [002] d.h..    60.831627: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    60.831777: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    60.831779: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    60.834952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    60.834952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    60.834960: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    60.834961: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    60.834961: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d.h1.    60.834967: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.904240: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    60.904242: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.904243: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    60.904540: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNh1.    60.904541: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    60.904551: irq_handler_exit: irq=6 ret=handled
     kworker/1:2-64      [001] d.h1.    60.904579: irq_handler_entry: irq=11 name=arch_timer
     kworker/1:2-64      [001] d.h1.    60.904781: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    60.906557: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    60.906557: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    60.906558: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    60.906559: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [001] d.h..    60.906952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    60.906974: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    60.906974: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    60.906974: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [001] d.h1.    60.906991: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    60.906997: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    60.906998: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    60.906999: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    60.907000: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [001] dNh1.    60.907137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.910953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.911138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.914953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.915136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.918952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.919135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.922952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.923133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.926952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.927134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.930952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.931135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.934952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.935133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.938952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.939134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.942952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.943136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.946952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.947134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.950953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.951134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.954952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.955134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.956105: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    60.956107: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.958952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.959132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.962953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.963134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.966952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.967133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.970952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.971133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.974952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.975132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.978952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    60.978953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    60.978955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    60.979132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.982952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.983134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.986952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.987133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    60.990952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    60.991134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    60.991141: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    60.991270: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    60.991271: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    60.991279: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d.h1.    60.991299: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    60.991301: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    60.991742: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    60.991744: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.    60.992186: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.    60.992351: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.    60.992352: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.    60.992355: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] dNh1.    60.992356: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    60.992366: irq_handler_exit: irq=6 ret=handled
     kworker/0:3-263     [000] d.h1.    60.992389: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-263     [000] d.h1.    60.992392: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-263     [000] d.h1.    60.992392: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-263     [000] d.h1.    60.992393: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    60.992599: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    60.992605: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    60.992605: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    60.992606: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    60.992774: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    60.992776: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    60.992777: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    60.992777: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    60.992778: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    60.992780: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    60.992780: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    60.992781: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    60.992938: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    60.993062: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    60.993063: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    60.993071: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    60.993091: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    60.993093: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    60.993094: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    60.993094: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    60.993098: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    60.993213: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    60.993214: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    60.993222: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    60.994952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    60.994953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    60.994960: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    60.994965: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    60.994973: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    60.995090: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    60.995090: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    60.995098: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.    60.995114: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    60.995116: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    60.996227: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] dNh1.    60.996357: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] dNh1.    60.996358: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    60.996366: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    60.996378: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    60.996380: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    60.996381: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    60.996382: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    60.996385: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    60.996499: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    60.996500: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    60.996508: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    60.996534: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    60.996541: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    60.996542: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    60.996542: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    60.996545: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    60.996660: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    60.996661: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    60.996669: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    60.996724: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    60.996729: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    60.996730: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    60.996731: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    60.996734: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    60.996850: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    60.998952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    60.998952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    60.998953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    60.998956: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    60.998961: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    60.998965: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    60.999952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    60.999953: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.002952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    61.002952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    61.002954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.002955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    61.002960: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    61.003078: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    61.003079: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    61.003088: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    61.003089: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    61.003209: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    61.003210: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    61.003218: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d.h1.    61.006952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    61.006952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    61.006954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.006955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.H1.    61.006957: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNH1.    61.007156: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    61.007158: irq_handler_entry: irq=2 name=IPI
     kworker/2:1-70      [002] d.h1.    61.007193: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    61.007276: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    61.007277: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    61.007283: irq_handler_exit: irq=6 ret=handled
     kworker/2:1-70      [002] d.h1.    61.007477: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.009167: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    61.009168: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    61.009172: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    61.009174: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [002] d.h1.    61.009175: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    61.009300: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d.h1.    61.009316: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    61.009322: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    61.009323: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    61.009323: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    61.009324: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [002] dNh1.    61.009458: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.010952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    61.010952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    61.010953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    61.010956: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    61.010960: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    61.010964: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] d.h..    61.010964: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.010965: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d.h1.    61.010966: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.010972: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    61.011077: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    61.011078: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    61.011086: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] dNh1.    61.011194: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d.h1.    61.014952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    61.014952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    61.014955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    61.014965: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    61.014965: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    61.015084: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    61.015085: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    61.015093: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d.h1.    61.018952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    61.018956: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    61.018960: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    61.019073: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    61.019074: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    61.019083: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    61.019084: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    61.019202: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    61.019202: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    61.019210: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d.h1.    61.022952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    61.022955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    61.026952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    61.026954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.026957: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] d.h1.    61.026959: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    61.027072: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    61.027073: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    61.027083: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    61.027084: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    61.027186: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    61.027187: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    61.027197: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    61.027217: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    61.027220: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    61.027221: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    61.027222: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [001] dNh1.    61.027296: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    61.027297: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    61.027303: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    61.027444: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    61.027447: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    61.027447: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    61.027448: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    61.027606: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    61.027608: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    61.027609: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    61.027609: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [002] d.h1.    61.030952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    61.030952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    61.030952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    61.030956: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    61.030962: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.030967: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.030968: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    61.030968: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d.h1.    61.031328: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    61.031445: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    61.031445: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    61.031455: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    61.031572: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    61.031574: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    61.031574: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    61.031576: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.    61.031581: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    61.031701: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    61.031702: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    61.031710: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.    61.034716: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    61.034848: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.    61.034849: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    61.034857: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    61.034868: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    61.034870: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    61.034871: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    61.034871: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.    61.034874: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] d.h..    61.034952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    61.034953: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    61.034961: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    61.034967: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.    61.034988: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    61.034989: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    61.034992: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    61.035021: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    61.035027: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    61.035027: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    61.035028: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    61.035032: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    61.035034: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    61.035035: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    61.035035: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.    61.035038: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    61.035153: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    61.035704: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    61.035705: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [002] d.h1.    61.038952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    61.038952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    61.038954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    61.038955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.038957: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    61.038965: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] d.h1.    61.038966: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.038986: irq_handler_entry: irq=29 name=eth0
          <idle>-0       [000] d.h1.    61.038988: irq_handler_exit: irq=29 ret=handled
          <idle>-0       [001] dNh1.    61.039209: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    61.039210: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    61.039218: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    61.039774: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.    61.039941: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.    61.039942: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.    61.039943: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] dNh1.    61.039944: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    61.039954: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    61.039971: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    61.039973: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    61.039974: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    61.039974: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    61.040136: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    61.040141: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    61.040141: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    61.040142: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    61.040307: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    61.040309: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    61.040309: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    61.040310: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    61.040311: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    61.040313: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    61.040313: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    61.040314: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.    61.040468: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    61.040592: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    61.040616: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    61.040622: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    61.040623: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    61.040623: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.    61.040627: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    61.040748: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    61.040766: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    61.040768: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    61.040769: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    61.040769: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    61.040770: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    61.040772: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    61.040772: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    61.040773: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.    61.040776: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    61.040895: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    61.040928: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    61.040932: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    61.040933: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    61.040933: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    61.040934: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    61.040936: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    61.040936: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    61.040937: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.    61.040940: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    61.041061: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    61.042952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    61.042952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    61.042952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    61.042954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    61.042960: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    61.042960: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    61.042965: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    61.042967: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.042969: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    61.042970: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d.h1.    61.042976: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    61.043092: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d.h1.    61.046952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    61.046952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    61.046953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    61.046955: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    61.046960: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    61.046966: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    61.050952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    61.050952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    61.050954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    61.050955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    61.051097: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    61.051099: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    61.054952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    61.054952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    61.054954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    61.054964: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] d.h1.    61.054964: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    61.055084: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    61.055085: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    61.055094: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.    61.058952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    61.058952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    61.058954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    61.058955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.058958: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    61.059201: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    61.059202: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    61.059218: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    61.059219: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    61.059229: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    61.059231: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    61.059338: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    61.059338: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    61.059346: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    61.061397: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    61.061399: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    61.062952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    61.062952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    61.062955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    61.062957: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] d.h1.    61.062958: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    61.063074: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    61.063075: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    61.063083: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d.h1.    61.066952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    61.066952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    61.066954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    61.066954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    61.070952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    61.070952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    61.070954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    61.070964: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] d.h1.    61.070965: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    61.071082: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    61.071083: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    61.071091: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.    61.074952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    61.074956: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.074959: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    61.075080: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    61.075080: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    61.075090: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    61.075091: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    61.075107: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    61.075110: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    61.075110: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    61.075112: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [001] dNh1.    61.075208: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    61.075209: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    61.075217: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    61.075356: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    61.075358: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    61.075358: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    61.075359: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    61.075515: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    61.075517: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    61.075517: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    61.075518: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    61.078952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    61.078968: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    61.078969: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    61.079086: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    61.079087: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    61.079095: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.    61.086953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    61.086953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    61.086953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    61.086955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.086955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    61.086957: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNH2.    61.087124: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNH2.    61.087134: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    61.087135: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    61.087162: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    61.087163: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    61.087164: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    61.087170: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [003] d.h1.    61.087171: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    61.087253: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    61.087254: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    61.087261: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] dNh1.    61.087361: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d.h1.    61.090952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    61.090953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    61.090955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    61.090964: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] d.h1.    61.090964: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    61.091082: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    61.091083: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    61.091091: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    61.182953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    61.182953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    61.182955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    61.182956: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.H1.    61.182961: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    61.183097: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    61.183463: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] dNH1.    61.183463: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNH2.    61.183464: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNH1.    61.183464: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNH1.    61.183465: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNH2.    61.183475: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    61.183501: irq_handler_entry: irq=28 name=eth0
     kworker/3:2-95      [003] d.h1.    61.183509: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    61.183643: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.    61.183645: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] d.h1.    61.183655: irq_handler_exit: irq=6 ret=handled
     kworker/3:2-95      [003] d.h1.    61.183846: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    61.183914: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    61.183916: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.186475: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    61.186477: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    61.186482: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    61.186487: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [003] d.h1.    61.186488: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    61.186758: irq_handler_exit: irq=2 ret=handled
     kworker/3:2-95      [003] d.h..    61.186791: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    61.186807: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    61.186808: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    61.186809: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    61.186811: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [001] d.h..    61.186956: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    61.186958: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    61.186969: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.H1.    61.186986: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    61.186988: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.H1.    61.186989: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    61.187027: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    61.187031: irq_handler_exit: irq=28 ret=handled
 systemd-journal-238     [001] d.h1.    61.187032: irq_handler_entry: irq=2 name=IPI
     kworker/3:2-95      [003] d.h..    61.187228: irq_handler_exit: irq=11 ret=handled
     kworker/3:2-95      [003] d.h..    61.187230: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh1.    61.187524: irq_handler_exit: irq=2 ret=handled
     kworker/3:2-95      [003] d.h..    61.187893: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dnh1.    61.188050: irq_handler_entry: irq=1 name=IPI
          <idle>-0       [002] dNh1.    61.188052: irq_handler_exit: irq=1 ret=handled
          <idle>-0       [003] d.h1.    61.190958: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    61.190960: irq_handler_entry: irq=11 name=arch_timer
 journal-offline-820     [002] d.h..    61.190960: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    61.190996: irq_handler_exit: irq=11 ret=handled
 journal-offline-820     [002] d.h..    61.190996: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    61.190996: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    61.194954: irq_handler_entry: irq=11 name=arch_timer
 journal-offline-820     [002] d.h..    61.194955: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    61.194956: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    61.194962: irq_handler_exit: irq=11 ret=handled
 journal-offline-820     [002] d.h..    61.194970: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    61.194974: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    61.198953: irq_handler_entry: irq=11 name=arch_timer
 journal-offline-820     [002] d.h..    61.198954: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    61.198954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    61.198957: irq_handler_exit: irq=11 ret=handled
 journal-offline-820     [002] d.h..    61.198968: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    61.198973: irq_handler_exit: irq=11 ret=handled
 journal-offline-820     [002] d.h..    61.202955: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    61.202955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    61.202956: irq_handler_entry: irq=11 name=arch_timer
 journal-offline-820     [002] d.h..    61.202969: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    61.202973: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    61.202987: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    61.206954: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    61.206955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    61.206957: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    61.206961: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    61.206966: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    61.206973: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    61.210953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    61.210953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    61.210954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    61.210956: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    61.210957: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    61.210964: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    61.214953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    61.214953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    61.214954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    61.214957: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    61.214959: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    61.214983: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    61.214996: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    61.215245: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    61.215247: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    61.215263: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.    61.218953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    61.218953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    61.218958: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    61.218960: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    61.222953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    61.222953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    61.222958: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    61.222978: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] d.h1.    61.222979: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    61.223493: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    61.223495: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    61.223526: irq_handler_exit: irq=6 ret=handled
 systemd-journal-238     [001] d.h..    61.226954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    61.226954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    61.226967: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.226967: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] d.h..    61.226967: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.226968: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    61.388130: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    61.388134: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.388135: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    61.388444: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] dNh1.    61.388446: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] d.h1.    61.388446: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    61.388447: irq_handler_exit: irq=6 ret=handled
     kworker/0:3-263     [000] d.h..    61.388499: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    61.388680: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    61.388682: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    61.388696: irq_handler_exit: irq=6 ret=handled
     kworker/0:3-263     [000] d.h..    61.389063: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.389191: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    61.389194: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.390953: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    61.390953: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    61.390973: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.390986: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.390987: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    61.390989: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    61.391588: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    61.391591: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    61.391595: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] dNh1.    61.391895: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [000] dNh1.    61.391899: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    61.391919: irq_handler_exit: irq=6 ret=handled
     kworker/0:3-263     [000] d.h1.    61.391946: irq_handler_entry: irq=11 name=arch_timer
     kworker/0:3-263     [000] d.h1.    61.392396: irq_handler_exit: irq=11 ret=handled
     kworker/0:3-263     [000] d.h1.    61.392399: irq_handler_entry: irq=14 name=fe00b880.mailbox
     kworker/0:3-263     [000] d.h1.    61.392400: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
     kworker/0:3-263     [000] d.h1.    61.392402: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => _raw_spin_unlock_irqrestore+0x10/0x58
 => schedule_timeout+0x94/0x1a0
 => wait_for_completion_timeout+0x80/0x160
 => mbox_send_message+0xf8/0x140
 => rpi_firmware_property_list+0x104/0x298
 => rpi_firmware_property+0x78/0xc8
 => raspberrypi_fw_get_rate+0x50/0x90
 => clk_recalc+0x40/0xb8
 => clk_change_rate+0xf4/0x4e0
 => clk_core_set_rate_nolock+0x198/0x3c8
 => clk_set_rate+0x40/0x190
 => _opp_config_clk_single+0x38/0xb8
 => _set_opp+0x140/0x490
 => dev_pm_opp_set_rate+0x198/0x298
 => set_target+0x38/0x50
 => __cpufreq_driver_target+0x2b4/0x6d8
 => od_dbs_update+0xc4/0x1c0
 => dbs_work_handler+0x48/0x90
 => process_one_work+0x158/0x3d0
 => worker_thread+0x2d8/0x3e8
 => kthread+0x11c/0x128
 => ret_from_fork+0x10/0x20
     kworker/0:3-263     [000] d.h1.    61.392404: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [000] d.h1.    61.394954: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    61.394955: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    61.394968: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.394992: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.456105: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    61.456108: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    61.466974: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] dNh1.    61.467319: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNh1.    61.467320: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    61.467343: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    61.469290: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    61.469295: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    61.502955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    61.502963: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    61.502974: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] d.H1.    61.502979: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    61.503238: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    61.503240: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    61.503266: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d.h1.    61.503294: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    61.503297: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNH1.    61.503656: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNH1.    61.503658: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNH1.    61.504004: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNH1.    61.504006: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH1.    61.504028: irq_handler_exit: irq=6 ret=handled
     kworker/1:2-64      [001] d.h..    61.504076: irq_handler_entry: irq=11 name=arch_timer
     kworker/1:2-64      [001] d.h..    61.504519: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    61.506954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    61.507000: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    61.507001: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.507002: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    61.507434: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    61.507436: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    61.507440: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    61.507444: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [001] d.h..    61.507446: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    61.507707: irq_handler_exit: irq=2 ret=handled
     kworker/1:2-64      [001] d.h1.    61.507735: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    61.507753: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    61.507755: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    61.507757: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    61.507758: irq_handler_exit: irq=14 ret=handled
     kworker/1:2-64      [001] d.h1.    61.508251: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    61.510954: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    61.511003: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    61.514954: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    61.514968: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.566475: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    61.566479: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] D.H3.    61.566588: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] D.H3.    61.566591: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.    61.567182: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.    61.567576: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.    61.567578: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.    61.567581: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] dNh1.    61.567584: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    61.567612: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    61.567615: irq_handler_entry: irq=2 name=IPI
     kworker/0:3-263     [000] d.h..    61.567645: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-263     [000] d.h..    61.567649: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-263     [000] d.h..    61.567651: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-263     [000] d.h..    61.567652: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [001] dNh1.    61.567918: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    61.567921: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    61.567941: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    61.568379: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    61.568390: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    61.568391: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    61.568392: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    61.568798: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    61.568803: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    61.568804: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    61.568805: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    61.568807: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    61.568811: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    61.568811: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    61.568813: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.    61.569198: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    61.569510: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    61.569513: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    61.569533: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    61.569563: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    61.569568: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    61.569569: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    61.569570: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.    61.569571: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    61.569577: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    61.569579: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    61.569883: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    61.570953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    61.570954: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    61.570955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    61.570969: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.H1.    61.570974: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] d.h..    61.570975: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.H1.    61.570976: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d.h1.    61.570984: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    61.572894: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    61.573542: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.    61.573544: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    61.573566: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    61.573588: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    61.573592: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    61.573593: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    61.573595: irq_handler_exit: irq=40 ret=unhandled
             thd-458     [003] dnh..    61.573610: irq_handler_entry: irq=1 name=IPI
             thd-458     [003] dNh..    61.573613: irq_handler_exit: irq=1 ret=handled
          <idle>-0       [000] d.H2.    61.573925: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] d.H2.    61.573947: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    61.573969: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    61.573981: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    61.573982: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    61.573983: irq_handler_exit: irq=40 ret=unhandled
             thd-458     [003] d.h..    61.573992: irq_handler_entry: irq=2 name=IPI
             thd-458     [003] dNh..    61.574301: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    61.574334: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    61.574343: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    61.574344: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    61.574345: irq_handler_exit: irq=40 ret=unhandled
             thd-458     [003] d.h..    61.574352: irq_handler_entry: irq=2 name=IPI
             thd-458     [003] dNh..    61.574635: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    61.574728: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    61.574731: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.    61.574755: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    61.574764: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    61.574765: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    61.574766: irq_handler_exit: irq=40 ret=unhandled
             thd-458     [003] dnh..    61.574777: irq_handler_entry: irq=1 name=IPI
             thd-458     [003] dNh..    61.574779: irq_handler_exit: irq=1 ret=handled
 systemd-journal-238     [001] d.h..    61.574954: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    61.574974: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.H2.    61.575103: irq_handler_entry: irq=6 name=IPI
   kworker/u21:0-89      [003] d.h1.    61.575107: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.H2.    61.575125: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.H2.    61.575127: irq_handler_entry: irq=2 name=IPI
   kworker/u21:0-89      [003] d.h1.    61.575127: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.H2.    61.575129: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    61.575414: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    61.575433: irq_handler_exit: irq=6 ret=handled
 systemd-journal-238     [001] d.h..    61.578954: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    61.578971: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.578971: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    61.578973: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [001] d.h..    61.582954: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    61.582968: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    61.586954: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    61.586968: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.586983: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    61.587293: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    61.587295: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    61.587316: irq_handler_exit: irq=6 ret=handled
 systemd-journal-238     [001] d.h..    61.590954: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    61.590970: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    61.594954: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    61.594970: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    61.602957: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    61.602966: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.602977: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    61.603278: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    61.603280: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    61.603676: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    61.603678: irq_handler_entry: irq=2 name=IPI
     kworker/0:3-263     [000] d.h1.    61.603708: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-263     [000] d.h1.    61.603712: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-263     [000] d.h1.    61.603713: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-263     [000] d.h1.    61.603715: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [001] dNh1.    61.603981: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    61.603983: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    61.604004: irq_handler_exit: irq=6 ret=handled
     kworker/0:3-263     [000] d.h1.    61.604364: irq_handler_entry: irq=11 name=arch_timer
     kworker/0:3-263     [000] d.h1.    61.604883: irq_handler_exit: irq=11 ret=handled
     kworker/0:3-263     [000] d.h1.    61.604908: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-263     [000] d.h1.    61.604912: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-263     [000] d.h1.    61.604913: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-263     [000] d.h1.    61.604915: irq_handler_exit: irq=40 ret=unhandled
     kworker/0:3-263     [000] d.h1.    61.605484: irq_handler_entry: irq=40 name=mmc1
     kworker/0:3-263     [000] d.h1.    61.605488: irq_handler_exit: irq=40 ret=handled
     kworker/0:3-263     [000] d.h1.    61.605489: irq_handler_entry: irq=40 name=mmc0
     kworker/0:3-263     [000] d.h1.    61.605490: irq_handler_exit: irq=40 ret=unhandled
 systemd-journal-238     [001] d.h..    61.606954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    61.606955: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    61.606975: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.607002: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.607004: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    61.607007: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    61.607899: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    61.607901: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    61.607905: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] dNh1.    61.608125: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [000] dNh1.    61.608127: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    61.608141: irq_handler_exit: irq=6 ret=handled
     kworker/0:3-263     [000] d.h1.    61.608162: irq_handler_entry: irq=11 name=arch_timer
     kworker/0:3-263     [000] d.h1.    61.608490: irq_handler_exit: irq=11 ret=handled
     kworker/0:3-263     [000] d.h1.    61.608491: irq_handler_entry: irq=14 name=fe00b880.mailbox
     kworker/0:3-263     [000] d.h1.    61.608492: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
     kworker/0:3-263     [000] d.h1.    61.608494: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => _raw_spin_unlock_irqrestore+0x10/0x58
 => schedule_timeout+0x94/0x1a0
 => wait_for_completion_timeout+0x80/0x160
 => mbox_send_message+0xf8/0x140
 => rpi_firmware_property_list+0x104/0x298
 => rpi_firmware_property+0x78/0xc8
 => raspberrypi_fw_get_rate+0x50/0x90
 => clk_recalc+0x40/0xb8
 => clk_change_rate+0xf4/0x4e0
 => clk_core_set_rate_nolock+0x198/0x3c8
 => clk_set_rate+0x40/0x190
 => _opp_config_clk_single+0x38/0xb8
 => _set_opp+0x110/0x490
 => dev_pm_opp_set_rate+0x198/0x298
 => set_target+0x38/0x50
 => __cpufreq_driver_target+0x2b4/0x6d8
 => od_dbs_update+0xc4/0x1c0
 => dbs_work_handler+0x48/0x90
 => process_one_work+0x158/0x3d0
 => worker_thread+0x2d8/0x3e8
 => kthread+0x11c/0x128
 => ret_from_fork+0x10/0x20
     kworker/0:3-263     [000] d.h1.    61.608495: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [001] d.h..    61.610953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    61.610953: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    61.610965: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.610980: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    61.614953: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    61.614964: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    61.618953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    61.618961: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    61.662953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    61.662954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    61.662958: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    61.662959: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNH2.    61.663232: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    61.663594: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNH2.    61.663595: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    61.663616: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    61.666954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    61.666962: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    61.681346: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    61.681350: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.694316: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    61.694540: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNh1.    61.694542: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    61.694558: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    61.694559: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    61.694754: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    61.694755: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    61.694769: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    61.694770: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    61.694775: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    61.694953: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    61.694964: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.694967: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    61.694970: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    61.757183: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    61.757186: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [002] d.h1.    61.757254: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    61.757455: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    61.757456: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    61.757704: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    61.757706: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    61.757901: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    61.757902: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    61.757906: irq_handler_exit: irq=6 ret=handled
     kworker/2:1-70      [002] d.h..    61.758173: irq_handler_entry: irq=11 name=arch_timer
     kworker/2:1-70      [002] d.h..    61.758518: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    61.758953: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    61.758974: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.758975: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    61.758976: irq_handler_exit: irq=2 ret=handled
            bash-766     [002] dNh..    61.759040: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    61.759066: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    61.759067: irq_handler_exit: irq=2 ret=handled
            bash-766     [002] dNh..    61.759067: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.759423: irq_handler_entry: irq=29 name=eth0
          <idle>-0       [000] d.h1.    61.759426: irq_handler_exit: irq=29 ret=handled
          <idle>-0       [000] d.h1.    61.760065: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    61.760067: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.    61.760963: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    61.760966: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    61.760971: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    61.760976: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [002] d.h1.    61.760980: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    61.761268: irq_handler_exit: irq=2 ret=handled
     kworker/2:1-70      [002] d.h1.    61.761300: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    61.761317: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    61.761318: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    61.761319: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    61.761321: irq_handler_exit: irq=14 ret=handled
     kworker/2:1-70      [002] d.h1.    61.761763: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    61.762954: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    61.762954: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    61.762973: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    61.762993: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    61.766954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    61.766969: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] d.h..    61.766969: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.766971: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [001] d.h..    61.770953: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    61.770966: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    61.798955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    61.798955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    61.798963: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    61.798963: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    61.822954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    61.822955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    61.822959: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.822960: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNH2.    61.823283: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2.    61.823584: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    61.823994: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] dNH2.    61.823996: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNH2.    61.823996: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    61.824021: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    61.824064: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    61.824069: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    61.826953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    61.826972: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    61.826973: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.826973: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d.h1.    61.831134: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    61.831138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.893310: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    61.893313: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [002] d.h1.    61.893361: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    61.893627: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    61.893629: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    61.893963: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    61.893968: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    61.894233: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    61.894235: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    61.894247: irq_handler_exit: irq=6 ret=handled
 systemd-journal-238     [001] d.h..    61.894955: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    61.894976: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.894977: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    61.894979: irq_handler_exit: irq=2 ret=handled
            bash-766     [002] dNh..    61.895196: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    61.895230: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    61.895231: irq_handler_exit: irq=2 ret=handled
            bash-766     [002] dNh..    61.895232: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dnh1.    61.895649: irq_handler_entry: irq=1 name=IPI
          <idle>-0       [003] dNh1.    61.895650: irq_handler_exit: irq=1 ret=handled
          <idle>-0       [000] d.h1.    61.896116: irq_handler_entry: irq=29 name=eth0
          <idle>-0       [000] d.h1.    61.896119: irq_handler_exit: irq=29 ret=handled
          <idle>-0       [000] d.h1.    61.896781: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    61.896783: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [003] d.h1.    61.898955: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    61.898955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    61.898956: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    61.898970: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    61.898972: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    61.898983: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    61.901118: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    61.901122: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    61.902953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    61.902969: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] d.h..    61.902969: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    61.902971: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] d.h1.    61.921884: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    61.921887: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    61.934954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    61.934955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    61.934962: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    61.934962: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.014954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    62.014956: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    62.014959: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    62.014961: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.H1.    62.014968: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] d.h1.    62.014969: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    62.015241: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    62.015243: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    62.015268: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d.h1.    62.015298: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    62.015301: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNH1.    62.015657: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNH1.    62.015659: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNH1.    62.016004: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNH1.    62.016005: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH1.    62.016027: irq_handler_exit: irq=6 ret=handled
     kworker/1:2-64      [001] d.h..    62.016085: irq_handler_entry: irq=11 name=arch_timer
     kworker/1:2-64      [001] d.h..    62.016549: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    62.018954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    62.019000: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    62.019000: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.019002: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    62.019434: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    62.019437: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    62.019442: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    62.019446: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [001] d.h..    62.019448: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    62.019705: irq_handler_exit: irq=2 ret=handled
     kworker/1:2-64      [001] d.h1.    62.019734: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    62.019753: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    62.019755: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    62.019757: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x3c/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    62.019758: irq_handler_exit: irq=14 ret=handled
     kworker/1:2-64      [001] d.h1.    62.020255: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    62.022954: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    62.023004: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    62.026954: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    62.026969: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.081161: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    62.081163: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [002] d.h1.    62.081211: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    62.081507: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    62.081509: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    62.081533: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    62.081536: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    62.081839: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    62.081841: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    62.081853: irq_handler_exit: irq=6 ret=handled
 systemd-journal-238     [001] d.h..    62.082954: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    62.082978: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.082978: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    62.082981: irq_handler_exit: irq=2 ret=handled
   kworker/u19:1-67      [002] dNh1.    62.083196: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    62.083228: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    62.083230: irq_handler_exit: irq=2 ret=handled
   kworker/u19:1-67      [002] dNh1.    62.083231: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dnh1.    62.083266: irq_handler_entry: irq=1 name=IPI
          <idle>-0       [003] dNh1.    62.083268: irq_handler_exit: irq=1 ret=handled
          <idle>-0       [003] d.h1.    62.083342: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    62.083349: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.083669: irq_handler_entry: irq=29 name=eth0
          <idle>-0       [000] d.h1.    62.083672: irq_handler_exit: irq=29 ret=handled
          <idle>-0       [000] d.h1.    62.084307: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    62.084309: irq_handler_exit: irq=28 ret=handled
 systemd-journal-238     [001] d.h..    62.086955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    62.086956: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    62.086973: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    62.086985: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    62.090954: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    62.090971: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.090971: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    62.090974: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.    62.102955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    62.102956: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    62.102964: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.102964: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.110955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    62.110956: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    62.110960: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    62.110962: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2.    62.111391: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2.    62.111420: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    62.111421: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    62.111485: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    62.111490: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.111493: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    62.111496: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    62.111497: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [001] dNh1.    62.111724: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    62.111726: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    62.111744: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] dNh1.    62.112070: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [002] d.h1.    62.112951: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    62.112955: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    62.114954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    62.114954: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    62.114971: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.114988: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.114990: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    62.114992: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.    62.117559: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    62.118351: irq_handler_exit: irq=6 ret=handled
     kworker/1:2-64      [001] d.h..    62.118404: irq_handler_entry: irq=11 name=arch_timer
     kworker/1:2-64      [001] d.h..    62.118914: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    62.118954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    62.119001: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] d.h..    62.119001: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.119002: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    62.121909: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    62.121911: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    62.121914: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    62.121916: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [001] d.h..    62.122953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    62.122954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    62.122959: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.H2.    62.122963: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    62.122964: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.H2.    62.122965: irq_handler_exit: irq=2 ret=handled
     kworker/1:2-64      [001] d.h1.    62.122992: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    62.123007: irq_handler_entry: irq=14 name=fe00b880.mailbox
          <idle>-0       [000] d.h1.    62.123008: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
          <idle>-0       [000] d.h1.    62.123010: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => default_idle_call+0x3c/0x168
 => do_idle+0x200/0x238
 => cpu_startup_entry+0x40/0x50
 => rest_init+0xe4/0xf0
 => start_kernel+0x5e8/0x790
 => __primary_switched+0x80/0x90
          <idle>-0       [000] d.h1.    62.123011: irq_handler_exit: irq=14 ret=handled
     kworker/1:2-64      [001] d.h1.    62.123353: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.123812: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    62.123815: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] d.h..    62.126953: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [001] d.h..    62.126988: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    62.206956: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    62.206962: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNH2.    62.207213: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    62.207569: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNH2.    62.207570: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    62.207591: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    62.207622: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    62.207865: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.    62.207869: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] d.h1.    62.207884: irq_handler_exit: irq=6 ret=handled
 systemd-journal-238     [001] d.h..    62.210953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    62.210955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    62.210959: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [001] dNh..    62.210965: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.H2.    62.210972: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.H2.    62.210973: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.H1.    62.210983: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.H1.    62.210986: irq_handler_exit: irq=28 ret=handled
 systemd-journal-238     [001] d.h..    62.210987: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [001] dNh..    62.211172: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    62.211404: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    62.211418: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    62.214953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    62.214969: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] d.h1.    62.214969: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNh1.    62.215197: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    62.215198: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    62.215213: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    62.279002: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    62.279006: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    62.279007: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    62.279274: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] dNh1.    62.279276: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] d.h1.    62.279276: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    62.279277: irq_handler_exit: irq=6 ret=handled
     kworker/1:2-64      [001] d.h1.    62.279315: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.279497: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    62.279498: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    62.279514: irq_handler_exit: irq=6 ret=handled
     kworker/1:2-64      [001] d.h1.    62.279839: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    62.279951: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    62.279954: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [000] d.h..    62.282242: irq_handler_entry: irq=14 name=fe00b880.mailbox
 systemd-journal-238     [000] d.h..    62.282245: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
 systemd-journal-238     [000] d.h..    62.282249: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el0_interrupt+0x44/0xc0
 => __el0_irq_handler_common+0x18/0x28
 => el0t_64_irq_handler+0x10/0x20
 => el0t_64_irq+0x190/0x198
 systemd-journal-238     [000] d.h..    62.282254: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [001] d.h1.    62.282255: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    62.282573: irq_handler_exit: irq=2 ret=handled
     kworker/1:2-64      [001] d.h1.    62.282598: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [000] d.h..    62.282621: irq_handler_entry: irq=14 name=fe00b880.mailbox
 systemd-journal-238     [000] d.h..    62.282623: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
 systemd-journal-238     [000] d.h..    62.282626: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el0_interrupt+0x44/0xc0
 => __el0_irq_handler_common+0x18/0x28
 => el0t_64_irq_handler+0x10/0x20
 => el0t_64_irq+0x190/0x198
 systemd-journal-238     [000] d.h..    62.282628: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [000] d.h..    62.282954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    62.282977: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [000] d.h..    62.282978: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    62.282980: irq_handler_exit: irq=2 ret=handled
     kworker/1:2-64      [001] d.h1.    62.283155: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [000] d.h..    62.286954: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [000] d.h..    62.286971: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    62.286973: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] d.h1.    62.286975: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    62.290955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    62.290966: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.328266: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    62.328269: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [002] d.h1.    62.328341: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    62.328649: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    62.328651: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    62.328675: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    62.328677: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    62.328997: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    62.328999: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    62.329014: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.    62.329358: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    62.329680: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    62.329683: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    62.329704: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d.h1.    62.329977: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    62.329983: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    62.330152: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    62.330465: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [000] d.h..    62.330632: irq_handler_entry: irq=29 name=eth0
 systemd-journal-238     [000] d.h..    62.330635: irq_handler_exit: irq=29 ret=handled
 systemd-journal-238     [000] d.h..    62.330955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    62.330955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    62.330955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    62.330972: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    62.330977: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [000] d.h..    62.330977: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    62.330979: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d.h1.    62.330989: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [000] d.h..    62.331952: irq_handler_entry: irq=28 name=eth0
 systemd-journal-238     [000] d.h..    62.331955: irq_handler_exit: irq=28 ret=handled
 systemd-journal-238     [000] d.h..    62.334954: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [000] d.h..    62.334974: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    62.337026: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    62.337031: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [000] d.h..    62.338954: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [000] d.h..    62.338968: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    62.346515: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    62.346519: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    62.355726: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    62.355730: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.370957: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    62.370965: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.419990: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    62.419995: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.419996: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    62.420785: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] dNh1.    62.420787: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    62.420813: irq_handler_exit: irq=6 ret=handled
     kworker/0:3-263     [000] d.h..    62.420872: irq_handler_entry: irq=11 name=arch_timer
     kworker/0:3-263     [000] d.h..    62.421359: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [000] d.h..    62.422954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    62.423004: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [000] d.h..    62.423004: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    62.423005: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [000] d.h..    62.424460: irq_handler_entry: irq=14 name=fe00b880.mailbox
 systemd-journal-238     [000] d.h..    62.424463: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
 systemd-journal-238     [000] d.h..    62.424468: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el0_interrupt+0x44/0xc0
 => __el0_irq_handler_common+0x18/0x28
 => el0t_64_irq_handler+0x10/0x20
 => el0t_64_irq+0x190/0x198
 systemd-journal-238     [000] d.h..    62.424470: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [000] d.h..    62.426953: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [000] dNh..    62.426968: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    62.426968: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] d.h1.    62.426970: irq_handler_exit: irq=2 ret=handled
     kworker/0:3-263     [000] d.h1.    62.426994: irq_handler_entry: irq=11 name=arch_timer
     kworker/0:3-263     [000] d.h1.    62.427446: irq_handler_exit: irq=11 ret=handled
     kworker/0:3-263     [000] d.h1.    62.427449: irq_handler_entry: irq=14 name=fe00b880.mailbox
     kworker/0:3-263     [000] d.h1.    62.427450: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
     kworker/0:3-263     [000] d.h1.    62.427453: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => _raw_spin_unlock_irqrestore+0x10/0x58
 => schedule_timeout+0x94/0x1a0
 => wait_for_completion_timeout+0x80/0x160
 => mbox_send_message+0xf8/0x140
 => rpi_firmware_property_list+0x104/0x298
 => rpi_firmware_property+0x78/0xc8
 => raspberrypi_fw_get_rate+0x50/0x90
 => clk_recalc+0x40/0xb8
 => clk_change_rate+0xf4/0x4e0
 => clk_core_set_rate_nolock+0x198/0x3c8
 => clk_set_rate+0x40/0x190
 => _opp_config_clk_single+0x38/0xb8
 => _set_opp+0x110/0x490
 => dev_pm_opp_set_rate+0x198/0x298
 => set_target+0x38/0x50
 => __cpufreq_driver_target+0x2b4/0x6d8
 => od_dbs_update+0xc4/0x1c0
 => dbs_work_handler+0x48/0x90
 => process_one_work+0x158/0x3d0
 => worker_thread+0x2d8/0x3e8
 => kthread+0x11c/0x128
 => ret_from_fork+0x10/0x20
     kworker/0:3-263     [000] d.h1.    62.427455: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [000] d.h1.    62.430961: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.431408: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.434955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.435371: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.438954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.439367: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.442954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.443364: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.446954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.447367: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.450954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.451365: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.454954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.455362: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.458954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.459365: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.462954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.463365: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.466954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    62.466970: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    62.466973: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNh1.    62.467363: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.470954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.471363: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.473511: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    62.473515: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.474953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.475361: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.478954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.479363: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.482954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.483365: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.486954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.487363: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [000] d.h..    62.489433: irq_handler_entry: irq=28 name=eth0
 systemd-journal-238     [000] d.h..    62.489437: irq_handler_exit: irq=28 ret=handled
 systemd-journal-238     [000] d.h..    62.490955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    62.490999: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [000] d.h..    62.491000: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    62.491001: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dnh1.    62.491027: irq_handler_entry: irq=1 name=IPI
          <idle>-0       [002] dNh1.    62.491029: irq_handler_exit: irq=1 ret=handled
          <idle>-0       [003] d.h1.    62.491054: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] d.h1.    62.491068: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    62.491072: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.    62.491319: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    62.491321: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    62.491339: irq_handler_exit: irq=6 ret=handled
 systemd-journal-238     [000] d.h..    62.491721: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [000] dNh..    62.491975: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [000] d.h..    62.492163: irq_handler_entry: irq=29 name=eth0
 systemd-journal-238     [000] d.h..    62.492167: irq_handler_exit: irq=29 ret=handled
 systemd-journal-238     [000] d.h..    62.492787: irq_handler_entry: irq=28 name=eth0
 systemd-journal-238     [000] d.h..    62.492790: irq_handler_exit: irq=28 ret=handled
 systemd-journal-238     [000] d.h..    62.494954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    62.494957: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    62.494975: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [000] d.h..    62.494991: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    62.501655: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    62.501659: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.526957: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    62.526964: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    62.526977: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.H1.    62.526984: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    62.527246: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    62.527248: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    62.527271: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] dNH1.    62.527672: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] dNH1.    62.527674: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNH1.    62.528030: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNH1.    62.528031: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH1.    62.528054: irq_handler_exit: irq=6 ret=handled
     kworker/0:3-263     [000] d.h1.    62.528118: irq_handler_entry: irq=11 name=arch_timer
     kworker/0:3-263     [000] d.h1.    62.528568: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    62.530954: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [000] d.h..    62.530954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    62.530962: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [000] dNh..    62.531000: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    62.531000: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] d.h1.    62.531002: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [000] d.h..    62.532177: irq_handler_entry: irq=14 name=fe00b880.mailbox
 systemd-journal-238     [000] d.h..    62.532179: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
 systemd-journal-238     [000] d.h..    62.532182: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el0_interrupt+0x44/0xc0
 => __el0_irq_handler_common+0x18/0x28
 => el0t_64_irq_handler+0x10/0x20
 => el0t_64_irq+0x190/0x198
 systemd-journal-238     [000] dNh..    62.532301: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [000] d.h1.    62.532320: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [000] dNh1.    62.532470: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [000] dNh1.    62.532471: irq_handler_entry: irq=14 name=fe00b880.mailbox
 systemd-journal-238     [000] dNh1.    62.532471: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
 systemd-journal-238     [000] dNh1.    62.532472: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => finish_task_switch.isra.0+0x7c/0x250
 => __schedule+0x398/0xb60
 => schedule+0x3c/0x148
 => do_notify_resume+0xdc/0x150
 => el0_interrupt+0xa8/0xc0
 => __el0_irq_handler_common+0x18/0x28
 => el0t_64_irq_handler+0x10/0x20
 => el0t_64_irq+0x190/0x198
 systemd-journal-238     [000] dNh1.    62.532473: irq_handler_exit: irq=14 ret=handled
 systemd-journal-238     [000] d.h..    62.534952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [000] d.h..    62.534971: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.566652: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    62.566654: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.H1.    62.566723: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.H1.    62.566724: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.    62.567323: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.    62.567492: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.    62.567493: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.    62.567495: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] dNh1.    62.567496: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    62.567662: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] dNh1.    62.567663: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    62.567673: irq_handler_exit: irq=6 ret=handled
 systemd-journal-238     [000] d.h1.    62.567698: irq_handler_entry: irq=40 name=mmc1
 systemd-journal-238     [000] d.h1.    62.567703: irq_handler_exit: irq=40 ret=handled
 systemd-journal-238     [000] d.h1.    62.567703: irq_handler_entry: irq=40 name=mmc0
 systemd-journal-238     [000] d.h1.    62.567704: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    62.570494: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    62.570501: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    62.570502: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    62.570502: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    62.570678: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    62.570681: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    62.570681: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    62.570682: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    62.570682: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    62.570684: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    62.570685: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    62.570685: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.    62.570843: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    62.570952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    62.570974: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    62.570975: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    62.571144: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    62.571147: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] d.h1.    62.571148: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    62.571148: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [000] d.h..    62.571162: irq_handler_entry: irq=40 name=mmc1
 systemd-journal-238     [000] d.h..    62.571164: irq_handler_exit: irq=40 ret=handled
 systemd-journal-238     [000] d.h..    62.571165: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [003] d.h1.    62.571165: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [000] d.h..    62.571165: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.    62.571168: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    62.571168: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    62.571301: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d.h1.    62.574078: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    62.574214: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [000] d.h..    62.574224: irq_handler_entry: irq=40 name=mmc1
 systemd-journal-238     [000] d.h..    62.574227: irq_handler_exit: irq=40 ret=handled
 systemd-journal-238     [000] d.h..    62.574227: irq_handler_entry: irq=40 name=mmc0
 systemd-journal-238     [000] d.h..    62.574228: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.    62.574233: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    62.574354: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [000] d.h..    62.574378: irq_handler_entry: irq=40 name=mmc1
 systemd-journal-238     [000] d.h..    62.574386: irq_handler_exit: irq=40 ret=handled
 systemd-journal-238     [000] d.h..    62.574386: irq_handler_entry: irq=40 name=mmc0
 systemd-journal-238     [000] d.h..    62.574387: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.    62.574390: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    62.574510: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [000] d.h..    62.574529: irq_handler_entry: irq=40 name=mmc1
 systemd-journal-238     [000] d.h..    62.574532: irq_handler_exit: irq=40 ret=handled
 systemd-journal-238     [000] d.h..    62.574532: irq_handler_entry: irq=40 name=mmc0
 systemd-journal-238     [000] d.h..    62.574533: irq_handler_exit: irq=40 ret=unhandled
 systemd-journal-238     [000] d.h..    62.574534: irq_handler_entry: irq=40 name=mmc1
 systemd-journal-238     [000] d.h..    62.574536: irq_handler_exit: irq=40 ret=handled
 systemd-journal-238     [000] d.h..    62.574536: irq_handler_entry: irq=40 name=mmc0
 systemd-journal-238     [000] d.h..    62.574537: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.    62.574540: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    62.574661: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [000] d.h..    62.574718: irq_handler_entry: irq=28 name=eth0
 systemd-journal-238     [000] d.h..    62.574720: irq_handler_exit: irq=28 ret=handled
 systemd-journal-238     [000] d.h..    62.574735: irq_handler_entry: irq=40 name=mmc1
 systemd-journal-238     [000] d.h..    62.574740: irq_handler_exit: irq=40 ret=handled
 systemd-journal-238     [000] d.h..    62.574740: irq_handler_entry: irq=40 name=mmc0
 systemd-journal-238     [000] d.h..    62.574741: irq_handler_exit: irq=40 ret=unhandled
 systemd-journal-238     [000] d.h..    62.574742: irq_handler_entry: irq=40 name=mmc1
 systemd-journal-238     [000] d.h..    62.574743: irq_handler_exit: irq=40 ret=handled
 systemd-journal-238     [000] d.h..    62.574744: irq_handler_entry: irq=40 name=mmc0
 systemd-journal-238     [000] d.h..    62.574744: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.    62.574748: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    62.574870: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [000] d.h..    62.574952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    62.574952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [000] d.h..    62.574964: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    62.574966: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.586954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    62.586958: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2.    62.587165: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2.    62.587425: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] dNH2.    62.587426: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2.    62.587439: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    62.602954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    62.602958: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2.    62.603136: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2.    62.603394: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] dNH2.    62.603394: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2.    62.603408: irq_handler_exit: irq=6 ret=handled
 systemd-journal-238     [000] d.h1.    62.603431: irq_handler_entry: irq=40 name=mmc1
 systemd-journal-238     [000] d.h1.    62.603434: irq_handler_exit: irq=40 ret=handled
 systemd-journal-238     [000] d.h1.    62.603435: irq_handler_entry: irq=40 name=mmc0
 systemd-journal-238     [000] d.h1.    62.603436: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    62.606566: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    62.606568: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    62.606569: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    62.606570: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    62.606736: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    62.606738: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    62.606738: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    62.606739: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    62.606952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    62.607142: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] d.h1.    62.607142: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    62.607143: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.610953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.611143: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.614952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.615140: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.618952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.619140: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.622952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.623141: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.626952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.627139: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.630953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.631139: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.634952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.635138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dnh1.    62.637785: irq_handler_entry: irq=1 name=IPI
          <idle>-0       [001] dNh1.    62.637786: irq_handler_exit: irq=1 ret=handled
 journal-offline-821     [001] d.h..    62.638957: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [000] d.h..    62.638957: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    62.638988: irq_handler_entry: irq=2 name=IPI
 journal-offline-821     [001] d.h..    62.638991: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [000] d.h..    62.638991: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    62.638992: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d.h1.    62.639006: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    62.639145: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    62.639146: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    62.639154: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.    62.639184: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    62.639188: irq_handler_exit: irq=11 ret=handled
 journal-offline-821     [001] d.h..    62.642955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    62.642956: irq_handler_entry: irq=11 name=arch_timer
 journal-offline-821     [001] d.h..    62.642969: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.642970: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.646953: irq_handler_entry: irq=11 name=arch_timer
 journal-offline-821     [001] d.h..    62.646953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    62.646961: irq_handler_exit: irq=11 ret=handled
 journal-offline-821     [001] d.h..    62.646963: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    62.646971: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    62.647117: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    62.647118: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    62.647131: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    62.647131: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    62.647269: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.    62.650954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    62.650954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    62.650962: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNh1.    62.651152: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    62.654952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    62.654953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    62.654954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNh1.    62.655142: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    62.655148: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    62.655271: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    62.655272: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    62.655280: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    62.658952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    62.658953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    62.658954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    62.658959: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    62.659076: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    62.659077: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    62.659243: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] dNh1.    62.659245: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    62.662952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    62.662953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    62.662954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNh1.    62.663141: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    62.666952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    62.666953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    62.666954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNh1.    62.667140: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    62.667145: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    62.667270: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    62.667270: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    62.667278: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    62.670952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    62.670952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    62.670954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNh1.    62.671133: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    62.674952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    62.674952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    62.674954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNh1.    62.675140: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    62.675144: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    62.675268: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    62.675269: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    62.675277: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    62.678952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    62.678952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    62.678954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    62.679135: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    62.679135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    62.679136: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    62.682952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.683140: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.686952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.687142: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.689597: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    62.689600: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.690952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.691139: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.694952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.695140: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.698952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.699139: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.702952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.703140: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.706952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.707139: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.710952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.711139: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.714952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.715138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.718952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.719139: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.722952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.723139: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.726952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.727138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.730952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.731137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.734952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.735138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.738952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.739139: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.740141: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    62.740143: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.742952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.743136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.746952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.747138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.750952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.751138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.754952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.755137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.758952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.759137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.762952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.763137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.766952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.767137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.770952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.771137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.774955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.775139: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.778952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.779138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.782952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.783139: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.786952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.787137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.790952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.791137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.792147: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    62.792149: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.794952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.795137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.798952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.799137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.802952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.803137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    62.805217: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    62.805218: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.806952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.807138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.810952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.811137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.814952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.815137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.818952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.819139: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.822952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.823138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.826952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.827138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.830952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.831137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.834952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.835138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.838952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.839137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.842952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.843137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.844134: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    62.844136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.846952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.847136: irq_handler_exit: irq=11 ret=handled
     kworker/0:3-263     [000] d.h1.    62.847336: irq_handler_entry: irq=11 name=arch_timer
     kworker/0:3-263     [000] d.h1.    62.847511: irq_handler_exit: irq=11 ret=handled
     kworker/0:3-263     [000] d.h1.    62.847514: irq_handler_entry: irq=14 name=fe00b880.mailbox
     kworker/0:3-263     [000] d.h1.    62.847516: bcm2835_mbox_irq+0x4/0xc8 <-__handle_irq_event_percpu+0x58/0x218
     kworker/0:3-263     [000] d.h1.    62.847519: <stack trace>
 => bcm2835_mbox_irq+0x8/0xc8
 => __handle_irq_event_percpu+0x58/0x218
 => handle_irq_event+0x54/0xb8
 => handle_fasteoi_irq+0xac/0x240
 => handle_irq_desc+0x48/0x68
 => generic_handle_domain_irq+0x24/0x38
 => gic_handle_irq+0x48/0xd8
 => call_on_irq_stack+0x30/0x70
 => do_interrupt_handler+0x88/0x98
 => el1_interrupt+0x34/0x68
 => el1h_64_irq_handler+0x18/0x28
 => el1h_64_irq+0x64/0x68
 => _raw_spin_unlock_irqrestore+0x10/0x58
 => schedule_timeout+0x94/0x1a0
 => wait_for_completion_timeout+0x80/0x160
 => mbox_send_message+0xf8/0x140
 => rpi_firmware_property_list+0x104/0x298
 => rpi_firmware_property+0x78/0xc8
 => get_values_poll+0x58/0x128 [raspberrypi_hwmon]
 => process_one_work+0x158/0x3d0
 => worker_thread+0x2d8/0x3e8
 => kthread+0x11c/0x128
 => ret_from_fork+0x10/0x20
     kworker/0:3-263     [000] d.h1.    62.847520: irq_handler_exit: irq=14 ret=handled
          <idle>-0       [000] d.h1.    62.850953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.851144: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.854952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.855138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.858952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.859138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.862952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.863140: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.866952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.867139: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.870952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.871139: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.874952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    62.875140: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.877980: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    62.877983: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [003] d.h1.    62.878041: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    62.878174: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    62.878176: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    62.878185: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    62.878186: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    62.878313: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [000] d.h..    62.878953: irq_handler_entry: irq=11 name=arch_timer
            bash-766     [003] d.h..    62.878954: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [000] d.h..    62.878968: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    62.878972: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] d.h1.    62.878973: irq_handler_exit: irq=2 ret=handled
            bash-766     [003] d.h..    62.878973: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [000] d.h..    62.879291: irq_handler_entry: irq=29 name=eth0
 systemd-journal-238     [000] d.h..    62.879294: irq_handler_exit: irq=29 ret=handled
          <idle>-0       [001] d.h1.    62.879313: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    62.879317: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [000] d.h..    62.879930: irq_handler_entry: irq=28 name=eth0
 systemd-journal-238     [000] d.h..    62.879931: irq_handler_exit: irq=28 ret=handled
 systemd-journal-238     [000] d.h..    62.882952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    62.882953: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [000] d.h..    62.882964: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    62.882971: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    62.895266: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    62.895268: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.918954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    62.918957: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.922931: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    62.922932: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [001] d.h1.    62.922957: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    62.923093: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    62.923094: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    62.923104: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    62.923105: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    62.923233: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    62.923234: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    62.923239: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.    62.923368: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    62.923494: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    62.923496: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    62.923504: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    62.923690: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    62.923817: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [000] d.h..    62.923897: irq_handler_entry: irq=29 name=eth0
 systemd-journal-238     [000] d.h..    62.923899: irq_handler_exit: irq=29 ret=handled
 systemd-journal-238     [000] d.h..    62.924429: irq_handler_entry: irq=28 name=eth0
 systemd-journal-238     [000] d.h..    62.924431: irq_handler_exit: irq=28 ret=handled
 systemd-journal-238     [000] d.h..    62.926952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    62.926953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    62.926953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    62.926964: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [000] d.h..    62.926967: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    62.926970: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    62.926971: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] d.h1.    62.926972: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.    62.930953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    62.930968: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] d.h1.    62.930969: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNh1.    62.931097: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    62.931098: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    62.931106: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    62.942953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    62.942953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    62.942955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.942956: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] dNH2.    62.943095: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNH2.    62.943106: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    62.943124: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    62.943126: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2.    62.943251: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNH2.    62.943443: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNH2.    62.943444: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2.    62.943455: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    62.966953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    62.966954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    62.966957: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    62.966957: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.038952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    63.038953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    63.038954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    63.038955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    63.038959: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    63.039079: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    63.039080: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    63.039089: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    63.039090: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] d.h1.    63.039104: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    63.039106: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNh1.    63.039214: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    63.039215: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    63.039223: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    63.040557: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    63.040559: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.115921: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    63.115922: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [001] d.h1.    63.115953: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    63.116074: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    63.116075: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] d.h1.    63.116084: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    63.116085: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] dNh1.    63.116210: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    63.116211: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    63.116214: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.    63.116343: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    63.116470: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    63.116471: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    63.116479: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    63.116667: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    63.116792: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [000] d.h..    63.116877: irq_handler_entry: irq=29 name=eth0
 systemd-journal-238     [000] d.h..    63.116879: irq_handler_exit: irq=29 ret=handled
 systemd-journal-238     [000] d.h..    63.117441: irq_handler_entry: irq=28 name=eth0
 systemd-journal-238     [000] d.h..    63.117443: irq_handler_exit: irq=28 ret=handled
 systemd-journal-238     [000] d.h..    63.118952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    63.118953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    63.118953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    63.118964: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [000] d.h..    63.118967: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    63.118970: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    63.118971: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] d.h1.    63.118972: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d.h1.    63.119406: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    63.119408: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    63.130285: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    63.130287: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    63.130952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    63.130953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    63.130955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.130956: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] dNH2.    63.131103: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNH2.    63.131113: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    63.131114: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] d.h1.    63.131136: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    63.131138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNh1.    63.131240: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    63.131241: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    63.131249: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d.h1.    63.134952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    63.134953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    63.134956: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.134956: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.135130: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    63.135132: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    63.135132: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.    63.135291: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    63.138952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    63.139143: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    63.139143: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    63.139144: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    63.142953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.143145: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.146952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.147139: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.150952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.151140: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.154952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.155139: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.158952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.159139: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.162952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.163138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.166952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.167140: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.170952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.171140: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.172121: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    63.172123: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.174952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.175138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.178952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.179141: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.182952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.183139: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.186952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.187139: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.190952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.191139: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.194952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.195139: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.198952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.199138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.202952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.203137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.206952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.207137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.210952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.211137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.214952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.215138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.218952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.219136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.222952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.223138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.224133: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    63.224135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.226952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.227136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.230952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.231139: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.233189: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1.    63.233350: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.    63.233364: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] dNh1.    63.233508: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.    63.234952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.235136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.238952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.239140: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.242952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.243138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.246952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.247139: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.250952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.251137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.254952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.255139: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.258952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.259138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.262952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.263139: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.266952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.267137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.270952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.271138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.274952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.275138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.276122: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    63.276125: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.278952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.279135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.282952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.283137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.286952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.287139: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.290952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.291139: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.294952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.295137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.298952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.299139: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.302952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.303139: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.306953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.307138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.310952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.311138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.314952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.315138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.318952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.319139: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.322952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.323138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.326952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.327138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.328113: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    63.328115: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.330952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.331135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.334952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.335137: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.338952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.339135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.342952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.343136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.346952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.347136: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.350952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.351139: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.354952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.355138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.358952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.359138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.362952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.363138: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [000] d.h..    63.364160: irq_handler_entry: irq=28 name=eth0
 systemd-journal-238     [000] d.h..    63.364164: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [001] d.h1.    63.364216: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    63.364366: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    63.364366: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    63.364376: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.    63.364649: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    63.364777: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    63.364778: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    63.364786: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    63.364981: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    63.365105: irq_handler_exit: irq=2 ret=handled
 systemd-journal-238     [000] d.h1.    63.365194: irq_handler_entry: irq=29 name=eth0
 systemd-journal-238     [000] d.h1.    63.365196: irq_handler_exit: irq=29 ret=handled
          <idle>-0       [002] dnh1.    63.366033: irq_handler_entry: irq=1 name=IPI
          <idle>-0       [002] dNh1.    63.366034: irq_handler_exit: irq=1 ret=handled
 systemd-journal-238     [000] d.h..    63.366159: irq_handler_entry: irq=28 name=eth0
 systemd-journal-238     [000] d.h..    63.366161: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [001] d.h1.    63.366955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    63.366955: irq_handler_entry: irq=11 name=arch_timer
 journal-offline-822     [002] d.h..    63.366956: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [000] d.h2.    63.366956: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    63.366977: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    63.366981: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [000] d.h2.    63.366982: irq_handler_exit: irq=11 ret=handled
 journal-offline-822     [002] d.h..    63.366982: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    63.367004: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    63.367142: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    63.367143: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    63.367151: irq_handler_exit: irq=6 ret=handled
 journal-offline-822     [002] d.h..    63.370955: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [000] d.h..    63.370955: irq_handler_entry: irq=11 name=arch_timer
 journal-offline-822     [002] d.h..    63.370971: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [000] d.h..    63.370974: irq_handler_exit: irq=11 ret=handled
 journal-offline-822     [002] d.h..    63.374953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    63.374956: irq_handler_entry: irq=11 name=arch_timer
 journal-offline-822     [002] d.h..    63.374964: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.374969: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    63.374981: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    63.375124: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    63.375125: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    63.375136: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    63.375136: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    63.375274: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.    63.378538: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    63.378541: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.378952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    63.378953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    63.378958: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNh1.    63.379149: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.380158: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    63.380160: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.382952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    63.382952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    63.382954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNh1.    63.383140: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    63.383145: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    63.383269: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    63.383270: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    63.383277: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d.h1.    63.386952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    63.386952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    63.386954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNh1.    63.387135: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    63.390952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    63.390952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    63.390954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNh1.    63.391139: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    63.391145: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    63.391268: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    63.391269: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    63.391277: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d.h1.    63.394952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    63.394952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    63.394955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNh1.    63.395131: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    63.398952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    63.398952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    63.398954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNh1.    63.399139: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    63.399143: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    63.399267: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    63.399267: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    63.399276: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d.h1.    63.402952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    63.402953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    63.402954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNh1.    63.403132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    63.406952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    63.406953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    63.406954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNh1.    63.407139: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    63.407146: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    63.407270: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    63.407271: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    63.407279: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d.h1.    63.410952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    63.410952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    63.410953: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNh1.    63.411132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    63.414952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    63.414952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    63.414953: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNh1.    63.415139: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    63.415144: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    63.415268: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    63.415268: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    63.415276: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.    63.415288: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    63.415290: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    63.418952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    63.418952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    63.418954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNh1.    63.419132: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    63.419314: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    63.419316: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    63.422952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    63.422952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    63.423131: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNh1.    63.423131: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.426952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    63.427140: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    63.427140: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    63.427142: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    63.430952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] dNh1.    63.431138: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.432138: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    63.432141: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.434150: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    63.434153: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [001] d.h1.    63.434204: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    63.434335: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    63.434336: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    63.434345: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    63.434346: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    63.434471: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d.h1.    63.434619: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    63.434743: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    63.434744: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    63.434752: irq_handler_exit: irq=6 ret=handled
 systemd-journal-238     [000] d.h..    63.434952: irq_handler_entry: irq=11 name=arch_timer
   kworker/u20:1-53      [003] d.h1.    63.434952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    63.434953: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [000] d.h..    63.434965: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    63.434971: irq_handler_entry: irq=2 name=IPI
   kworker/u20:1-53      [003] d.h1.    63.434972: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    63.434973: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    63.435071: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    63.435072: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    63.435084: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] d.h1.    63.435085: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    63.435085: irq_handler_exit: irq=11 ret=handled
 systemd-journal-238     [000] d.h..    63.435190: irq_handler_entry: irq=29 name=eth0
 systemd-journal-238     [000] d.h..    63.435192: irq_handler_exit: irq=29 ret=handled
 systemd-journal-238     [000] d.h..    63.435637: irq_handler_entry: irq=28 name=eth0
 systemd-journal-238     [000] d.h..    63.435639: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [001] d.h1.    63.449123: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    63.449125: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.474956: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    63.474961: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.550953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    63.550955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    63.550959: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    63.551088: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    63.551089: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    63.551099: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    63.551099: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] d.h1.    63.551116: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    63.551118: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNh1.    63.551225: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    63.551226: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    63.551234: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    63.552600: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    63.552602: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.566483: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    63.566484: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.H1.    63.566542: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.H1.    63.566543: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [000] d.h1.    63.567181: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.    63.567346: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.    63.567347: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.    63.567349: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] dNh1.    63.567350: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    63.567514: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] dNh1.    63.567515: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    63.567525: irq_handler_exit: irq=6 ret=handled
 systemd-journal-238     [000] d.h1.    63.567549: irq_handler_entry: irq=40 name=mmc1
 systemd-journal-238     [000] d.h1.    63.567552: irq_handler_exit: irq=40 ret=handled
 systemd-journal-238     [000] d.h1.    63.567553: irq_handler_entry: irq=40 name=mmc0
 systemd-journal-238     [000] d.h1.    63.567553: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    63.570413: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    63.570419: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    63.570419: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    63.570420: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    63.570592: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    63.570594: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    63.570595: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    63.570595: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    63.570596: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    63.570598: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    63.570598: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    63.570599: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.    63.570755: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    63.570882: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    63.570883: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    63.570893: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    63.570893: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] d.h1.    63.570912: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    63.570914: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNh1.    63.571017: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    63.571017: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    63.571034: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] dNh1.    63.571035: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    63.571035: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNh1.    63.571036: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] dNh1.    63.571038: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.    63.571038: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.    63.571039: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.    63.571043: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    63.571158: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    63.571159: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    63.571167: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.    63.574173: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] dNh1.    63.574305: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.    63.574306: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    63.574314: irq_handler_exit: irq=6 ret=handled
 systemd-journal-238     [000] d.h..    63.574325: irq_handler_entry: irq=40 name=mmc1
 systemd-journal-238     [000] d.h..    63.574328: irq_handler_exit: irq=40 ret=handled
 systemd-journal-238     [000] d.h..    63.574328: irq_handler_entry: irq=40 name=mmc0
 systemd-journal-238     [000] d.h..    63.574329: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.    63.574333: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    63.574448: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    63.574449: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    63.574457: irq_handler_exit: irq=6 ret=handled
 systemd-journal-238     [000] d.h..    63.574483: irq_handler_entry: irq=40 name=mmc1
 systemd-journal-238     [000] d.h..    63.574490: irq_handler_exit: irq=40 ret=handled
 systemd-journal-238     [000] d.h..    63.574490: irq_handler_entry: irq=40 name=mmc0
 systemd-journal-238     [000] d.h..    63.574491: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.    63.574494: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    63.574609: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    63.574610: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    63.574618: irq_handler_exit: irq=6 ret=handled
 systemd-journal-238     [000] d.h..    63.574638: irq_handler_entry: irq=40 name=mmc1
 systemd-journal-238     [000] d.h..    63.574641: irq_handler_exit: irq=40 ret=handled
 systemd-journal-238     [000] d.h..    63.574642: irq_handler_entry: irq=40 name=mmc0
 systemd-journal-238     [000] d.h..    63.574642: irq_handler_exit: irq=40 ret=unhandled
 systemd-journal-238     [000] d.h..    63.574643: irq_handler_entry: irq=40 name=mmc1
 systemd-journal-238     [000] d.h..    63.574645: irq_handler_exit: irq=40 ret=handled
 systemd-journal-238     [000] d.h..    63.574645: irq_handler_entry: irq=40 name=mmc0
 systemd-journal-238     [000] d.h..    63.574646: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.    63.574649: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    63.574764: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    63.574764: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    63.574772: irq_handler_exit: irq=6 ret=handled
 systemd-journal-238     [000] d.h..    63.574833: irq_handler_entry: irq=28 name=eth0
 systemd-journal-238     [000] d.h..    63.574836: irq_handler_exit: irq=28 ret=handled
 systemd-journal-238     [000] d.h..    63.574850: irq_handler_entry: irq=40 name=mmc1
 systemd-journal-238     [000] d.h..    63.574856: irq_handler_exit: irq=40 ret=handled
 systemd-journal-238     [000] d.h..    63.574857: irq_handler_entry: irq=40 name=mmc0
 systemd-journal-238     [000] d.h..    63.574857: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [003] d.h1.    63.574861: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [000] d.h..    63.574952: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [000] d.h..    63.574963: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] dNh1.    63.574979: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    63.574980: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    63.574988: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    63.586954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    63.586958: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2.    63.587167: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2.    63.587428: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] dNH2.    63.587429: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2.    63.587443: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] d.h1.    63.602954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    63.602958: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2.    63.603135: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2.    63.603393: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [000] dNH2.    63.603394: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2.    63.603407: irq_handler_exit: irq=6 ret=handled
 systemd-journal-238     [000] d.h1.    63.603431: irq_handler_entry: irq=40 name=mmc1
 systemd-journal-238     [000] d.h1.    63.603434: irq_handler_exit: irq=40 ret=handled
 systemd-journal-238     [000] d.h1.    63.603434: irq_handler_entry: irq=40 name=mmc0
 systemd-journal-238     [000] d.h1.    63.603436: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    63.606671: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    63.606673: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    63.606674: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    63.606674: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    63.606837: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    63.606839: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    63.606839: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] d.h1.    63.606840: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] dNH2.    63.606989: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    63.607249: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] d.h1.    63.607250: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] dNH2.    63.607250: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] dnh1.    63.607268: irq_handler_entry: irq=1 name=IPI
          <idle>-0       [002] dNh1.    63.607269: irq_handler_exit: irq=1 ret=handled
          <idle>-0       [002] d.h1.    63.610269: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    63.610272: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.610952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    63.610971: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    63.610972: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] dNh1.    63.611093: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    63.611094: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    63.611102: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d.h1.    63.618953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    63.618953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    63.618955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    63.618956: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    63.640503: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    63.640505: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.642952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    63.642952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    63.642954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    63.642955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [003] d.h1.    63.652712: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    63.652715: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.680085: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    63.680087: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.710952: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    63.710953: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    63.710954: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] d.h1.    63.710955: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] dNH2.    63.711102: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNH2.    63.711112: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d.h1.    63.711113: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [000] d.h1.    63.711138: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    63.711140: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [002] dNh1.    63.711231: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    63.711232: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    63.711240: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d.h1.    63.712760: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [002] d.h1.    63.712762: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.716970: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    63.716971: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.775204: irq_handler_entry: irq=28 name=eth0
          <idle>-0       [000] d.h1.    63.775207: irq_handler_exit: irq=28 ret=handled
          <idle>-0       [001] d.h1.    63.775250: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    63.775372: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] dNh1.    63.775373: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [001] dNh1.    63.775382: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [002] d.h1.    63.775382: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [002] dNh1.    63.775501: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [002] dNh1.    63.775502: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [002] dNh1.    63.775503: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [003] d.h1.    63.775644: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [003] dNh1.    63.775768: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] dNh1.    63.775769: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [003] dNh1.    63.775777: irq_handler_exit: irq=6 ret=handled
          <idle>-0       [001] d.h1.    63.775945: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    63.776084: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [001] d.h1.    63.776235: irq_handler_entry: irq=2 name=IPI
          <idle>-0       [001] dNh1.    63.776361: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [000] d.h1.    63.776438: irq_handler_entry: irq=29 name=eth0
          <idle>-0       [000] d.h1.    63.776441: irq_handler_exit: irq=29 ret=handled
          <idle>-0       [000] d.h1.    63.776495: irq_handler_entry: irq=29 name=eth0
          <idle>-0       [000] d.h1.    63.776496: irq_handler_exit: irq=29 ret=handled
          <idle>-0       [000] dnh1.    63.776744: irq_handler_entry: irq=1 name=IPI
          <idle>-0       [000] dNh1.    63.776744: irq_handler_exit: irq=1 ret=handled
            bash-823     [000] d.h..    63.777027: irq_handler_entry: irq=28 name=eth0
            bash-823     [000] d.h..    63.777031: irq_handler_exit: irq=28 ret=handled
            bash-823     [000] d.h..    63.777253: irq_handler_entry: irq=40 name=mmc1
            bash-823     [000] d.h..    63.777255: irq_handler_exit: irq=40 ret=unhandled
            bash-823     [000] d.h..    63.777255: irq_handler_entry: irq=40 name=mmc0
            bash-823     [000] d.h..    63.777258: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] d.h1.    63.777275: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [000] d.h1.    63.777280: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [001] d.h1.    63.778954: irq_handler_entry: irq=11 name=arch_timer
 systemd-journal-238     [002] d.h..    63.778954: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [003] d.h1.    63.778955: irq_handler_entry: irq=11 name=arch_timer
          <idle>-0       [001] d.h1.    63.778971: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.778973: irq_handler_entry: irq=2 name=IPI
 systemd-journal-238     [002] d.h..    63.778974: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.778976: irq_handler_exit: irq=2 ret=handled
          <idle>-0       [003] d.h1.    63.778978: irq_handler_exit: irq=11 ret=handled
          <idle>-0       [000] d.h1.    63.778999: irq_handler_entry: irq=40 name=mmc1
          <idle>-0       [000] d.h1.    63.778999: irq_handler_exit: irq=40 ret=unhandled
          <idle>-0       [000] d.h1.    63.779000: irq_handler_entry: irq=40 name=mmc0
          <idle>-0       [000] dNh1.    63.779286: irq_handler_exit: irq=40 ret=handled
          <idle>-0       [000] dNh1.    63.779288: irq_handler_entry: irq=6 name=IPI
          <idle>-0       [000] dNh1.    63.779304: irq_handler_exit: irq=6 ret=handled
