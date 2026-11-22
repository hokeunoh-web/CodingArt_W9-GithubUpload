#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	
	ofBackground (255,60,100);
	ofSetBackgroundAuto(false);
	

	fbo.allocate (ofGetWidth(), ofGetHeight(), GL_RGBA);
	fbo.begin();
	ofClear (255, 60, 100,255); 
	fbo.end();

}

//--------------------------------------------------------------
void ofApp::update(){

	w.step ();
}

//--------------------------------------------------------------
void ofApp::draw(){
	
	fbo.begin();
	
	ofFill ();
	ofSetColor(255,60,100,0);


	ofDrawRectangle (0,0,ofGetWidth(), ofGetHeight());
	
	w.show ();
	
	fbo.end();
	fbo.draw(0,0);
	

}

//--------------------------------------------------------------
void ofApp::exit(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseScrolled(int x, int y, float scrollX, float scrollY){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
