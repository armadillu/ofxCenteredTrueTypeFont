#pragma once

#include "ofMain.h"
#include "ofxCenteredTrueTypeFont.h"

class testApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		ofxCenteredTrueTypeFont font;
};
