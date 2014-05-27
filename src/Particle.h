/*
 *  Particle.h
 *  openFrameworks
 *
 *  Created by Stephen Braitsch on 11/6/09.
 *  Copyright 2009 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef PARTICLE
#define PARTICLE

#import "ofMain.h"

class Particle {
	
	private:
	float x;		// current y position
	float y;		// current x position

	int color;	
	int radius;
	int age;		// current age
	int maxAge;		// max age
	float speedX;
	float speedY;
	
	public:
	Particle();
	
	void update();
	void draw();
	bool dead;
};


#endif