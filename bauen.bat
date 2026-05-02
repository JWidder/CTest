cmake -S . -B build
cmake --build build --config Debug
cd build
ctest -C Debug -V
cd ..
