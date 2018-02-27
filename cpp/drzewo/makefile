CXX=g++
CXXFLAGS=-Wall -I.
OBJS=drzewo.o drzewo_bin.o

pong: drzewo.o drzewo_bin.o
	$(CXX) $(CXXFLAGS) $(OBJS) -o drzewo.exe
	
.PHONY: clean

clean:
	rm -f *.o *~ core *~
