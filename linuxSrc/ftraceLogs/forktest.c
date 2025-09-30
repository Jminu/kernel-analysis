# tracer: function
#
# entries-in-buffer/entries-written: 82/82   #P:4
#
#                                _-----=> irqs-off/BH-disabled
#                               / _----=> need-resched
#                              | / _---=> hardirq/softirq
#                              || / _--=> preempt-depth
#                              ||| / _-=> migrate-disable
#                              |||| /     delay
#           TASK-PID     CPU#  |||||  TIMESTAMP  FUNCTION
#              | |         |   |||||     |         |
 systemd-journal-238     [000] ..... 146210.963366: wake_up_new_task+0x4/0x2f0 <-kernel_clone+0x10c/0x470
 systemd-journal-238     [000] ..... 146210.963370: <stack trace>
 => wake_up_new_task+0x8/0x2f0
 => kernel_clone+0x10c/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [001] ..... 146212.518712: wake_up_new_task+0x4/0x2f0 <-kernel_clone+0x10c/0x470
 systemd-journal-238     [001] ..... 146212.518717: <stack trace>
 => wake_up_new_task+0x8/0x2f0
 => kernel_clone+0x10c/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [001] ..... 146213.235790: wake_up_new_task+0x4/0x2f0 <-kernel_clone+0x10c/0x470
 systemd-journal-238     [001] ..... 146213.235795: <stack trace>
 => wake_up_new_task+0x8/0x2f0
 => kernel_clone+0x10c/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [001] ..... 146214.171074: wake_up_new_task+0x4/0x2f0 <-kernel_clone+0x10c/0x470
 systemd-journal-238     [001] ..... 146214.171079: <stack trace>
 => wake_up_new_task+0x8/0x2f0
 => kernel_clone+0x10c/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [001] ..... 146214.516830: wake_up_new_task+0x4/0x2f0 <-kernel_clone+0x10c/0x470
 systemd-journal-238     [001] ..... 146214.516835: <stack trace>
 => wake_up_new_task+0x8/0x2f0
 => kernel_clone+0x10c/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [001] ..... 146215.236891: wake_up_new_task+0x4/0x2f0 <-kernel_clone+0x10c/0x470
 systemd-journal-238     [001] ..... 146215.236896: <stack trace>
 => wake_up_new_task+0x8/0x2f0
 => kernel_clone+0x10c/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [001] ..... 146215.751556: wake_up_new_task+0x4/0x2f0 <-kernel_clone+0x10c/0x470
 systemd-journal-238     [001] ..... 146215.751561: <stack trace>
 => wake_up_new_task+0x8/0x2f0
 => kernel_clone+0x10c/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [003] ..... 146216.411713: wake_up_new_task+0x4/0x2f0 <-kernel_clone+0x10c/0x470
 systemd-journal-238     [003] ..... 146216.411718: <stack trace>
 => wake_up_new_task+0x8/0x2f0
 => kernel_clone+0x10c/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [003] ..... 146217.003943: wake_up_new_task+0x4/0x2f0 <-kernel_clone+0x10c/0x470
 systemd-journal-238     [003] ..... 146217.003948: <stack trace>
 => wake_up_new_task+0x8/0x2f0
 => kernel_clone+0x10c/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [003] ..... 146217.510457: wake_up_new_task+0x4/0x2f0 <-kernel_clone+0x10c/0x470
 systemd-journal-238     [003] ..... 146217.510462: <stack trace>
 => wake_up_new_task+0x8/0x2f0
 => kernel_clone+0x10c/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
            bash-135838  [002] ..... 146217.545071: wake_up_new_task+0x4/0x2f0 <-kernel_clone+0x354/0x470
            bash-135838  [002] ..... 146217.545076: <stack trace>
 => wake_up_new_task+0x8/0x2f0
 => kernel_clone+0x354/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [003] ..... 146218.451497: wake_up_new_task+0x4/0x2f0 <-kernel_clone+0x10c/0x470
 systemd-journal-238     [003] ..... 146218.451502: <stack trace>
 => wake_up_new_task+0x8/0x2f0
 => kernel_clone+0x10c/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [002] ..... 146219.151837: wake_up_new_task+0x4/0x2f0 <-kernel_clone+0x10c/0x470
 systemd-journal-238     [002] ..... 146219.151844: <stack trace>
 => wake_up_new_task+0x8/0x2f0
 => kernel_clone+0x10c/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [002] ..... 146219.916809: wake_up_new_task+0x4/0x2f0 <-kernel_clone+0x10c/0x470
 systemd-journal-238     [002] ..... 146219.916814: <stack trace>
 => wake_up_new_task+0x8/0x2f0
 => kernel_clone+0x10c/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [002] ..... 146220.905909: wake_up_new_task+0x4/0x2f0 <-kernel_clone+0x10c/0x470
 systemd-journal-238     [002] ..... 146220.905914: <stack trace>
 => wake_up_new_task+0x8/0x2f0
 => kernel_clone+0x10c/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [002] ..... 146221.431095: wake_up_new_task+0x4/0x2f0 <-kernel_clone+0x10c/0x470
 systemd-journal-238     [002] ..... 146221.431101: <stack trace>
 => wake_up_new_task+0x8/0x2f0
 => kernel_clone+0x10c/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [002] ..... 146222.133044: wake_up_new_task+0x4/0x2f0 <-kernel_clone+0x10c/0x470
 systemd-journal-238     [002] ..... 146222.133050: <stack trace>
 => wake_up_new_task+0x8/0x2f0
 => kernel_clone+0x10c/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [002] ..... 146222.687709: wake_up_new_task+0x4/0x2f0 <-kernel_clone+0x10c/0x470
 systemd-journal-238     [002] ..... 146222.687715: <stack trace>
 => wake_up_new_task+0x8/0x2f0
 => kernel_clone+0x10c/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
            bash-135838  [001] ..... 146223.093549: wake_up_new_task+0x4/0x2f0 <-kernel_clone+0x354/0x470
            bash-135838  [001] ..... 146223.093554: <stack trace>
 => wake_up_new_task+0x8/0x2f0
 => kernel_clone+0x354/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
       forktest1-136514  [003] ..... 146223.095056: wake_up_new_task+0x4/0x2f0 <-kernel_clone+0x354/0x470
       forktest1-136514  [003] ..... 146223.095060: <stack trace>
 => wake_up_new_task+0x8/0x2f0
 => kernel_clone+0x354/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [002] ..... 146223.127714: wake_up_new_task+0x4/0x2f0 <-kernel_clone+0x10c/0x470
 systemd-journal-238     [002] ..... 146223.127719: <stack trace>
 => wake_up_new_task+0x8/0x2f0
 => kernel_clone+0x10c/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [002] ..... 146223.671924: wake_up_new_task+0x4/0x2f0 <-kernel_clone+0x10c/0x470
 systemd-journal-238     [002] ..... 146223.671929: <stack trace>
 => wake_up_new_task+0x8/0x2f0
 => kernel_clone+0x10c/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [002] ..... 146224.395198: wake_up_new_task+0x4/0x2f0 <-kernel_clone+0x10c/0x470
 systemd-journal-238     [002] ..... 146224.395203: <stack trace>
 => wake_up_new_task+0x8/0x2f0
 => kernel_clone+0x10c/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [001] ..... 146226.461756: wake_up_new_task+0x4/0x2f0 <-kernel_clone+0x10c/0x470
 systemd-journal-238     [001] ..... 146226.461764: <stack trace>
 => wake_up_new_task+0x8/0x2f0
 => kernel_clone+0x10c/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [001] ..... 146227.527960: wake_up_new_task+0x4/0x2f0 <-kernel_clone+0x10c/0x470
 systemd-journal-238     [001] ..... 146227.527966: <stack trace>
 => wake_up_new_task+0x8/0x2f0
 => kernel_clone+0x10c/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [001] ..... 146228.096133: wake_up_new_task+0x4/0x2f0 <-kernel_clone+0x10c/0x470
 systemd-journal-238     [001] ..... 146228.096142: <stack trace>
 => wake_up_new_task+0x8/0x2f0
 => kernel_clone+0x10c/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [001] ..... 146228.843380: wake_up_new_task+0x4/0x2f0 <-kernel_clone+0x10c/0x470
 systemd-journal-238     [001] ..... 146228.843385: <stack trace>
 => wake_up_new_task+0x8/0x2f0
 => kernel_clone+0x10c/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [003] ..... 146230.330387: wake_up_new_task+0x4/0x2f0 <-kernel_clone+0x10c/0x470
 systemd-journal-238     [003] ..... 146230.330391: <stack trace>
 => wake_up_new_task+0x8/0x2f0
 => kernel_clone+0x10c/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [002] ..... 146231.763219: wake_up_new_task+0x4/0x2f0 <-kernel_clone+0x10c/0x470
 systemd-journal-238     [002] ..... 146231.763224: <stack trace>
 => wake_up_new_task+0x8/0x2f0
 => kernel_clone+0x10c/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
            bash-135838  [001] ..... 146232.035213: wake_up_new_task+0x4/0x2f0 <-kernel_clone+0x354/0x470
            bash-135838  [001] ..... 146232.035218: <stack trace>
 => wake_up_new_task+0x8/0x2f0
 => kernel_clone+0x354/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [002] ..... 146232.309423: wake_up_new_task+0x4/0x2f0 <-kernel_clone+0x10c/0x470
 systemd-journal-238     [002] ..... 146232.309428: <stack trace>
 => wake_up_new_task+0x8/0x2f0
 => kernel_clone+0x10c/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [002] ..... 146234.023407: wake_up_new_task+0x4/0x2f0 <-kernel_clone+0x10c/0x470
 systemd-journal-238     [002] ..... 146234.023412: <stack trace>
 => wake_up_new_task+0x8/0x2f0
 => kernel_clone+0x10c/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [002] ..... 146234.389375: wake_up_new_task+0x4/0x2f0 <-kernel_clone+0x10c/0x470
 systemd-journal-238     [002] ..... 146234.389381: <stack trace>
 => wake_up_new_task+0x8/0x2f0
 => kernel_clone+0x10c/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [002] ..... 146236.020698: wake_up_new_task+0x4/0x2f0 <-kernel_clone+0x10c/0x470
 systemd-journal-238     [002] ..... 146236.020703: <stack trace>
 => wake_up_new_task+0x8/0x2f0
 => kernel_clone+0x10c/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [002] ..... 146236.529471: wake_up_new_task+0x4/0x2f0 <-kernel_clone+0x10c/0x470
 systemd-journal-238     [002] ..... 146236.529476: <stack trace>
 => wake_up_new_task+0x8/0x2f0
 => kernel_clone+0x10c/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [002] ..... 146237.260818: wake_up_new_task+0x4/0x2f0 <-kernel_clone+0x10c/0x470
 systemd-journal-238     [002] ..... 146237.260824: <stack trace>
 => wake_up_new_task+0x8/0x2f0
 => kernel_clone+0x10c/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [002] ..... 146237.977347: wake_up_new_task+0x4/0x2f0 <-kernel_clone+0x10c/0x470
 systemd-journal-238     [002] ..... 146237.977352: <stack trace>
 => wake_up_new_task+0x8/0x2f0
 => kernel_clone+0x10c/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [002] ..... 146238.463026: wake_up_new_task+0x4/0x2f0 <-kernel_clone+0x10c/0x470
 systemd-journal-238     [002] ..... 146238.463031: <stack trace>
 => wake_up_new_task+0x8/0x2f0
 => kernel_clone+0x10c/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [000] ..... 146239.269999: wake_up_new_task+0x4/0x2f0 <-kernel_clone+0x10c/0x470
 systemd-journal-238     [000] ..... 146239.270005: <stack trace>
 => wake_up_new_task+0x8/0x2f0
 => kernel_clone+0x10c/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [002] ..... 146240.063830: wake_up_new_task+0x4/0x2f0 <-kernel_clone+0x10c/0x470
 systemd-journal-238     [002] ..... 146240.063835: <stack trace>
 => wake_up_new_task+0x8/0x2f0
 => kernel_clone+0x10c/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
            bash-135838  [000] ..... 146240.823696: wake_up_new_task+0x4/0x2f0 <-kernel_clone+0x354/0x470
            bash-135838  [000] ..... 146240.823702: <stack trace>
 => wake_up_new_task+0x8/0x2f0
 => kernel_clone+0x354/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0x48/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
