
#include<thread>

#include"EgeSLAB.h"
#include<iostream>


int main()
{
 StartRecording();
	using namespace std::literals::chrono_literals;
	Ege::Application  a;
	a.RunApp();
	int x =0;
	
	std::this_thread::sleep_for(std::chrono::seconds(1));	
	

	EndRecording();
	std::cin >>x;
	return 0;
};