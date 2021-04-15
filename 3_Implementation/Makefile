PROJECT = Bank
TEST_PROJECT = Test_$(PROJECT)

SRC = src/add.c\
src/deposit.c\
src/display.c\
src/newacc.c\
src/search.c\
src/update.c\
src/withdraw.c\

TEST = test/test.c\
unity/unity.c
INC_H = inc
INC_U = unity

CINC = test.c

/*ifdef OS
   RM = del 
   FixPath = $(subst /,\,$1)
      EXEC = exe
else
   ifeq ($(shell uname), Linux)
      RM = rm -rf
      FixPath = $1
	     EXEC = out
   endif
endif*/
all:
	gcc -I $(INC_H) $(SRC) main.c -o $(PROJECT).out
	

run:
	$(call FixPath,$(PROJECT).out)
test:
	gcc -I $(INC_H) -I $(INC_U) $(TEST_SRC) $(SRC) -o $(call FixPath,$(TEST_PROJECT).out)
	./$(call FixPath,$(TEST_PROJECT).out)

coverage:
	cp test/test.c .
	gcc -fprofile-arcs -ftest-coverage -I $(INC_H) -I $(INC_U) unity/unity.c test.c $(SRC) -o $(call FixPath, $(TEST_PROJECT).out)
	$(call FixPath, ./$(TEST_PROJECT).out)
	gcov -a $(CINC)
	$(RM) *.out
	$(RM) *.gcda
	$(RM) *.gcno
	$(RM) *.c.gcov
	$(RM) *.DAT
	$(RM) test.c

cppcheck:
	cppcheck --enable=all $(SRC)

valgrind:$(SRC)
	valgrind ./$(TEST_PROJECT).out
debug:
	gcc -I $(INC_H) $(SRC) main.c -g -o $(PROJECT).out
	gdb $(PROJECT).out

clean:
	del *.DAT
	del *.out
