#include "Figura.h"
#include "Trojkat.h"
#include "Kwadrat.h"
#include "Kolo.h"
#include <iostream>

Trojkat::Trojkat(float base, float height){
	this->base = base;
	this->height = height;
}

float Trojkat::calculate_area(){
	return (0.5*base*height);
}
