TESTS = testRemoveDuplicates testRotateArray
EXECS = removeDuplicates.out rotateArray.out

.PHONY:
testAll: $(TESTS)

.PHONY:
$(TESTS):
	@./$<

testRemoveDuplicates: removeDuplicates.out
testRotateArray: rotateArray.out

$(EXECS):
	@cc $^ -o $@

removeDuplicates.out: removeDuplicates.c
rotateArray.out: rotateArray.c

.PHONY:
clean:
	@rm $(EXECS)
