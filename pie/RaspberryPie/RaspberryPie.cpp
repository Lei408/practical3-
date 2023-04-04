#ifndef RASPBERRYPIE_H
#define RASPBERRYPIE_H
#include "pie.h"


class RaspberryPie :public Pie {
public:
	RaspberryPie();
	virtual std::string description()override;
	std::string tastiness()override;
}
#endif // !RASPBERRYPIE_H