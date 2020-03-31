#include <iostream>

using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Default constructor from base" << endl;
    }

    Base(char c)
    {
        _char = c;
        cout << "Constructor from base" << endl;
    }

    virtual void hello()
    {
        cout << "Hello from base" << endl;
    }

    void world()
    {
        cout << "World from base" << endl;
    }

    virtual ~Base()
    {
        cout << "Goodbye from base" << endl;
    }
private:
    char _char;
};

class Derived: public Base
{
public:
    Derived()
    {
        cout << "Default constructor from derived" << endl;
    }

    Derived(char c): Base(c + 1), _char(c)
    {
        cout << "Constructor from derived" << endl;
    }

    virtual void hello()
    {
        cout << "hello from derived" << endl;
    }

    void world()
    {
        cout << "World from derived" << endl;
    }

    ~Derived()
    {
        cout << "Goodbye from derived" << endl;
    }
private:
    char _char;
};

int main()
{
    Derived *pDerived = new Derived('X');
    Base *pBase = (Base *)pDerived;
    pBase->hello();
    pBase->world();
    delete pDerived;

    return 0;
}
