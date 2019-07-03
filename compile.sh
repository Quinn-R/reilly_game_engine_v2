clear

g++ -std=c++11 -pthread src/*.cpp src/*/*.cpp src/*/*.hpp inc/*.hpp -Ilib/SFML-2.5.1/include -Llib/SFML-2.5.1/lib -lsfml-graphics -lsfml-window -lsfml-system -o bin/app 