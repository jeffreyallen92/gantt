/****************************************************
    Names       : Geoffrey Morris & Jeffrey Allen
    Date        : CS420 Spring 2014
    Assignment  : Assignment 11, Group 3
    Description : 
    Due Date: November 20, 2012
*****************************************************/

#include <iostream>
#include <string>

#ifndef PROCESS_H
#define PROCESS_H

class Process {
	
	private:

		std::string name;
		int priority;
		int burstTime;

		// Statistics Variables
		int waitTime;
		int turnAroundTime;

		int startTime;
		int stopTime;

		bool inList;

	public:

		Process();
		Process(std::string, int, int);
		Process(Process *);
		~Process();

		std::string getName();
		int getPriority();
		int getBurstTime();
		
		int getWaitTime();
		int getTurnAroundTime();
		
		int getStartTime();
		int getStopTime();
		bool getInListFlag();

		void setName(std::string);
		void setPriority(int);
		void setBurstTime(int);
		
		void setWaitTime(int);
		void setTurnAroundTime(int);

		void setStartTime(int);
		void setStopTime(int);
		void setInListFlag(bool);
};

#endif