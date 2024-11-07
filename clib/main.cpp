#include <iostream>
#include <memory>

#include "dog.h"
#include "cat.h"
#include "ape.h"
#include "pug.h"

using namespace std;
using namespace test::library;

template <typename T>
unique_ptr<Animal> get_animal() {
	return make_unique<T>();
}

void show(Animal *a) {
	cout << a->name() << " has " << a->num_legs() << " legs and says: " << a->speak() << endl;
}

int main() {
	cout << "Hello World!" << endl << endl;
	show(get_animal<Dog>().get());
	show(get_animal<Cat>().get());
	show(get_animal<Ape>().get());
	show(get_animal<Pug>().get());
}
