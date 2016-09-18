#include "ofApp.h"

void ofApp::setup()
{
	myBall.setup();

	gui.setup("Instellingen", "settings.xml");
	//gui.add(count.set("Count", 50, 0, 200));
	gui.add(myBall.speedX.set("speedX", 20, 0, 200));
	gui.add(myBall.speedY.set("speedY", 20, 0, 200));

}

void ofApp::update()
{
	myBall.update();
}

void ofApp::draw()
{
	myBall.draw();
	gui.draw();
}

void ofApp::keyPressed(int key)
{

	if (key == 'q')
	{
		myBall = Ball();
	}

}

void ofApp::mousePressed(int x, int y, int button)
{

}
