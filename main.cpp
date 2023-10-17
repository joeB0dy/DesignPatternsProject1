//*
#include <iostream>
#include <string>
#include "Product.h"
using namespace std;

//abstract factory that acts as interface for concrete factories
class AbstractFactory {

public:

AbstractFactory() {cout << "Abstract Factory Called." <<endl;}
virtual AbstractPanel *createPanel() = 0;
virtual AbstractButton *createButton()  = 0;
virtual AbstractTextbox *createTextbox() = 0;

};



//concrete Factory. 
//These would be singleton factories that would only call themselves.
class Word90Factory: public AbstractFactory {
    private: 
    static Word90Factory* instance;
    Word90Factory(){cout << "Word 1990 Factory Created" << endl;};      //private default constructor
    public: 
    static Word90Factory *getInstance() {   //points to this specific instance.
        if(!instance)
        {
            instance = new Word90Factory();
        }
        return instance;
    }
    //point to specific items.
    AbstractPanel *createPanel() override {return new W90Panel();}                //how to override
    AbstractButton *createButton()override {return new W90Button();}
    AbstractTextbox *createTextbox() override{ return new W90Textbox();}


};
class Word00Factory: public AbstractFactory {
    static Word00Factory *instance;
    Word00Factory(){cout << "Word 2000 Factory Created" <<endl;}
    public:
        static Word00Factory *getInstance() {   //points to this specific instance.
        if(!instance)
        {
            instance = new Word00Factory();
        }
        return instance;
    }
    AbstractPanel *createPanel() override {return new W00Panel();}                //how to override
    AbstractButton *createButton()override {return new W00Button();}
    AbstractTextbox *createTextbox() override{ return new W00Textbox();}


};
class Word10Factory: public AbstractFactory {
    private:
    static Word10Factory *instance;
    Word10Factory(){cout << "Word 2010 Factory Created" <<endl;}
    public:
    static Word10Factory *getInstance() {   //points to this specific instance.
        if(!instance)
        {
            instance = new Word10Factory();
        }

        return instance;
    }
    AbstractPanel *createPanel() override {return new W10Panel();}                //how to override
    AbstractButton *createButton()override {return new W10Button();}
    AbstractTextbox *createTextbox() override{ return new W10Textbox();}
};//end of word10Factory
class Word23Factory: public AbstractFactory {
    private:
    static Word23Factory *instance;
    Word23Factory(){cout << "Word 2023 Factory Created" <<endl;}
    public:
        static Word23Factory *getInstance() {   //points to this specific instance.
        if(!instance)
        {
            instance = new Word23Factory();
        }
        return instance;
    }
    AbstractPanel *createPanel() override {return new W23Panel();}                //how to override
    AbstractButton *createButton()override {return new W23Button();}
    AbstractTextbox *createTextbox() override{ return new W23Textbox();}

};

//Initialize pointers to 0 so on first call in main it would be initialized for getInstance().
Word90Factory *Word90Factory::instance =0;
Word00Factory *Word00Factory::instance =0;
Word10Factory *Word10Factory::instance =0;
Word23Factory *Word23Factory::instance =0;


int main() {

    // Create instances of the factories
    Word90Factory *factory90 = Word90Factory::getInstance();
    // Create instances of the concrete classes using the factories
    AbstractPanel *panel = factory90->createPanel();
    AbstractButton *button = factory90->createButton();
    AbstractTextbox *textbox = factory90->createTextbox();

    // Word90 stuff. could've defined in abstractFactory. made basically boilerplate code.
    cout << panel->Panel() << endl;
    cout << button->Button() << endl;
    cout << textbox->Textbox() << endl << endl;
    //word 00 stuff
    Word00Factory *factory00 = Word00Factory::getInstance();


    panel = factory00->createPanel();
    button = factory00->createButton();
    textbox = factory00->createTextbox();

    cout << panel->Panel() << endl;
    cout << button->Button() << endl;
    cout << textbox->Textbox() << endl << endl;
    
    //Word 10 Stuff
    Word10Factory *factory10 = Word10Factory::getInstance();
   
    panel = factory10->createPanel();
    button = factory10->createButton();
    textbox = factory10->createTextbox();

    cout << panel->Panel() << endl;
    cout << button->Button() << endl;
    cout << textbox->Textbox() << endl << endl;

    //Word23 Stuff
    Word23Factory *factory23 = Word23Factory::getInstance();
    panel = factory23->createPanel();
    button = factory23->createButton();
    textbox = factory23->createTextbox();

    cout << panel->Panel() << endl;
    cout << button->Button() << endl;
    cout << textbox->Textbox() << endl << endl;
    
    // delete the instances
    delete panel;
    delete button;
    delete textbox;

    
    system("pause");
    return 0;
}
