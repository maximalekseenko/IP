g++ --version

# create build directory
mkdir ./build
cd ./build

# compile
g++ -std=c++17 -c ../*.cpp

# link
g++ *.o

# run
./a.out

# clean
rm -r ../build
