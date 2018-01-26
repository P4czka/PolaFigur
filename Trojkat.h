#ifndef TROJKAT_H
#define TROJKAT_H

class Trojkat : public Figura{

	public:
		Trojkat(float base, float height);
		float calculate_area();

	private:
		float base, height;
};
#endif 