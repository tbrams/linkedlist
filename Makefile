TARGET=linkedlist
$(TARGET): List.o
	clang++ $(TARGET).cpp List.o  -o $(TARGET) 

List.o: List.cpp
	clang++ -c List.cpp -o List.o

clean:
	rm *.o