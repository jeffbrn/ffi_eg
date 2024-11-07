#include "dog.h"
#include <cstring>

using namespace std;

namespace test::library {

Dog::Dog() {
	memcpy(get_buffer(), "Dog", 4);
	name_ = "Dog";
	says_ = "woof";
}

const string& Dog::speak() const {
	return says_;
}

}
