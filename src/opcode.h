#ifndef __OPCODE_H__
#define __OPCODE_H__

enum vm_opcode {
	VM_NOP, 
	VM_LIT16,
	VM_LIT32,
	VM_DUP,
	VM_DROP,
	VM_SWAP,
	VM_PUSH,
	VM_POP,
	VM_LOOP,
	VM_JUMP,
	VM_RETURN,
	VM_GT_JUMP,
	VM_LT_JUMP,
	VM_NE_JUMP,
	VM_EQ_JUMP,
	VM_FETCH,
	VM_STORE,
	VM_ADD,
	VM_SUB,
	VM_MUL,
	VM_DIVMOD,
	VM_AND,
	VM_OR,
	VM_XOR,
	VM_SHL,
	VM_SHR,
	VM_ZERO_EXIT,
	VM_INC,
	VM_DEC,
	VM_IN,
	VM_OUT,
	VM_WAIT,

	VM_DEBUG_NOP,
	VM_HALT,

#if 0
	VM_SHL12_FLAG = 0x1000,
	VM_ADD13_FLAG = 0x2000,
#endif
	VM_LIT14_FLAG = 0x4000,
	VM_CALL_FLAG  = 0x8000,

	OPCODE_N = VM_HALT + 1 + 2,
};


#endif /* __OPCODE_H__ */
