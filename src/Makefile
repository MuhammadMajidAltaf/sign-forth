CFLAGS+=-DDO_STATS

all: opcode_test rc

opcode.o: opcode.c opcode.h
opcode_test.o: opcode_test.c opcode.h
stats.o: stats.c stats.h
utils.o: utils.c utils.h
reg_stack.o:reg_stack.c reg_stack.h

COMMON_OBJECTS= opcode.o stats.o utils.o reg_stack.o stats_opcode_str.o

opcode_test: opcode_test.o $(COMMON_OBJECTS)
	$(CC) -o opcode_test opcode_test.o $(COMMON_OBJECTS)

rc: rc.o 
	$(CC) -o rc rc.o


