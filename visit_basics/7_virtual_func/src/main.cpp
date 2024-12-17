#include <iostream>
#include "../include/classes.hpp"

using namespace std;

int main() {
    cout << "creating a Dog through Animal pointer:" << endl;    
    Animal* pet = new Dog(); // allocate memory on the heap for Dog object then assign it to Animal pointer
    pet->makeSound(); // calls the overridden makeSound() method in Dog class
    delete pet; // call destructors of Animal and Dogclasses

    cout << "\ncreating a Dog directly:" << endl;
    Dog myDog;   // stack allocation: will be automatically destroyed when going out of scope
    myDog.makeSound();
    //myDog.~Dog();

    cout << "\ncreating an Animal directly:" << endl;
    Animal myAnimal;
    myAnimal.makeSound();    

    return 0;
}