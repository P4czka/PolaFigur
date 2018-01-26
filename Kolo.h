#ifndef KOLO_H
#define KOLO_H

class Kolo : public Figura{

	public:
		Kolo(float radius);
		float calculate_area();
	private:
		float radius;

};

#endif
