#pragma once

#include "ofMain.h"
#include "ofxAndroid.h"

//#include "ofTexture.h"
//#include "Particle.h"

//#define size 5000
#define seconds = 5

class ofApp : public ofxAndroidApp{
	
/*
	private:

	int centerX;
	int centerY;
	float rotation;*/

	public:
		
		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void windowResized(int w, int h);

		void touchDown(int x, int y, int id);
		void touchMoved(int x, int y, int id);
		void touchUp(int x, int y, int id);
		void touchDoubleTap(int x, int y, int id);
		void touchCancelled(int x, int y, int id);
		void swipe(ofxAndroidSwipeDir swipeDir, int id);

		void pause();
		void stop();
		void resume();
		void reloadTextures();

		bool backPressed();
		void okPressed();
		void cancelPressed();

		ofVideoGrabber grabber;
		ofTexture videoTexture;
		int one_second_time;

		unsigned char*  pixels[25];
		int widths[25];
		int heights[25];

		bool ok_to_show;
		int global_index;
		int camera_fps;
		int frames_one_sec;

		//Particle* p[size];
};
