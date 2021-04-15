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
   RM = del 
   FixPath = $(subst /,\,$1)
   EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	   EXEC = out
   endif
endif

all:
	gcc -I $(INC_H) $(SRC) main.c -o $(PROJECT).$(EXEC)
	

run:
	$(PROJECT).$(EXEC)
test:
	gcc -I $(INC_H) -I $(INC_U) $(TEST) $(SRC) -o $(TEST_PROJECT).$(EXEC)

coverage:
	cp test/test_bank.c .
	gcc -fprofile-arcs -ftest-coverage -I $(INC_H) -I $(INC_T) unity/unity.c test.c $(SRC) -o $(call FixPath, $(TEST_PROJECT).$(EXEC))
	$(call FixPath, ./$(TEST_PROJECT).$(EXEC))
	gcov -a $(COV_SRC)
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.c.gcov
	$(RM) *.DAT
	$(RM) test.c

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