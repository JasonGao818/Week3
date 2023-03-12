#include "myboid.hpp"

myboid::myboid()
{
    separationWeight = 1.9f;
    cohesionWeight = 1.2f;
    alignmentWeight = 0.2f;
    
    separationThreshold = 20;
    neighbourhoodSize = 100;
    
    position = ofVec3f(ofRandom(0, 200), ofRandom(0, 200));
    velocity = ofVec3f(ofRandom(-1, 1), ofRandom(-1, 1));
}

void myboid::draw(){
    ofSetColor(255, 193, 193);
    ofCircle(position.x, position.y, 20);
}
