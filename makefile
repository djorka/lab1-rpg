all:
	g++ -o fighter main.cpp fighter.cpp cleric.cpp arena.cpp archer.cpp robot.cpp

clean:
	rm -f fighter
	rm -f out_file*.txt