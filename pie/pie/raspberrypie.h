#ifndef RASPBERRYPIE_H
#define RASPBERRYPIE_H
#include "pie.h"

class RaspberryPie :public pie
{
public:
	RaspberryPie();
	int description();
    std::string description()const ;
	std::string description()const;
	std::string tastiness() const;
};
#endif // !RASPBERRYPIE_H
