#pragma once

#include "animal.h"

namespace test::library {

class Cat : public Animal {
public:
	Cat();
	virtual ~Cat() = default;

	const std::string& speak() const override;
	uint8_t num_legs() const override { return 4; };

protected:
	std::string says_;
};

}
