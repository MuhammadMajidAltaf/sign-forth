#include <stdio.h>
#include "sign_forth.h"
#include "opcode.h"
#include "sign_forth_private.h"


#define OPCODE(__opcode__) do { \
	image[n++] = __opcode__; \
} while(0);

int
main(int argc, char **argv)
{
	init_image();
	int n;

	n = 0;
	OPCODE(VM_LIT16);
	OPCODE(0xFFFF);
	OPCODE(VM_DUP);
	OPCODE(VM_NOP);
	OPCODE(VM_LIT32);
	OPCODE(0xFFFE);
	OPCODE(0xFFFD);
	OPCODE(VM_DROP);
	OPCODE(VM_LIT16);
	OPCODE(0x1209);
	OPCODE(VM_SWAP);
	OPCODE(VM_DEBUG_NOP);
	OPCODE(VM_PUSH);
	OPCODE(VM_POP);
	OPCODE(VM_LIT16);
	OPCODE(2);
	OPCODE(VM_NOP);
	OPCODE(VM_LOOP);
	OPCODE(17);
	OPCODE(VM_LIT16);
	OPCODE(24);
	OPCODE(VM_PUSH);
	OPCODE(VM_DEBUG_NOP);
	OPCODE(VM_JUMP);
	OPCODE(0x100);
	OPCODE(VM_LIT16);
	OPCODE(0x1103);
	OPCODE(VM_LIT16);
	OPCODE(0x1100);
	OPCODE(VM_GT_JUMP);
	OPCODE(0x200);
	OPCODE(VM_HALT);

	n = 0x100;
	OPCODE(VM_DEBUG_NOP);
	OPCODE(VM_LIT16);
	OPCODE(0x0529);
	OPCODE(VM_RETURN);

	n = 0x200;
	OPCODE(VM_LIT16);
	OPCODE(0x0817);
	OPCODE(VM_LIT16);
	OPCODE(0x0818);
	OPCODE(VM_GT_JUMP);
	OPCODE(0x200);
	OPCODE(VM_LIT16);
	OPCODE(0x0817);
	OPCODE(VM_LIT16);
	OPCODE(0x0818);
	OPCODE(VM_LT_JUMP);
	OPCODE(0x300);
	OPCODE(VM_HALT);

	n = 0x300;
	OPCODE(VM_LIT16);
	OPCODE(0x0817);
	OPCODE(VM_LIT16);
	OPCODE(0x0816);
	OPCODE(VM_LT_JUMP);
	OPCODE(0x300);
	OPCODE(VM_LIT16);
	OPCODE(0x0817);

	OPCODE(VM_LIT16);
	OPCODE(VM_LIT16);

	OPCODE(VM_LIT16);
	OPCODE(0x0500);

	OPCODE(VM_STORE);

	OPCODE(VM_LIT16);
	OPCODE(0x1234);

	OPCODE(VM_LIT16);
	OPCODE(0x0501);

	OPCODE(VM_STORE);

	OPCODE(VM_JUMP);
	OPCODE(0x500);

	OPCODE(VM_HALT);

	n = 0x502;
	OPCODE(VM_LIT16);
	OPCODE(4);
	OPCODE(VM_LIT32);
	OPCODE(0xFFFC);
	OPCODE(5);
	OPCODE(VM_ADD);
	OPCODE(VM_LIT32);
	OPCODE(0xFFFC);
	OPCODE(5);
	OPCODE(VM_SUB);

	OPCODE(VM_HALT);

	run_image();
}
