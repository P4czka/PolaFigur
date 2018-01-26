#include "Figura.h"
#include "Trojkat.h"
#include "Kwadrat.h"
#include "Kolo.h"
#include <iostream>

Kolo::Kolo(float radius){
	this->radius = radius;
}

float Kolo::calculate_area(){
	return (3.1415*radius*radius);
}