#include "Figura.h"
#include "Trojkat.h"
#include "Kwadrat.h"
#include "Kolo.h"
#include <iostream>

Kwadrat::Kwadrat(float side){
	this->side = side;
}

float Kwadrat::calculate_area(){
	return side*side;
}
