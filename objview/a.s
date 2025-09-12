
vmlinux:     file format elf64-littleaarch64


Disassembly of section .text:

ffffffc080dc1458 <schedule>:
ffffffc080dc1458:	d503201f 	nop
ffffffc080dc145c:	d503201f 	nop
ffffffc080dc1460:	d503233f 	paciasp
ffffffc080dc1464:	a9be7bfd 	stp	x29, x30, [sp, #-32]!
ffffffc080dc1468:	910003fd 	mov	x29, sp
ffffffc080dc146c:	a90153f3 	stp	x19, x20, [sp, #16]
ffffffc080dc1470:	d5384114 	mrs	x20, sp_el0
ffffffc080dc1474:	b9401a80 	ldr	w0, [x20, #24]
ffffffc080dc1478:	350003e0 	cbnz	w0, ffffffc080dc14f4 <schedule+0x9c>
ffffffc080dc147c:	d5384113 	mrs	x19, sp_el0
ffffffc080dc1480:	b9400a60 	ldr	w0, [x19, #8]
ffffffc080dc1484:	11000400 	add	w0, w0, #0x1
ffffffc080dc1488:	b9000a60 	str	w0, [x19, #8]
ffffffc080dc148c:	52800000 	mov	w0, #0x0                   	// #0
ffffffc080dc1490:	97fffd1a 	bl	ffffffc080dc08f8 <__schedule>
ffffffc080dc1494:	b9400a60 	ldr	w0, [x19, #8]
ffffffc080dc1498:	51000400 	sub	w0, w0, #0x1
ffffffc080dc149c:	b9000a60 	str	w0, [x19, #8]
ffffffc080dc14a0:	f9400260 	ldr	x0, [x19]
ffffffc080dc14a4:	370ffee0 	tbnz	w0, #1, ffffffc080dc1480 <schedule+0x28>
ffffffc080dc14a8:	b9402e81 	ldr	w1, [x20, #44]
ffffffc080dc14ac:	121c6420 	and	w0, w1, #0x3ffffff0
ffffffc080dc14b0:	12032000 	and	w0, w0, #0xe000003f
ffffffc080dc14b4:	34000180 	cbz	w0, ffffffc080dc14e4 <schedule+0x8c>
ffffffc080dc14b8:	36e80121 	tbz	w1, #29, ffffffc080dc14dc <schedule+0x84>
ffffffc080dc14bc:	f9445280 	ldr	x0, [x20, #2208]
ffffffc080dc14c0:	b4000040 	cbz	x0, ffffffc080dc14c8 <schedule+0x70>
ffffffc080dc14c4:	f900101f 	str	xzr, [x0, #32]
ffffffc080dc14c8:	d5384101 	mrs	x1, sp_el0
ffffffc080dc14cc:	b9402c20 	ldr	w0, [x1, #44]
ffffffc080dc14d0:	12027800 	and	w0, w0, #0xdfffffff
ffffffc080dc14d4:	b9002c20 	str	w0, [x1, #44]
ffffffc080dc14d8:	b9402e81 	ldr	w1, [x20, #44]
ffffffc080dc14dc:	37280221 	tbnz	w1, #5, ffffffc080dc1520 <schedule+0xc8>
ffffffc080dc14e0:	372002c1 	tbnz	w1, #4, ffffffc080dc1538 <schedule+0xe0>
ffffffc080dc14e4:	a94153f3 	ldp	x19, x20, [sp, #16]
ffffffc080dc14e8:	a8c27bfd 	ldp	x29, x30, [sp], #32
ffffffc080dc14ec:	d50323bf 	autiasp
ffffffc080dc14f0:	d65f03c0 	ret
ffffffc080dc14f4:	b9402e80 	ldr	w0, [x20, #44]
ffffffc080dc14f8:	37280320 	tbnz	w0, #5, ffffffc080dc155c <schedule+0x104>
ffffffc080dc14fc:	372002a0 	tbnz	w0, #4, ffffffc080dc1550 <schedule+0xf8>
ffffffc080dc1500:	d5384100 	mrs	x0, sp_el0
ffffffc080dc1504:	b9401800 	ldr	w0, [x0, #24]
ffffffc080dc1508:	37600300 	tbnz	w0, #12, ffffffc080dc1568 <schedule+0x110>
ffffffc080dc150c:	f9445280 	ldr	x0, [x20, #2208]
ffffffc080dc1510:	b4fffb60 	cbz	x0, ffffffc080dc147c <schedule+0x24>
ffffffc080dc1514:	52800021 	mov	w1, #0x1                   	// #1
ffffffc080dc1518:	97e34fc0 	bl	ffffffc080695418 <__blk_flush_plug>
ffffffc080dc151c:	17ffffd8 	b	ffffffc080dc147c <schedule+0x24>
ffffffc080dc1520:	aa1403e0 	mov	x0, x20
ffffffc080dc1524:	97cc1221 	bl	ffffffc0800c5da8 <wq_worker_running>
ffffffc080dc1528:	a94153f3 	ldp	x19, x20, [sp, #16]
ffffffc080dc152c:	a8c27bfd 	ldp	x29, x30, [sp], #32
ffffffc080dc1530:	d50323bf 	autiasp
ffffffc080dc1534:	d65f03c0 	ret
ffffffc080dc1538:	aa1403e0 	mov	x0, x20
ffffffc080dc153c:	97e4e877 	bl	ffffffc0806fb718 <io_wq_worker_running>
ffffffc080dc1540:	a94153f3 	ldp	x19, x20, [sp, #16]
ffffffc080dc1544:	a8c27bfd 	ldp	x29, x30, [sp], #32
ffffffc080dc1548:	d50323bf 	autiasp
ffffffc080dc154c:	d65f03c0 	ret
ffffffc080dc1550:	aa1403e0 	mov	x0, x20
ffffffc080dc1554:	97e4e89b 	bl	ffffffc0806fb7c0 <io_wq_worker_sleeping>
ffffffc080dc1558:	17ffffea 	b	ffffffc080dc1500 <schedule+0xa8>
ffffffc080dc155c:	aa1403e0 	mov	x0, x20
ffffffc080dc1560:	97cc123c 	bl	ffffffc0800c5e50 <wq_worker_sleeping>
ffffffc080dc1564:	17ffffe7 	b	ffffffc080dc1500 <schedule+0xa8>
ffffffc080dc1568:	f0006321 	adrp	x1, ffffffc081a28000 <event_class_handshake_alert_class+0x18>
ffffffc080dc156c:	91083421 	add	x1, x1, #0x20d
ffffffc080dc1570:	39401c20 	ldrb	w0, [x1, #7]
ffffffc080dc1574:	35fffcc0 	cbnz	w0, ffffffc080dc150c <schedule+0xb4>
ffffffc080dc1578:	52800022 	mov	w2, #0x1                   	// #1
ffffffc080dc157c:	b0001b60 	adrp	x0, ffffffc08112e000 <kallsyms_seqs_of_names+0x5c1f0>
ffffffc080dc1580:	91126000 	add	x0, x0, #0x498
ffffffc080dc1584:	39001c22 	strb	w2, [x1, #7]
ffffffc080dc1588:	97cb67c8 	bl	ffffffc08009b4a8 <__warn_printk>
ffffffc080dc158c:	d4210000 	brk	#0x800
ffffffc080dc1590:	17ffffdf 	b	ffffffc080dc150c <schedule+0xb4>
ffffffc080dc1594:	d503201f 	nop
ffffffc080dc1598:	d503201f 	nop
ffffffc080dc159c:	d503201f 	nop
