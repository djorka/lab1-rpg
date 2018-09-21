all:
	g++ -o rpg main.cpp fighter.cpp cleric.cpp arena.cpp archer.cpp robot.cpp

clean:
	rm -f rpg
	rm -f out_file*.txt