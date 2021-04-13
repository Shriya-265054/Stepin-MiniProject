PROJECT = Bank
TEST_PROJECT = Test_$(PROJECT)

SRC=src/add.c\
src/deposit.c\
src/display.c\
src/newacc.c\
src/search.c\
src/update.c\
src/withdraw.c\

TEST= test_bank.c\
unity/unity.c
INC_H = inc
INC_U = unity

ifdef OS
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
	  EXEC = out
   endif
endif

all:
	gcc -I $(INC_H) $(SRC) main.c -o $(PROJECT).$(EXEC)
	

run:
	$(PROJECT).$(EXEC)
test:
	gcc -I $(INC_H) -I $(INC_U) $(TEST) $(SRC) -o $(TEST_PROJECT).$(EXEC)

cppcheck:
	cppcheck --enable=all $(SRC)

valgrind:
	valgrind ./$(PROJECT).$(EXEC)
debug:
	gcc -I $(INC_H) $(SRC) main.c -g -o $(PROJECT).$(EXEC)
	gdb $(PROJECT).$(EXEC)

clean:
	del *.DAT
	del *.$(EXEC)