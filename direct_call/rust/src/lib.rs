
#[no_mangle]
unsafe extern "C" fn oxidize(i: i32) -> i32 {
    println!("Oxidize {}", i);
    i+1
}
