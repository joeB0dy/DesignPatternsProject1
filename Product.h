/*
#include <iostream>
#include <string>
using namespace std;

class AbstractPanel {
    private:
    string panelType = "";
    public:
    //virtual ~AbstractPanel() {}
    AbstractPanel() {panelType = "AbstractPanel";}  //default constructor.
    virtual string Panel() { return panelType = "This is the abstract panel.";}
};
class W10Panel: public AbstractPanel {
    public:
    string Panel() override { return "Word 2010 Panel";}//declare overide upon call with ::
};
class W90Panel: public AbstractPanel {
    public:
    string Panel() override{ return "Word 1990 Panel";}//declare overide upon call with ::
    };
class W00Panel: public AbstractPanel {
    public:
    string Panel() override{ return "Word 2000 Panel";}//declare overide upon call with ::
};
class W23Panel: public AbstractPanel {
    public:
    string Panel() override{ return "Word 2023 Panel";}//declare overide upon call with ::
};

class AbstractButton {
    public:
    virtual string Button() {return "This is abstract Button.";}
};
class W90Button: public AbstractButton {
    public:
    string Button() override{ return "Word 1990 Button";}//declare overide upon call with ::
};
class W00Button: public AbstractButton {
    public:
    string Button() override{ return "Word 2000 Button";}//declare overide upon call with ::
    };
class W10Button: public AbstractButton {
    public:
    string Button() override{ return "Word 2010 Button";}//declare overide upon call with ::
    };
class W23Button: public AbstractButton {
    public:
    string Button() override{ return "Word 2023 Button";}//declare overide upon call with ::
    };

class AbstractTextbox {
    public:
    virtual string Textbox() {return "This is an Abstract Textbox.";}
};
class W90Textbox: public AbstractTextbox {
    public:
     string Textbox()  override{ return "Word 1990 Textbox";} //declare overide upon call with ::
};
class W00Textbox: public AbstractTextbox {
    public:
    string Textbox()  override{ return "Word 2000 Textbox";} //declare overide upon call with ::
};
class W10Textbox: public AbstractTextbox {
    public:
    string Textbox()  override{ return "Word 2010 Textbox";} //declare overide upon call with ::
};
class W23Textbox: public AbstractTextbox {
    public:
    string Textbox() override{ return "Word 2023 Textbox";} //declare overide upon call with ::
};

*/