#include "builders.h"
#include "ape.h"
#include "cat.h"
#include "dog.h"
#include "pug.h"

using namespace std;
using namespace test::library;

namespace test::library {

unique_ptr<Animal> create_ape() { return make_unique<Ape>(); }
unique_ptr<Animal> create_cat() { return make_unique<Cat>(); }
unique_ptr<Animal> create_dog() { return make_unique<Dog>(); }
unique_ptr<Animal> create_pug() { return make_unique<Pug>(); }

}
