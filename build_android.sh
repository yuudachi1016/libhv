#! /bin/sh
cd ./_build
cmake ../ -DCMAKE_TOOLCHAIN_FILE=../android.toolchain.cmake
cmake --build . --config Release -j8
