#pragma once

#include <cstdint>
#include <string>

namespace test::library {

class Animal {
public:
	Animal();
	virtual ~Animal();

	virtual const std::string& name() const { return name_; }
	virtual const std::string& speak() const = 0;
	virtual uint8_t num_legs() const = 0;
	int32_t get_test() const { return 5; }

protected:
	uint8_t *get_buffer() { return buff; }
	std::string name_;

private:
	uint8_t *buff = nullptr;
};

}
