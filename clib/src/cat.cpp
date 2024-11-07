#include "cat.h"
#include <cstring>

using namespace std;

namespace test::library {

Cat::Cat() {
	memcpy(get_buffer(), "Cat", 4);
	name_ = "Cat";
	says_ = "meow";
}

const string& Cat::speak() const {
	return says_;
}

}
