/*
#include <iostream>
#include <string>
#include "Product.h"
using namespace std;

//abstract factory that acts as interface for concrete factories
class AbstractFactory {

public:

AbstractFactory() {cout <<"Abstracted Factory" <<endl;}
virtual AbstractPanel *createPanel() = 0;
virtual AbstractButton *createButton()  = 0;
virtual AbstractTextbox *createTextbox() = 0;

};

class WordClient {
   
   //AbstractFactory factory;
    public: 
    //AbstractFactory factory;
    void createWord(string type) {
        if(type == "Word 90"){
            AbstractFactory factory = Word90Factory->getInstance();
        }
    }

};

//concrete Factory. 
//These would be singleton factories that would only call themselves.
class Word90Factory: public AbstractFactory {
    private: 
    static Word90Factory* instance;
    Word90Factory(){cout << "Word 1990 Factory Created" << endl;};      //private default constructor
    public: 
    static Word90Factory *getInstance() {   //points to this specific instance.
        if(instance ==NULL)
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
        if(instance ==NULL)
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
        if(instance ==NULL)
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
        if(instance ==NULL)
        {
            instance = new Word23Factory();
        }
        return instance;
    }
    AbstractPanel *createPanel() override {return new W23Panel();}                //how to override
    AbstractButton *createButton()override {return new W23Button();}
    AbstractTextbox *createTextbox() override{ return new W23Textbox();}

};



int main() {

    
    system("pause");
    return 0;
}


/*  DEVELOPMENT NOTES TO SELF:

10/13/2023
Implementing the product stuff. fucking around with it. Yet to test it. Bout to go on a date rq. I'm tryna 
eat some coochie today or soon hopefully >:)
get the abstract factory stuff implemented by saturday

/*AbstractPanel createPanel(string type);
AbstractTextbox createTextbox();
AbstractButton createButton();*/

//*/