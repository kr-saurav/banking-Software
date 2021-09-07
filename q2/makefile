output: main.o close.o open.o interest.o printall.o
  g++ main.o close.o open.o interest.o printall.o -o output
main.o: main.cpp
  g++ -c main.cpp
close.o:close.cpp connect.h
  g++ -c close.cpp
open.o: open.cpp connect.h
  g++ -c open.cpp
interest.o: interest.cpp connect.h
  g++ -c interest.cpp
printall.o: printall.cpp connect.h
  g++ -c printall.cpp

rm:
  rm *.o output
