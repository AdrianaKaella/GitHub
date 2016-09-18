#pragma once

#include "ofMain.h"
#include "ofxGui.h"

class Ball
{

public:
	Ball();
	~Ball();

	void setup();
	void update();
	void draw();

	float x;
	float y;
	//float speedX;
	//float speedY;
	int radius;
	ofColor colour;

	ofxPanel gui;
	//ofParameter<int> count;
	ofParameter<float> speedX;
	ofParameter<float> speedY;

};

