#pragma once

#include "ofMain.h"

class ofxCenteredTrueTypeFont : public ofTrueTypeFont{

	public:

	ofVec2f getOffset( string s ){
		ofRectangle r = getStringBoundingBox(s, 0, 0);
		return ofVec2f( floor(-r.x - r.width * 0.5f), floor(-r.y - r.height * 0.5f) );
	}
	
	void drawStringCentered(string s, float x, float y, bool asVector = false){
		ofVec2f offset = getOffset(s);
		if (!asVector)
			drawString(s, x + offset.x, y + offset.y);
		else
			drawStringAsShapes(s, x + offset.x, y + offset.y);		
	}
	
	void drawCenteredBoundingBox(string s, float x, float y, float padding = 0){
		ofRectangle r = getStringBoundingBox(s, 0, 0);
		r.x -= padding;
		r.y -= padding;
		r.width += 2.0f * padding;
		r.height += 2.0f * padding;
		ofSetRectMode(OF_RECTMODE_CENTER);
		ofRect( x, y, r.width, r.height);
		ofSetRectMode(OF_RECTMODE_CORNER);
	}

	
	void drawStringCenteredVertically(string s, float x, float y){
		ofVec2f offset = getOffset(s);
		drawString(s, x, y + offset.y );
	}

	
	void drawStringCenteredHorizontally(string s, float x, float y){
		ofVec2f offset = getOffset(s);
		drawString(s, x + offset.x, y);
	}
};

