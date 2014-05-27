/*
 *  Particle.cpp
 *  openFrameworks
 *
 *  Created by Stephen Braitsch on 11/6/09.
 *  Copyright 2009 __MyCompanyName__. All rights reserved.
 *
 */

#include "Particle.h"

Particle::Particle()
{
	x = ofRandomf();
	y = ofRandomf();
	speedX = ofRandom(0,4);
	speedY = ofRandom(0,4);
	radius = ofRandom(0,3);
	color = ofRandom(0, 0xff0000);	
	
	age = 0;
	dead = false;
	maxAge = ofRandom(0, 50)+250;
}

void Particle::update()
{
	ofLogNotice("Particle.cpp") << "Empieza update\n";
	age++;
	ofLogNotice("Particle.cpp") << "Update 1\n";
	x += (x>0) ? speedX : speedX*-1;
	ofLogNotice("Particle.cpp") << "Update 2\n";
	y += (y>0) ? speedY : speedY*-1;
	ofLogNotice("Particle.cpp") << "Update 3\n";
	if (age >= maxAge) dead = true;
	ofLogNotice("Particle.cpp") << "Termina update\n";
}

void Particle::draw()
{
	ofSetColor(color);
	ofCircle(x, y, radius);
}
