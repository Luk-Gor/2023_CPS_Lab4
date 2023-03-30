//Object oriented programming, Classes, polymorphism

#include "mbed.h"
#include "MMA7660.h"
#include <cmath>

#define PI 3.141592654;

class Shape{
public:
//constructor
    Shape(int a){
        _a = a;
    }
    Shape(int a, int b){
        _a = a;
        _b = b;
    }

private: 
    int _a;
    int _b;
    int shape_type;

};

int main() {  
    Shape square(5);
    Shape triangle(3,1);
        
}