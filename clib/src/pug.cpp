#include "pug.h"
#include <cstring>

using namespace std;

namespace test::library {

Pug::Pug() {
	memcpy(get_buffer(), "Pug", 4);
	name_ = "Pug";
}

}
