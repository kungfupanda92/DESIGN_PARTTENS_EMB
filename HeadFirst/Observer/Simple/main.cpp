#include <iostream>
#include "SimpleSubject.h"
#include "SimpleObserver.h"

using namespace std;

void test(int &test)
{
    test += 10;
    std::cout << "Test = " << test << std::endl;
}
int main()
{
    SimpleSubject simpleSubject;
    SimpleObserver simpleObserver(simpleSubject);
    SimpleObserver simpleObserver2(simpleSubject);
    SimpleObserver simpleObserver3(simpleSubject);
    simpleSubject.setValue(10);

    simpleSubject.removeObserver(&simpleObserver2);
    simpleSubject.removeObserver(&simpleObserver3);
    simpleSubject.setValue(115);

    int value = 100;
    int value2 = 10;
    test(value);
    test(value2);
    return 0;
}
