#include <pybind11/pybind11.h>
#include<iostream>
#include<chrono> //for sleeping
#include<thread> // --do--
#include<cstdlib>//for random increments
#include<ctime>// --do--

// https://www.quora.com/How-do-I-create-a-progress-bar-in-C++
void progressbar(){
	std::srand(time(NULL)); //seed random
	for(int progress=0;progress!=100;progress+=std::rand()%20){ //increment progress randomly
		//Delete the line below and change for loop condition to 'progress<=100' and put something meaningful in for loop progress increment in implementation.
		if(progress>100) progress=100;
		std::cout<<"[";
		for(int i=0;i<100;i++)
			if(i<progress)
				std::cout<<'=';
			else if(i==progress)
				std::cout<<'>';
			else
				std::cout<<' ';
		std::cout<<"] "<<progress<<" %"<<'\r';
		std::cout.flush();
		std::this_thread::sleep_for(std::chrono::milliseconds(500)); //sleep
		//Delete this line as well in implementation
		if(progress==100) break;
	}
	std::cout<<std::endl;
}

PYBIND11_MODULE(progress_test, m) {
    m.doc() = "pybind11 example plugin"; // optional module docstring

    m.def("progressbar", &progressbar, "A function that show progress bar");
}