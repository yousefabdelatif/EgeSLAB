#pragma once
#include<string>
#include<chrono>
#include<source_location>
#include <filesystem>
#ifdef Debug_Mode



#define StartRecording()\
	auto start = std::chrono::high_resolution_clock::now();\
	const std::source_location location =std::source_location::current();\
	std::cout <<"Function :"<<" \" "<<location.function_name()<<" \""<< " in line ( " << location.line()<<" ) in "<< std::filesystem::path(std::string(location.file_name())).filename() \


#define EndRecording() \
	auto End = std::chrono::high_resolution_clock::now();\
	std::chrono::duration < float > duration =  End-start ;\
	std::cout <<" took " << "[ " << duration.count()<< "s ]"\

#else
	#define StartRecording() /**/

	#define EndRecording()  /**/

#endif