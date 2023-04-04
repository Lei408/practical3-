#ifndef APRICOTPIE_H
#define APRICOTPIE_H
#include "pie.h"

class ApricotPie :public pie {
public:
	ApricotPie();
    std::string description() const;
	std::string tastiness() const;
};
#endif // !APPLEPIE_H

