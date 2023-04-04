#ifndef APRICOTPIE_H
#define APRICOTPIE_H
#include "pie.h"

class ApricotPie :public Pie {
public :
	ApricotPie();
	virtual std::string description() override;
	std::string tastiness() override;
}
#endif // !APPLEPIE_H
