#include "Ball.h"

Ball::Ball()
{

}


Ball::~Ball()
{

}


void Ball::setup()
{

	x = ofRandom(0, ofGetWidth());
	y = ofRandom(0, ofGetHeight());

	//speedX = ofRandom(-2, 2);
	//speedY = ofRandom(-2, 2);

	radius = ofRandom(20, 60);

	colour.set(ofRandom(255),
		ofRandom(255),
		ofRandom(255));


}

void Ball::update()
{

	if (x < (radius / 2))
	{
		x = (radius / 2);
		speedX *= -1;
	}

	else if (x >(ofGetWidth() - (radius / 2)))
	{
		x = (ofGetWidth() - (radius / 2));
		speedX *= -1;
	}

	if (y < (radius / 2))
	{
		y = (radius / 2);
		speedY *= -1;
	}

	else if (y >(ofGetHeight() - (radius / 2)))
	{
		y = (ofGetHeight() - (radius / 2));
		speedY *= -1;
	}

	x += speedX;
	y += speedY;

}

void Ball::draw()
{

	ofSetColor(colour);
	ofDrawCircle(x, y, radius);

}
