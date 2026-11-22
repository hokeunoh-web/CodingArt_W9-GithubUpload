//
//  WALKER.cpp
//  CodingArtFundamentals_W9
//
//  Created by 오호근 on 11/22/26.
//

#include "walker.hpp"

walker::walker(){
	
	tx = 0.0;
	ty = 1000.0;
	
	x= 0.0;
	y= 0.0;
	
	
}

void walker ::step(){
	
	x = ofMap(ofNoise(tx),0.0,1.0,0.0,ofGetWidth());
	y = ofMap(ofNoise(ty),0.0,1.0,0.0,ofGetHeight());
	
	
	tx += 0.001;
	ty += 0.001;
	
	
}

void walker::show (){
	
	ofFill();
	ofSetColor (100,200,10);
	ofDrawCircle(x,y,20);
}
