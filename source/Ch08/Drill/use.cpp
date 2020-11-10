


#include "my.h"

int foo;
int i;

int main()
{
	foo = 7;
	i = 99;
	
	print_foo();
	print(i);
	swap_r(foo,i);
	print_foo();
	print(i);
	swap_v(foo,i);
	print_foo();
	print(i);

	
	/*swap_cr(foo,i);
	print_foo();
	print(i);*/
	
	
	return 0;
}