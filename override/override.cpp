#include <iostream>

class Foo {
public:
    virtual void foo() { std::cout << "Foo::foo()\n"; }
};

class Bar final : public Foo {
public:
    void foo() override { std::cout << "Bar::foo()\n"; }
};

int main()
{
    Foo foo;
    foo.foo();
    Bar bar;
    bar.foo();
    return 0;
}
