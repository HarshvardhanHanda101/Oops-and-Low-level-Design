#include<iostream>
#include "bird.h"

using namespace std;

void birdDoessomething(bird *b){
    b->eat();
    b->sleep();
}

int main(){
bird *bird = new pigeon();
birdDoessomething(bird);

    return 0;
}