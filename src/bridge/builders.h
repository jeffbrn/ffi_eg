#pragma once

#include "animal.h"
#include <memory>

namespace test::library {

std::unique_ptr<test::library::Animal> create_ape();
std::unique_ptr<test::library::Animal> create_cat();
std::unique_ptr<test::library::Animal> create_dog();
std::unique_ptr<test::library::Animal> create_pug();

}
