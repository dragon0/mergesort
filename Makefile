CXXFLAGS= --std=c++11
LDLIBS=
CC=g++

PROGRAM=main
OBJS=\
    listAdd.o\
    listDelete.o\
    listDeleteSoft.o\
    main.o\
    merge.o\
    mergeSort.o\
    newList.o\
    newNode.o\
    newRecord.o\
    printList.o

ARCHIVE=\
    header.h\
    listAdd.cc\
    listDelete.cc\
    listDeleteSoft.cc\
    main.cc\
    Makefile\
    merge.cc\
    mergeSort.cc\
    newList.cc\
    newNode.cc\
    newRecord.cc\
    printList.cc\
    valgrind.txt


all: $(PROGRAM)

$(PROGRAM): $(PROGRAM).o $(OBJS)
$(PROGRAM).o:

clean:
	$(RM) -v $(PROGRAM) *.o

test: $(PROGRAM)
	./$(PROGRAM)

valgrind: $(PROGRAM)
	valgrind --leak-check=full ./$(PROGRAM)

debug: CXXFLAGS += -g
debug: clean $(PROGRAM)

tar: mergesort.tgz
mergesort.tgz: $(ARCHIVE)
	tar czvf $@ $^

zip: mergesort.zip
mergesort.zip: $(ARCHIVE)
	zip $@ $^

