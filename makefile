compile: main.cpp 
	 g++  main.cpp -o main

compileSelection: main_selection.cpp 
	 g++  main_selection.cpp -o selection

runSelection: selection
	  ./selection

run: main
	 ./main


clean: main
	 rm main
