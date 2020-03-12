TESTS = \
	testMergeSortedLists \
	testRemoveDuplicates \
	testRotateArray \

EXECS = \
	mergeSortedLists.out \
	removeDuplicates.out \
	rotateArray.out \

.PHONY:
testAll: $(TESTS)

.PHONY:
$(TESTS):
	@./$<

testMergeSortedLists: mergeSortedLists.out
testRemoveDuplicates: removeDuplicates.out
testRotateArray: rotateArray.out

$(EXECS):
	@cc $^ -o $@

mergeSortedLists.out: mergeSortedLists.c
removeDuplicates.out: removeDuplicates.c
rotateArray.out: rotateArray.c

.PHONY:
clean:
	@rm $(EXECS)
