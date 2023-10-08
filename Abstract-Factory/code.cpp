#include <iostream>
using namespace std;

class IButton
{
public:
    virtual void press() = 0;
};

class MacButton : public IButton
{
public:
    void press()
    {
        cout << " Mac Button Pressed" << endl;
    }
};

class WinButton : public IButton
{
public:
    void press()
    {
        cout << " Win Button Pressed" << endl;
    }
};

class ItextBod
{

public:
    virtual void show() = 0;
};

class MacTextBox : public ItextBod
{

public:
    void show()
    {
        cout << "MaxtextBox show" << endl;
    }
};

class WinTextBox : public ItextBod
{

    void show()
    {
        cout << "Wintextbox show" << endl;
    }
};

class IFactory
{
public:
    virtual IButton *CreateButton() = 0;
    virtual ItextBod *CreateTextBox() = 0;
};

class MacFactory : public IFactory
{
public:
    IButton *CreateButton()
    {
        return new MacButton();
    }
    ItextBod *CreateTextBox()
    {
        return new MacTextBox();
    }
};

class WinFactory : public IFactory
{
public:
    IButton *CreateButton()
    {
        return new WinButton();
    }
    ItextBod *CreateTextBox()
    {
        return new WinTextBox();
    }
};

class GUIAbstractFactory
{
public:
    static IFactory *CreateFactory(string osType)
    {
        if (osType == "Windows")
        {
            return new WinFactory();
        }
        else if (osType == "Mac")
        {
            return new MacFactory();
        }
    }
};

int main()
{
    cout << "Enter your OS" << endl;
    string osType;
    cin >> osType;
    IFactory *fact = GUIAbstractFactory::CreateFactory(osType);
    IButton *button = fact->CreateButton();
    button->press();

    ItextBod *textBox = fact->CreateTextBox();
    textBox->show();
    return 0;
}