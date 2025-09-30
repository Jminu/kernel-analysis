# tracer: function
#
# entries-in-buffer/entries-written: 76/76   #P:4
#
#                                _-----=> irqs-off/BH-disabled
#                               / _----=> need-resched
#                              | / _---=> hardirq/softirq
#                              || / _--=> preempt-depth
#                              ||| / _-=> migrate-disable
#                              |||| /     delay
#           TASK-PID     CPU#  |||||  TIMESTAMP  FUNCTION
#              | |         |   |||||     |         |
 systemd-journal-238     [000] ..... 145337.841209: copy_process+0x4/0x1518 <-kernel_clone+0xa0/0x470
 systemd-journal-238     [000] ..... 145337.841213: <stack trace>
 => copy_process+0x8/0x1518
 => kernel_clone+0xa0/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [003] ..... 145339.542360: copy_process+0x4/0x1518 <-kernel_clone+0xa0/0x470
 systemd-journal-238     [003] ..... 145339.542365: <stack trace>
 => copy_process+0x8/0x1518
 => kernel_clone+0xa0/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [003] ..... 145340.114591: copy_process+0x4/0x1518 <-kernel_clone+0xa0/0x470
 systemd-journal-238     [003] ..... 145340.114598: <stack trace>
 => copy_process+0x8/0x1518
 => kernel_clone+0xa0/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
        kthreadd-2       [003] ..... 145340.777104: copy_process+0x4/0x1518 <-kernel_clone+0xa0/0x470
        kthreadd-2       [003] ..... 145340.777112: <stack trace>
 => copy_process+0x8/0x1518
 => kernel_clone+0xa0/0x470
 => kernel_thread+0x88/0xc8
 => kthreadd+0x150/0x1d8
 => ret_from_fork+0x10/0x20
 systemd-journal-238     [003] ..... 145341.268983: copy_process+0x4/0x1518 <-kernel_clone+0xa0/0x470
 systemd-journal-238     [003] ..... 145341.268989: <stack trace>
 => copy_process+0x8/0x1518
 => kernel_clone+0xa0/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [003] ..... 145341.605911: copy_process+0x4/0x1518 <-kernel_clone+0xa0/0x470
 systemd-journal-238     [003] ..... 145341.605918: <stack trace>
 => copy_process+0x8/0x1518
 => kernel_clone+0xa0/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [003] ..... 145342.930642: copy_process+0x4/0x1518 <-kernel_clone+0xa0/0x470
 systemd-journal-238     [003] ..... 145342.930648: <stack trace>
 => copy_process+0x8/0x1518
 => kernel_clone+0xa0/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [003] ..... 145343.531725: copy_process+0x4/0x1518 <-kernel_clone+0xa0/0x470
 systemd-journal-238     [003] ..... 145343.531730: <stack trace>
 => copy_process+0x8/0x1518
 => kernel_clone+0xa0/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [003] ..... 145344.675290: copy_process+0x4/0x1518 <-kernel_clone+0xa0/0x470
 systemd-journal-238     [003] ..... 145344.675296: <stack trace>
 => copy_process+0x8/0x1518
 => kernel_clone+0xa0/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [003] ..... 145345.213094: copy_process+0x4/0x1518 <-kernel_clone+0xa0/0x470
 systemd-journal-238     [003] ..... 145345.213100: <stack trace>
 => copy_process+0x8/0x1518
 => kernel_clone+0xa0/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [003] ..... 145346.629389: copy_process+0x4/0x1518 <-kernel_clone+0xa0/0x470
 systemd-journal-238     [003] ..... 145346.629397: <stack trace>
 => copy_process+0x8/0x1518
 => kernel_clone+0xa0/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [003] ..... 145347.133155: copy_process+0x4/0x1518 <-kernel_clone+0xa0/0x470
 systemd-journal-238     [003] ..... 145347.133161: <stack trace>
 => copy_process+0x8/0x1518
 => kernel_clone+0xa0/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [003] ..... 145347.705692: copy_process+0x4/0x1518 <-kernel_clone+0xa0/0x470
 systemd-journal-238     [003] ..... 145347.705698: <stack trace>
 => copy_process+0x8/0x1518
 => kernel_clone+0xa0/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
            bash-134057  [002] ..... 145348.447807: copy_process+0x4/0x1518 <-kernel_clone+0xa0/0x470
            bash-134057  [002] ..... 145348.447814: <stack trace>
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
       forktest1-135208  [001] ..... 145348.449552: copy_process+0x4/0x1518 <-kernel_clone+0xa0/0x470
       forktest1-135208  [001] ..... 145348.449557: <stack trace>
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
 systemd-journal-238     [003] ..... 145348.450847: copy_process+0x4/0x1518 <-kernel_clone+0xa0/0x470
 systemd-journal-238     [003] ..... 145348.450854: <stack trace>
 => copy_process+0x8/0x1518
 => kernel_clone+0xa0/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [000] ..... 145349.294359: copy_process+0x4/0x1518 <-kernel_clone+0xa0/0x470
 systemd-journal-238     [000] ..... 145349.294365: <stack trace>
 => copy_process+0x8/0x1518
 => kernel_clone+0xa0/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [000] ..... 145350.126178: copy_process+0x4/0x1518 <-kernel_clone+0xa0/0x470
 systemd-journal-238     [000] ..... 145350.126185: <stack trace>
 => copy_process+0x8/0x1518
 => kernel_clone+0xa0/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [002] ..... 145351.275462: copy_process+0x4/0x1518 <-kernel_clone+0xa0/0x470
 systemd-journal-238     [002] ..... 145351.275469: <stack trace>
 => copy_process+0x8/0x1518
 => kernel_clone+0xa0/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [002] ..... 145352.258214: copy_process+0x4/0x1518 <-kernel_clone+0xa0/0x470
 systemd-journal-238     [002] ..... 145352.258223: <stack trace>
 => copy_process+0x8/0x1518
 => kernel_clone+0xa0/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [000] ..... 145353.690365: copy_process+0x4/0x1518 <-kernel_clone+0xa0/0x470
 systemd-journal-238     [000] ..... 145353.690371: <stack trace>
 => copy_process+0x8/0x1518
 => kernel_clone+0xa0/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [000] ..... 145354.518550: copy_process+0x4/0x1518 <-kernel_clone+0xa0/0x470
 systemd-journal-238     [000] ..... 145354.518556: <stack trace>
 => copy_process+0x8/0x1518
 => kernel_clone+0xa0/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [002] ..... 145355.112714: copy_process+0x4/0x1518 <-kernel_clone+0xa0/0x470
 systemd-journal-238     [002] ..... 145355.112719: <stack trace>
 => copy_process+0x8/0x1518
 => kernel_clone+0xa0/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [000] ..... 145355.522409: copy_process+0x4/0x1518 <-kernel_clone+0xa0/0x470
 systemd-journal-238     [000] ..... 145355.522415: <stack trace>
 => copy_process+0x8/0x1518
 => kernel_clone+0xa0/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [000] ..... 145356.155220: copy_process+0x4/0x1518 <-kernel_clone+0xa0/0x470
 systemd-journal-238     [000] ..... 145356.155227: <stack trace>
 => copy_process+0x8/0x1518
 => kernel_clone+0xa0/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [002] ..... 145356.516448: copy_process+0x4/0x1518 <-kernel_clone+0xa0/0x470
 systemd-journal-238     [002] ..... 145356.516454: <stack trace>
 => copy_process+0x8/0x1518
 => kernel_clone+0xa0/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [003] ..... 145357.100485: copy_process+0x4/0x1518 <-kernel_clone+0xa0/0x470
 systemd-journal-238     [003] ..... 145357.100491: <stack trace>
 => copy_process+0x8/0x1518
 => kernel_clone+0xa0/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [003] ..... 145357.522221: copy_process+0x4/0x1518 <-kernel_clone+0xa0/0x470
 systemd-journal-238     [003] ..... 145357.522227: <stack trace>
 => copy_process+0x8/0x1518
 => kernel_clone+0xa0/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [002] ..... 145358.055390: copy_process+0x4/0x1518 <-kernel_clone+0xa0/0x470
 systemd-journal-238     [002] ..... 145358.055397: <stack trace>
 => copy_process+0x8/0x1518
 => kernel_clone+0xa0/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [002] ..... 145358.601729: copy_process+0x4/0x1518 <-kernel_clone+0xa0/0x470
 systemd-journal-238     [002] ..... 145358.601735: <stack trace>
 => copy_process+0x8/0x1518
 => kernel_clone+0xa0/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [002] ..... 145359.348719: copy_process+0x4/0x1518 <-kernel_clone+0xa0/0x470
 systemd-journal-238     [002] ..... 145359.348725: <stack trace>
 => copy_process+0x8/0x1518
 => kernel_clone+0xa0/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [002] ..... 145360.000444: copy_process+0x4/0x1518 <-kernel_clone+0xa0/0x470
 systemd-journal-238     [002] ..... 145360.000450: <stack trace>
 => copy_process+0x8/0x1518
 => kernel_clone+0xa0/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [002] ..... 145360.816419: copy_process+0x4/0x1518 <-kernel_clone+0xa0/0x470
 systemd-journal-238     [002] ..... 145360.816424: <stack trace>
 => copy_process+0x8/0x1518
 => kernel_clone+0xa0/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [002] ..... 145361.708467: copy_process+0x4/0x1518 <-kernel_clone+0xa0/0x470
 systemd-journal-238     [002] ..... 145361.708472: <stack trace>
 => copy_process+0x8/0x1518
 => kernel_clone+0xa0/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [002] ..... 145362.293369: copy_process+0x4/0x1518 <-kernel_clone+0xa0/0x470
 systemd-journal-238     [002] ..... 145362.293374: <stack trace>
 => copy_process+0x8/0x1518
 => kernel_clone+0xa0/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [002] ..... 145362.631297: copy_process+0x4/0x1518 <-kernel_clone+0xa0/0x470
 systemd-journal-238     [002] ..... 145362.631304: <stack trace>
 => copy_process+0x8/0x1518
 => kernel_clone+0xa0/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
 systemd-journal-238     [003] ..... 145363.414328: copy_process+0x4/0x1518 <-kernel_clone+0xa0/0x470
 systemd-journal-238     [003] ..... 145363.414335: <stack trace>
 => copy_process+0x8/0x1518
 => kernel_clone+0xa0/0x470
 => __do_sys_clone+0x74/0xb0
 => __arm64_sys_clone+0x28/0x40
 => invoke_syscall+0x50/0x120
 => el0_svc_common.constprop.0+0xc8/0xf0
 => do_el0_svc+0x24/0x38
 => el0_svc+0x30/0x100
 => el0t_64_sync_handler+0x100/0x130
 => el0t_64_sync+0x190/0x198
            bash-134057  [000] ..... 145363.975234: copy_process+0x4/0x1518 <-kernel_clone+0xa0/0x470
            bash-134057  [000] ..... 145363.975244: <stack trace>
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
