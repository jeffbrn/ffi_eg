#pragma once

#include "animal.h"

namespace test::library {

class Ape : public Animal {
public:
	Ape();
	virtual ~Ape() = default;

	const std::string& speak() const override;
	uint8_t num_legs() const override { return 2; };

protected:
	std::string says_;
};

}
