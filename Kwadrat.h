#ifndef KWADRAT_H
#define KWADRAT_H

class Kwadrat : public Figura{

	public:
		Kwadrat(float side);
		float calculate_area();
	private:
		float side;
};
#endif 