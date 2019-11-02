	.file	"Sales_data.cpp"
	.text
	.section .rdata,"dr"
_ZStL19piecewise_construct:
	.space 1
	.section	.text$_ZNK10Sales_data4isbnB5cxx11Ev,"x"
	.linkonce discard
	.align 2
	.globl	_ZNK10Sales_data4isbnB5cxx11Ev
	.def	_ZNK10Sales_data4isbnB5cxx11Ev;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNK10Sales_data4isbnB5cxx11Ev
_ZNK10Sales_data4isbnB5cxx11Ev:
.LFB1068:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	24(%rbp), %rax
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_
	movq	16(%rbp), %rax
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
.lcomm _ZStL8__ioinit,1,1
	.text
	.align 2
	.globl	_ZN10Sales_data7combineERKS_
	.def	_ZN10Sales_data7combineERKS_;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN10Sales_data7combineERKS_
_ZN10Sales_data7combineERKS_:
.LFB1580:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	movq	16(%rbp), %rax
	movl	32(%rax), %edx
	movq	24(%rbp), %rax
	movl	32(%rax), %eax
	addl	%eax, %edx
	movq	16(%rbp), %rax
	movl	%edx, 32(%rax)
	movq	16(%rbp), %rax
	movsd	40(%rax), %xmm1
	movq	24(%rbp), %rax
	movsd	40(%rax), %xmm0
	addsd	%xmm1, %xmm0
	movq	16(%rbp), %rax
	movsd	%xmm0, 40(%rax)
	movq	16(%rbp), %rax
	popq	%rbp
	ret
	.seh_endproc
	.align 2
	.globl	_ZNK10Sales_data9avg_priceEv
	.def	_ZNK10Sales_data9avg_priceEv;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZNK10Sales_data9avg_priceEv
_ZNK10Sales_data9avg_priceEv:
.LFB1581:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	16(%rbp), %rax
	movl	32(%rax), %eax
	testl	%eax, %eax
	je	.L6
	movq	16(%rbp), %rax
	movsd	40(%rax), %xmm1
	movq	16(%rbp), %rax
	movl	32(%rax), %eax
	movl	%eax, %edx
	testq	%rdx, %rdx
	js	.L7
	cvtsi2sdq	%rdx, %xmm0
	jmp	.L8
.L7:
	movq	%rdx, %rax
	shrq	%rax
	andl	$1, %edx
	orq	%rdx, %rax
	cvtsi2sdq	%rax, %xmm0
	addsd	%xmm0, %xmm0
.L8:
	divsd	%xmm0, %xmm1
	movapd	%xmm1, %xmm0
	jmp	.L9
.L6:
	pxor	%xmm0, %xmm0
.L9:
	movq	%xmm0, %rax
	movq	%rax, %xmm0
	popq	%rbp
	ret
	.seh_endproc
	.globl	_Z4readRSiR10Sales_data
	.def	_Z4readRSiR10Sales_data;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z4readRSiR10Sales_data
_Z4readRSiR10Sales_data:
.LFB1582:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$48, %rsp
	.seh_stackalloc	48
	.seh_endprologue
	movq	%rcx, 16(%rbp)
	movq	%rdx, 24(%rbp)
	pxor	%xmm0, %xmm0
	movsd	%xmm0, -8(%rbp)
	movq	24(%rbp), %rax
	movq	%rax, %rdx
	movq	16(%rbp), %rcx
	call	_ZStrsIcSt11char_traitsIcESaIcEERSt13basic_istreamIT_T0_ES7_RNSt7__cxx1112basic_stringIS4_S5_T1_EE
	movq	%rax, %rcx
	movq	24(%rbp), %rax
	addq	$32, %rax
	movq	%rax, %rdx
	call	_ZNSirsERj
	movq	%rax, %rcx
	leaq	-8(%rbp), %rax
	movq	%rax, %rdx
	call	_ZNSirsERd
	movq	24(%rbp), %rax
	movl	32(%rax), %eax
	movl	%eax, %edx
	testq	%rdx, %rdx
	js	.L11
	cvtsi2sdq	%rdx, %xmm0
	jmp	.L12
.L11:
	movq	%rdx, %rax
	shrq	%rax
	andl	$1, %edx
	orq	%rdx, %rax
	cvtsi2sdq	%rax, %xmm0
	addsd	%xmm0, %xmm0
.L12:
	movsd	-8(%rbp), %xmm1
	mulsd	%xmm1, %xmm0
	movq	24(%rbp), %rax
	movsd	%xmm0, 40(%rax)
	movq	16(%rbp), %rax
	addq	$48, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section .rdata,"dr"
.LC1:
	.ascii " \0"
	.text
	.globl	_Z5printRSoRK10Sales_data
	.def	_Z5printRSoRK10Sales_data;	.scl	2;	.type	32;	.endef
	.seh_proc	_Z5printRSoRK10Sales_data
_Z5printRSoRK10Sales_data:
.LFB1583:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$72, %rsp
	.seh_stackalloc	72
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, -32(%rbp)
	movq	%rdx, -24(%rbp)
	leaq	-96(%rbp), %rax
	movq	-24(%rbp), %rdx
	movq	%rax, %rcx
.LEHB0:
	call	_ZNK10Sales_data4isbnB5cxx11Ev
.LEHE0:
	leaq	-96(%rbp), %rax
	movq	%rax, %rdx
	movq	-32(%rbp), %rcx
.LEHB1:
	call	_ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE
	leaq	.LC1(%rip), %rdx
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rcx
	movq	-24(%rbp), %rax
	movl	32(%rax), %eax
	movl	%eax, %edx
	call	_ZNSolsEj
	leaq	.LC1(%rip), %rdx
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rdx
	movq	-24(%rbp), %rax
	movsd	40(%rax), %xmm0
	movapd	%xmm0, %xmm1
	movq	%rdx, %rcx
	call	_ZNSolsEd
	leaq	.LC1(%rip), %rdx
	movq	%rax, %rcx
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc
	movq	%rax, %rbx
	movq	-24(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNK10Sales_data9avg_priceEv
	movq	%xmm0, %rax
	movq	%rax, %xmm1
	movq	%rbx, %rcx
	call	_ZNSolsEd
.LEHE1:
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	movq	-32(%rbp), %rax
	jmp	.L18
.L17:
	movq	%rax, %rbx
	leaq	-96(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	movq	%rbx, %rax
	movq	%rax, %rcx
.LEHB2:
	call	_Unwind_Resume
.LEHE2:
.L18:
	addq	$72, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.def	__gxx_personality_seh0;	.scl	2;	.type	32;	.endef
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
.LLSDA1583:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1583-.LLSDACSB1583
.LLSDACSB1583:
	.uleb128 .LEHB0-.LFB1583
	.uleb128 .LEHE0-.LEHB0
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB1-.LFB1583
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L17-.LFB1583
	.uleb128 0
	.uleb128 .LEHB2-.LFB1583
	.uleb128 .LEHE2-.LEHB2
	.uleb128 0
	.uleb128 0
.LLSDACSE1583:
	.text
	.seh_endproc
	.align 2
	.globl	_ZN10Sales_dataC2ERSi
	.def	_ZN10Sales_dataC2ERSi;	.scl	2;	.type	32;	.endef
	.seh_proc	_ZN10Sales_dataC2ERSi
_ZN10Sales_dataC2ERSi:
.LFB1585:
	pushq	%rbp
	.seh_pushreg	%rbp
	pushq	%rbx
	.seh_pushreg	%rbx
	subq	$40, %rsp
	.seh_stackalloc	40
	leaq	128(%rsp), %rbp
	.seh_setframe	%rbp, 128
	.seh_endprologue
	movq	%rcx, -64(%rbp)
	movq	%rdx, -56(%rbp)
	movq	-64(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1Ev
	movq	-64(%rbp), %rax
	movl	$0, 32(%rax)
	movq	-64(%rbp), %rax
	pxor	%xmm0, %xmm0
	movsd	%xmm0, 40(%rax)
	movq	-56(%rbp), %rax
	movq	-64(%rbp), %rdx
	movq	%rax, %rcx
.LEHB3:
	call	_Z4readRSiR10Sales_data
.LEHE3:
	jmp	.L22
.L21:
	movq	%rax, %rbx
	movq	-64(%rbp), %rax
	movq	%rax, %rcx
	call	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev
	movq	%rbx, %rax
	movq	%rax, %rcx
.LEHB4:
	call	_Unwind_Resume
	nop
.LEHE4:
.L22:
	addq	$40, %rsp
	popq	%rbx
	popq	%rbp
	ret
	.seh_handler	__gxx_personality_seh0, @unwind, @except
	.seh_handlerdata
.LLSDA1585:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1585-.LLSDACSB1585
.LLSDACSB1585:
	.uleb128 .LEHB3-.LFB1585
	.uleb128 .LEHE3-.LEHB3
	.uleb128 .L21-.LFB1585
	.uleb128 0
	.uleb128 .LEHB4-.LFB1585
	.uleb128 .LEHE4-.LEHB4
	.uleb128 0
	.uleb128 0
.LLSDACSE1585:
	.text
	.seh_endproc
	.globl	_ZN10Sales_dataC1ERSi
	.def	_ZN10Sales_dataC1ERSi;	.scl	2;	.type	32;	.endef
	.set	_ZN10Sales_dataC1ERSi,_ZN10Sales_dataC2ERSi
	.def	__tcf_0;	.scl	3;	.type	32;	.endef
	.seh_proc	__tcf_0
__tcf_0:
.LFB2079:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	leaq	_ZStL8__ioinit(%rip), %rcx
	call	_ZNSt8ios_base4InitD1Ev
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	_Z41__static_initialization_and_destruction_0ii;	.scl	3;	.type	32;	.endef
	.seh_proc	_Z41__static_initialization_and_destruction_0ii
_Z41__static_initialization_and_destruction_0ii:
.LFB2078:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movl	%ecx, 16(%rbp)
	movl	%edx, 24(%rbp)
	cmpl	$1, 16(%rbp)
	jne	.L26
	cmpl	$65535, 24(%rbp)
	jne	.L26
	leaq	_ZStL8__ioinit(%rip), %rcx
	call	_ZNSt8ios_base4InitC1Ev
	leaq	__tcf_0(%rip), %rcx
	call	atexit
.L26:
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.def	_GLOBAL__sub_I__ZN10Sales_data7combineERKS_;	.scl	3;	.type	32;	.endef
	.seh_proc	_GLOBAL__sub_I__ZN10Sales_data7combineERKS_
_GLOBAL__sub_I__ZN10Sales_data7combineERKS_:
.LFB2080:
	pushq	%rbp
	.seh_pushreg	%rbp
	movq	%rsp, %rbp
	.seh_setframe	%rbp, 0
	subq	$32, %rsp
	.seh_stackalloc	32
	.seh_endprologue
	movl	$65535, %edx
	movl	$1, %ecx
	call	_Z41__static_initialization_and_destruction_0ii
	nop
	addq	$32, %rsp
	popq	%rbp
	ret
	.seh_endproc
	.section	.ctors,"w"
	.align 8
	.quad	_GLOBAL__sub_I__ZN10Sales_data7combineERKS_
	.ident	"GCC: (x86_64-posix-seh-rev0, Built by MinGW-W64 project) 8.1.0"
	.def	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1ERKS4_;	.scl	2;	.type	32;	.endef
	.def	_ZStrsIcSt11char_traitsIcESaIcEERSt13basic_istreamIT_T0_ES7_RNSt7__cxx1112basic_stringIS4_S5_T1_EE;	.scl	2;	.type	32;	.endef
	.def	_ZNSirsERj;	.scl	2;	.type	32;	.endef
	.def	_ZNSirsERd;	.scl	2;	.type	32;	.endef
	.def	_ZStlsIcSt11char_traitsIcESaIcEERSt13basic_ostreamIT_T0_ES7_RKNSt7__cxx1112basic_stringIS4_S5_T1_EE;	.scl	2;	.type	32;	.endef
	.def	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc;	.scl	2;	.type	32;	.endef
	.def	_ZNSolsEj;	.scl	2;	.type	32;	.endef
	.def	_ZNSolsEd;	.scl	2;	.type	32;	.endef
	.def	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEED1Ev;	.scl	2;	.type	32;	.endef
	.def	_Unwind_Resume;	.scl	2;	.type	32;	.endef
	.def	_ZNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEC1Ev;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitD1Ev;	.scl	2;	.type	32;	.endef
	.def	_ZNSt8ios_base4InitC1Ev;	.scl	2;	.type	32;	.endef
	.def	atexit;	.scl	2;	.type	32;	.endef
