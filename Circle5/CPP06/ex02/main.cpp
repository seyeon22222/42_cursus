#include "Base.hpp"

int main()
{
	Base *p;

	p = generate();
	identify(p);
	identify(*p);
}