#ifndef __TIMER_H__
#define __TIMER_H__

#include <stdio.h>

class Timer{

public:

	float time;

	Timer(){
		time = 0;
	}

	void reset(){
		time = 0;
	}

	float time(){
		return time;
	}

	float fps(float ticks){
		return (ticks / time);
	}


};



#endif