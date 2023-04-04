#ifndef APPLEPIE_H
#define APPLEPIE_H
#include "pie.h"

class ApplePie :public Pie {
public:
	ApplePie();
	virtual std::string description() override;
	std::string tastiness()override;
};
#endif // !APPLEPIE_H
