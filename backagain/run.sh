#!/usr/bin/env bash

mkdir -p build && \
	cd rust && \
	echo "Build Rust" &&\
	cargo build && \
	cd ..  &&\
	cp rust/target/debug/librust.so build/librust.so && \
	echo "Build C code" && \
	g++ -o build/libexample.so src/main.c --shared && \
	gcc -o build/basic src/main.c  -lrust -Lbuild && \
	LD_LIBRARY_PATH=`pwd`/build ./build/basic
	
