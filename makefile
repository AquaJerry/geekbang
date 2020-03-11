.PHONY:
testAll: testRemoveDuplicates

.PHONY:
testRemoveDuplicates: removeDuplicates.out
	@./$<

removeDuplicates.out: removeDuplicates.c
	@cc $^ -o $@

.PHONY:
clean:
	@rm *.out
