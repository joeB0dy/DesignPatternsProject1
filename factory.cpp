#include <iostream>

using namespace std;

class AbstractFactory{
public:
virtual ~AbstractFactory(); // i guess this helps with pointers.
virtual Product *FactoryMethod() const =0;  //why virtual, why const, why static.

//the Factory's Purpose is more "business logic" that relies on the products creation.
string someOperation() const {
    Product* product = this->FactoryMethod();
    string result = "Abstract Factory has made " + product->Stuff();
    delete product; //deallocate.
    return result;
}
};
//class Client {};      //what is Client purpose.

class ConcreteFactory1: public AbstractFactory{
public:
Product* FactoryMethod() const override {
    return new ConcreteProductA1();
}
};
class ConcreteFactory2: public AbstractFactory{
    public:
    Product* FactoryMethod() const override {
        return new ConcreteProductB1();
    }
};


//lets start here before going into the factory. Step 1.
class Product {

    public: 
    virtual string Stuff() const =0;
};
class ConcreteProductA1: public Product {
    public:
    string Stuff() const override {return "ConcreteProductA1 Stuff";}

};
class ConcreteProductB1: public Product {
    public:
    string Stuff() const override {return "ConcreteProductB1 Stuff";}

};
class ConcreteProductA2: public Product {
    public:
    string Stuff() const override {return "OOGA BOOGA ConcreteProductA2 Stuff";}

};


void ClientCode(const AbstractFactory &factory) {
    cout << "I AM CLIENT CODE, I AM UNAWARE OF FACTORY STUFF BUT IT WORKS\n." << factory.someOperation() << endl;

}

int main() {
    cout << "HELLO, ConcreteFactory1 object initialized." << endl;
    AbstractFactory* factory = new ConcreteFactory1();
    ClientCode(*factory);
    cout << "\n\nHELLO, ConcreteFactory2 object initialized." << endl;
    AbstractFactory *fact2 = new ConcreteFactory2();
    ClientCode(*fact2);

    delete factory;
    delete fact2;

    system("pause");
}

/*
So far i understand the major classes. its going into the  specifics thats troublesome.
*/