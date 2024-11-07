#pragma once

#include "animal.h"

namespace test::library {

class Dog : public Animal {
public:
	Dog();
	virtual ~Dog() = default;

	const std::string& speak() const override;
	uint8_t num_legs() const override { return 4; };

protected:
	std::string says_;
};

}
