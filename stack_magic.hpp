#pragma once

#define SM_PUSH_ALL_REGISTERS() asm volatile ("push r0;\n push r1;\n push r2;\n push r3;\n push r4;\n push r5;\n push r6;\n push r7;\n push r8;\n push r9;\n push r10;\n push r11;\n push r12;\n push r13;\n push r14;\n push r15;\n push r16;\n push r17;\n push r18;\n push r19;\n push r20;\n push r21;\n push r22;\n push r23;\n push r24;\n push r25;\n push r26;\n push r27;\n push r28;\n push r29;\n push r30;\n push r31;\n ");

#define SM_POP_ALL_REGISTERS() asm volatile ("pop r31;\n pop r30;\n pop r29;\n pop r28;\n pop r27;\n pop r26;\n pop r25;\n pop r24;\n pop r23;\n pop r22;\n pop r21;\n pop r20;\n pop r19;\n pop r18;\n pop r17;\n pop r16;\n pop r15;\n pop r14;\n pop r13;\n pop r12;\n pop r11;\n pop r10;\n pop r9;\n pop r8;\n pop r7;\n pop r6;\n pop r5;\n pop r4;\n pop r3;\n pop r2;\n pop r1;\n pop r0;\n ");

#define SM_SAVE_CONTEXT() SM_PUSH_ALL_REGISTERS() asm("IN r0, __SREG__;\n push r0;");

#define SM_RESTORE_CONTEXT() asm("pop r0;\n OUT __SREG__, r0;"); SM_POP_ALL_REGISTERS()