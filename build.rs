
fn main() {
	cxx_build::bridge("src/main.rs")
		.include("clib/include")
		.include("src/bridge")
		.file("src/bridge/builders.cc")
		.flag_if_supported("-std=c++17")
		// .link_lib_modifier("+lclib/build/src/cpp_test_lib")
		.compile("ff_eg_bridge");

		println!("cargo:rustc-link-lib=static=cpp_test_lib");
		println!("cargo:rustc-link-search=native=clib/build/src");
	
		println!("cargo:rerun-if-changed=src/main.rs");
		println!("cargo:rerun-if-changed=src/bridge/builders.cc");
		println!("cargo:rerun-if-changed=src/bridge/builders.h");
}
