#include "ofApp.h"


//--------------------------------------------------------------
void ofApp::setup(){
	/*
	ofLogNotice("ofApp.cpp") << "Empieza setup\n";
	ofSetFrameRate(100);
	for (int i=0; i<size; i++) {
		p[i] = new Particle();
	}
	ofLogNotice("ofApp.cpp") << "pasa ofSetFrameRate\n";
*/
	//ofLogNotice("ofApp.cpp") << "Empieza setup\n";
	ofBackground(255,255,255);
	ofSetOrientation(OF_ORIENTATION_90_LEFT);
		grabber.initGrabber(320,240);
		videoTexture.allocate(320,240, GL_RGB);

		one_second_time = ofGetElapsedTimeMillis();
		ok_to_show = false;
		camera_fps = 0;
		frames_one_sec = 0;
		global_index = 0;
}

//--------------------------------------------------------------
void ofApp::update(){

	//ofLogNotice("ofApp.cpp") << "Empieza update\n";
	grabber.update();
		if(grabber.isFrameNew()){
			frames_one_sec++;
			if( ofGetElapsedTimeMillis() - one_second_time >= 50){
				if(global_index == 25 - 1){
					global_index = 0;
					ok_to_show = true;
				}else{
					global_index ++;
				}



				//pixels[global_index] = grabber.getPixels();

				//ofLogNotice("ofApp.cpp") << "global_index " << global_index << "\n";
				//ofLogNotice("ofApp.cpp") << "pixels " << pixels[global_index] << "\n";

				//heights[global_index] = grabber.getHeight();
				//widths[global_index] = grabber.getWidth();

				camera_fps = frames_one_sec;
				frames_one_sec = 0;
				one_second_time = ofGetElapsedTimeMillis();
				//if(ok_to_show){
					//int val = (global_index-25)%25;
					//videoTexture.loadData(pixels[val], 320, 240, GL_RGB);
					videoTexture.loadData(grabber.getPixelsRef());

				//}
			}
		}
}

//--------------------------------------------------------------
void ofApp::draw(){

	//ofLogNotice("ofApp.cpp") << "Empieza draw\n";
	//if(ok_to_show)
		videoTexture.draw(0, 0);
	/*
	ofSetHexColor(0xFFFFFF);
		grabber.draw(20,20);
		ofSetHexColor(0x000000);
		ofDrawBitmapString("fps: " + ofToString(ofGetFrameRate()),20,350);
		ofDrawBitmapString("camera fps: " + ofToString(camera_fps),20,370);*/
}

//--------------------------------------------------------------
void ofApp::keyPressed  (int key){ 
	
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){ 
	
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::touchDown(int x, int y, int id){

}

//--------------------------------------------------------------
void ofApp::touchMoved(int x, int y, int id){

}

//--------------------------------------------------------------
void ofApp::touchUp(int x, int y, int id){

}

//--------------------------------------------------------------
void ofApp::touchDoubleTap(int x, int y, int id){

}

//--------------------------------------------------------------
void ofApp::touchCancelled(int x, int y, int id){

}

//--------------------------------------------------------------
void ofApp::swipe(ofxAndroidSwipeDir swipeDir, int id){

}

//--------------------------------------------------------------
void ofApp::pause(){

}

//--------------------------------------------------------------
void ofApp::stop(){

}

//--------------------------------------------------------------
void ofApp::resume(){

}

//--------------------------------------------------------------
void ofApp::reloadTextures(){

}

//--------------------------------------------------------------
bool ofApp::backPressed(){
	return false;
}

//--------------------------------------------------------------
void ofApp::okPressed(){

}

//--------------------------------------------------------------
void ofApp::cancelPressed(){

}
