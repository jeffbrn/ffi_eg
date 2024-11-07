#include "animal.h"

using namespace std;

namespace test::library {

Animal::Animal() {
	buff = new uint8_t[100];
}

Animal::~Animal() {
	delete [] buff;
}

}
