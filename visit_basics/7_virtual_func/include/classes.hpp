#ifndef CLASSES_HPP
#define CLASSES_HPP

#include <iostream>
using namespace std;

class Animal {
public:
    // constructor:
    Animal() {
        cout << "Animal constructor called" << endl;
    }
    
    // virtual destructor:
    virtual ~Animal() {
        cout << "Animal destructor called" << endl;
    }
    
    // virtual function:
    virtual void makeSound() {
        cout << "generic animal sound" << endl;
    }
};

class Dog : public Animal {
public:
    // constructor:
    Dog() {
        cout << "Dog constructor called" << endl;
    }
    
    // destructor:
    ~Dog() {
        cout << "Dog destructor called" << endl;
    }
    
    void makeSound() override {
        cout << "dog sound: Woof!" << endl;
    }
};

#endif