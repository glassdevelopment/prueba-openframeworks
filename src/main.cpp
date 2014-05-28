#include "ofMain.h"
#include "ofApp.h"
#include "ofAppGlutWindow.h"


int main(){

	//ofLogNotice("main.cpp") << "Empieza\n";
	ofSetupOpenGL(1024,768, OF_WINDOW);
	//ofAppGlutWindow window;
	//ofSetupOpenGL(&window, 575, 400, OF_FULLSCREEN);
	//ofSetupOpenGL(1024,768, OF_WINDOW);			// <-------- setup the GL context
	//ofLogNotice("main.cpp") << "pasa ofSetupOpenGL\n";

	// this kicks off the running of my app
	// can be OF_WINDOW or OF_FULLSCREEN
	// pass in width and height too:
	ofRunApp( new ofApp() );
	return 0;
}


#ifdef TARGET_ANDROID
#include <jni.h>

//========================================================================
extern "C"{
	void Java_cc_openframeworks_OFAndroid_init( JNIEnv*  env, jobject  thiz ){
		main();
	}
}
#endif
