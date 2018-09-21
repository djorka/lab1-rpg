all:
	g++ -std=c++11 -o rpg main.cpp fighter.cpp cleric.cpp Arena.cpp archer.cpp robot.cpp

clean:
	rm -f rpg
	rm -f out_file*.txt