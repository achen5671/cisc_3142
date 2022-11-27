.SILENT:
# TODO: make command to run logs for assignments
# TODO: create individual output folders in each assignment (?)

### NOTE: Commenting out linear regression call for lab 5 due ot github action failing on master
# Github Action passes on local branch for lab 5 but fails when merged.
# ```
# echo Running linear regression...
# g++ -o ./outputs/linear_regression ./assignment_5/linear_regression.cpp && ./outputs/linear_regression
# ```
all:
	make lab1
	make lab2
	make lab3
	make lab4
	make lab5
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

lab4:
	echo Running lab 4...
	echo Exercise 3.17 toupper.cpp...
	g++ -std=c++14 -o ./outputs/to_upper ./assignment_4/to_upper.cpp && ./outputs/to_upper

	printf "\n"

	echo Exercise 3.23 double.cpp...
	g++ -std=c++14 -o ./outputs/double ./assignment_4/double.cpp && ./outputs/double

	printf "\n"

	echo Exercise 4.28 build_in_size.cpp...
	g++ -std=c++14 -o ./outputs/size ./assignment_4/build_in_size.cpp && ./outputs/size

	printf "\n"

	echo Exercise inflation.cpp...
	g++ -std=c++14 -o ./outputs/inflation ./assignment_4/inflation.cpp && ./outputs/inflation

	printf "\n"

	echo Exercise nutrition.cpp
	g++ -std=c++14 -o ./outputs/nutrition ./assignment_4/nutrition.cpp && ./outputs/nutrition

lab5:
	echo Running lab 5...

	echo Textbook Exercises...
	cat ./assignment_5/exercises.md

	printf "\n"

	echo Running sum of digits...
	g++ -o ./outputs/sum_of_digits ./assignment_5/sum_of_digits.cpp && ./outputs/sum_of_digits

	printf "\n"

	echo Running Find prime numbers...
	g++ -o ./outputs/prime_number ./assignment_5/prime_number.cpp && ./outputs/prime_number

	printf "\n"


lab7:
	echo Running lab 7...
	echo Running main with Rectangle and Sample classes...
	g++ -o ./outputs/rectangle ./assignment_7/main.cpp && ./outputs/rectangle

	printf "\n"
	echo Running main...
	g++ -o ./outputs/pixel ./assignment_7/pixel.cpp && ./outputs/pixel

	printf "\n"

lab9:
	echo Running lab 9...
	echo Running forecast.cpp...
	g++ -std=c++14 -o ./outputs/forecast ./assignment_9/forecast.cpp && ./outputs/forecast

	echo No outputs on github actions pipeline due to permission in reading in the files
	printf "\n"

# Run clean to clean output folder
clean:
	rm ./outputs/*
