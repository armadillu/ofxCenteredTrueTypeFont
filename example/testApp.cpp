#include "testApp.h"


void testApp::setup(){

	ofEnableAlphaBlending();
	ofSetVerticalSync(true);
	ofSetFrameRate(60);
	ofBackground(128, 128, 128, 255);

	font.loadFont("Arial.ttf", 64);
}


void testApp::update(){

}


void testApp::draw(){

	font.drawStringCentered("CENTERED", mouseX, mouseY - 60);
	font.drawCenteredBoundingBox("CENTERED", mouseX, mouseY - 60, 10);
}


