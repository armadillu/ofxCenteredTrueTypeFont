#pragma once

#include "ofMain.h"

class ofxCenteredTrueTypeFont : public ofTrueTypeFont{

	public:
	
	
	void drawStringCentered(string s, float x, float y){
	
		ofRectangle r = getStringBoundingBox(s, 0, 0);
		drawString(s, -r.x + x - r.width * 0.5f, -r.y + y - r.height * 0.5f);	
		
		#if (0) /*DEBUG*/
			ofNoFill();
			ofSetRectMode(OF_RECTMODE_CENTER);
			ofRect( x, y, r.width, r.height); 
			ofSetRectMode(OF_RECTMODE_CORNER);
			ofFill();
		#endif				
	}

};

