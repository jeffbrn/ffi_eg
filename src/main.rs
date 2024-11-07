fn main() {
    println!("Hello, world!");
    let result = ffi::my_add(4, 5);
    println!("result = {}", result);
    let dog = tstlib::create_dog();
    println!("test non virtual call = {}\n", dog.get_test());

    let ape = tstlib::create_ape();
    println!("{} has {} legs and says '{}'", ape.name(), ape.num_legs(), ape.speak());
    let cat = tstlib::create_cat();
    println!("{} has {} legs and says '{}'", cat.name(), cat.num_legs(), cat.speak());
    println!("{} has {} legs and says '{}'", dog.name(), dog.num_legs(), dog.speak());
    let pug = tstlib::create_pug();
    println!("{} has {} legs and says '{}'", pug.name(), pug.num_legs(), pug.speak());
}

#[cxx::bridge]
mod ffi {
    unsafe extern "C++" {
        include!("ffi_eg/clib/include/test.h");

        fn my_add(a: u32, b: u32) -> u32;
    }
}

//use cxx::CxxString;

#[cxx::bridge(namespace = "test::library")]
mod tstlib {

    unsafe extern "C++" {
        include!("ffi_eg/src/bridge/builders.h");
        include!("ffi_eg/clib/include/animal.h");

        type Animal;
        fn create_ape() -> UniquePtr<Animal>;
        fn create_cat() -> UniquePtr<Animal>;
        fn create_dog() -> UniquePtr<Animal>;
        fn create_pug() -> UniquePtr<Animal>;

        fn get_test(&self) -> i32;
        fn name(&self) -> &CxxString;
        fn num_legs(&self) -> u8;
        fn speak(&self) -> &CxxString;
    }
}

