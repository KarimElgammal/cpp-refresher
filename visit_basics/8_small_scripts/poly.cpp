// polymorphism_virtual_func.cpp
//inspired from https://youtu.be/4NPOIaUxnnk?si=zoSvnuL31JKYdeXN
#include<iostream>
using namespace std;

// base class
class Square {
    private:
        int x;

    public:
    // constructor, _x is parameter, x is class member
    Square(int _x) : x(_x) {}
    virtual ~Square() {
        cout << "Square destructor called" << endl;
    }
    void setX(int _x) {
        x = _x;
    }

    int getX() const {
        return x;
    }

    virtual void print() const {
        cout << "Square with side length " << x << endl;
    }
};

// derived class rectangle
class Rectangle: public Square {
    private:
        int y;

    public:
    Rectangle(int _x, int _y) : Square(_x), y(_y) {}
    ~Rectangle() {
        cout << "Rectangle destructor called" << endl;
    }

    void setY(int _y) {
        y = _y;
    }

    int getY() const {
        return y;
    }

    void print() const override {
        cout << "Rectangle with side lengths " << getX() << " and " << getY() << endl;
    }
};

class Foo : public Square {
    public:
    using Square:: Square;
    ~Foo() {
        cout << "Foo destructor called" << endl;
    }
    void print() const override{
        cout << "Foo with side length " << getX() << endl;
    }
};

void foo(const Square& shape) {
    cout << "Shape has side length: " << shape.getX() << endl;
    cout << "The print function outcome is: " << endl;
    shape.print();
}

int main() {
    Square square(5);
    Rectangle rectangle(3, 4);
    cout <<  endl;
    foo(square);
    cout <<  endl;
    cout << "\n---using polymorphism---" << endl;
    foo(rectangle);

    cout << endl;
    cout << "---using pointers---" << endl;
    Square* ptr = &rectangle;
    ptr->print();
    Rectangle* ptr2 = &rectangle;
    ptr2->print();
    Square* ptr3 = &square;
    ptr3->print();

    cout << endl;
    cout << "---using references---" << endl;
    Square& ref = rectangle;
    ref.print();
    Square& ref2 = square;
    ref2.print();

    // create an array of pointers to Square
    cout << endl;
    cout << "---using array and pointers---" << endl;

    Square* shapes[] = {new Square(4), new Rectangle(3, 5), new Foo(7)};
    for (Square* shape : shapes) {
        shape->print();
    }
    // delete the shapes
    for (Square* shape : shapes) {
        delete shape;
    }
    return 0;
}