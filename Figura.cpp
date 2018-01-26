#include "Figura.h"
#include "Trojkat.h"
#include "Kwadrat.h"
#include "Kolo.h"
#include <iostream>

Figura::Figura(){
	area = 0;
}

float Figura::calculate_area(){
	return area;
}
