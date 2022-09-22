.SILENT:
all:
	make lab1
	make lab2
	make lab3
lab1:
	g++ -o ./outputs/assignment_1_output.out ./assignment_1/hello_world.cpp
lab2:
	echo Running exercise 1.5
	g++ -o ./outputs/break_operand ./assignment_2/break_operand.cpp
	./outputs/break_operand

	printf "\n"

	echo Running exercise 1.11
	echo Running bounds with for loop
	g++ -o ./outputs/for_loop_range ./assignment_2/for_loop_range.cpp
	./outputs/for_loop_range

	printf "\n"

	echo Running bounds with while loop
	g++ -o ./outputs/while_loop_range ./assignment_2/while_loop_range.cpp
	./outputs/while_loop_range

lab3:
	cat ./assignment_3/chap_2_exercises.md
# Run clean to clean output folder
clean:
	rm ./outputs/*
