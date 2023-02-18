g++ --version

# create build directory
mkdir ./build
cd ./build

# compile
g++ -std=c++11 -c ../*.cpp

# link
g++ *.o

# run
./a.out

# clean
rm -r ../build
