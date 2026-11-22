//
//  WALKER.hpp
//  CodingArtFundamentals_W9
//
//  Created by 오호근 on 11/22/26.
//

#ifndef walker_hpp
#define walker_hpp

#include "ofMain.h"
#include <stdio.h>

class walker {
	
public:
	
	walker();
	
	float x;
	float y;
	
	float tx;
	float ty;
	
	void step ();
	void show ();
	
	
};



#endif /* walker_hpp */
