#include "../../std_lib_facilities.h"


int main()
{

	string first_name;
	string friend_name;
	char friend_sex = 0;
	int age;

	//aposztróf unicode
	//cout << "\u0027";

	cout << "Enter the name of the person you want to write to: ";
	cin >> first_name;
	
	cout << "Dear " << first_name << ",\n" <<
	"How are you? I haven\u0027t heard anything from you for a while. I hope you\u0027re okay.\n";
	
	cout << "Enter friend name!: ";
	cin >> friend_name;
	
	cout << "Have you seen " << friend_name << " lately?\n";
	
	cout << "Enter friend sex: ";
	cin >> friend_sex;
	
	if (friend_sex=='m')
	{
		cout << "If you see " << friend_name << " please ask him to call me.\n";
	}
	else
	{
		if (friend_sex=='f')
		{
			cout << "If you see " << friend_name << " please ask her to call me.\n";
		}
		else
		{
			simple_error("Please enter f for female or m for male\n");
			
		}
	}


	cout << "Enter age: ";
	cin >> age;

	if (age<=0||age>=110)
	{
		simple_error("you\u0027re kidding!");
	}

	cout << "I hear you just had your birthday and you are " << age << " years old.\n";

	if (age<12)
		{
			cout << "Next year you will be " << age++ << endl;
		}
	if (age==17)
		{
			cout << "Next year you will be able to vote.\n";
		}
	if (age>70)
		{			
		cout << "I hope you are enjoying retirement.>\n";
		}		

	cout << "Yours sincerely, \n\n\nVeres Richárd \n";

	
	
	return 0;	
	
}