#include "Base.hpp"

void test_null() {
    Base *ptr = generate();
    identify(ptr);

    Base *nullPtr = NULL;
    identify(nullPtr);

}

int main() {
	Base* ptr;
	ptr = generate();

    Base *ptrA = generate();
    Base *ptrB = generate();
    Base *ptrC = generate();

	Base& refr = *ptr;

	identify(ptr);
	identify(refr);

    std::cout << "Testing identify(Base *ptr):" << std::endl;
    identify(ptrA);
    identify(ptrB);
    identify(ptrC);

    std::cout << "\nTesting identify(Base &ptr):" << std::endl;
    identify(*ptrA);
    identify(*ptrB);
    identify(*ptrC);

	delete ptr;
    delete ptrA;
    delete ptrB;
    delete ptrC;

    return 0;
}
