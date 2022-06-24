all:
	$(CC) meth_test.c -o meth_test

.PHONY: prepro all clean
prepro:
	$(CC) -E -Dprepro meth_test.c

run: all
	./meth_test

clean:
	rm -rf meth_test
