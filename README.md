# STL library for c

# 1. Compile source
gcc -Wall -Iinclude -c src/array.c -o src/array.o

# 2. Create library
ar rcs libstl.a src/array.o

# 3. Build example
gcc -Wall -Iinclude examples/example_array.c -L. -lstl -o examples/example_array.exe

# 4. Run example
.\examples\example_array.exe