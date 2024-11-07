#include "ape.h"
#include <cstring>

using namespace std;

namespace test::library {

Ape::Ape() {
	memcpy(get_buffer(), "Ape", 4);
	name_ = "Ape";
	says_ = "oh oh";
}

const string& Ape::speak() const {
	return says_;
}

}
