all:
	g++ -std=c++11 -o lab1 main.cpp fighter.cpp cleric.cpp Arena.cpp archer.cpp robot.cpp

clean:
	rm -f lab1
	rm -f out_file*.txt