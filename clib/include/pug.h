#pragma once

#include "dog.h"

namespace test::library {

class Pug : public Dog {
public:
	Pug();
	virtual ~Pug() = default;
};

}
