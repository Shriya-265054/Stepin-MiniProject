PROJECT = Bank
TEST_PROJECT = Test_$(PROJECT)

SRC=src/add.c\
src/deposit.c\
src/display.c\
src/newacc.c\
src/search.c\
src/update.c\
src/withdraw.c\

TEST= test/test.c\
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
	gcc -I $(INC_H) $(SRC) main.c -o $(call FixPath,$(PROJECT).$(EXEC))
	

run:
	$(call FixPath,$(PROJECT).$(EXEC))
test:
	gcc -I $(INC_H) -I $(INC_T) $(TEST_SRC) $(SRC) -o $(call FixPath,$(TEST_PROJECT).$(EXEC))
	./$(call FixPath,$(TEST_PROJECT).$(EXEC))

coverage:
	cp test/test.c .
	gcc -fprofile-arcs -ftest-coverage -I $(INC_H) -I $(INC_T) unity/unity.c test.c $(SRC) -o $(call FixPath, $(TEST_PROJ_NAME).$(EXEC))
	$(call FixPath, ./$(TEST_PROJ_NAME).$(EXEC))
	gcov -a $(COV_SRC)
	$(RM) *.$(EXEC)
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.c.gcov
	$(RM) *.DAT
	$(RM) test_bank.c

cppcheck:
	cppcheck --enable=all $(SRC)

valgrind:$(SRC)
	valgrind ./$(PROJECT).$(EXEC)
debug:
	gcc -I $(INC_H) $(SRC) main.c -g -o $(PROJECT).$(EXEC)
	gdb $(PROJECT).$(EXEC)

clean:
	del *.DAT
	del *.$(EXEC)
