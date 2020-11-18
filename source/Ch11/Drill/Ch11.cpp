#include "../../std_lib_facilities.h"

int main()
{
    int birth_year = 2002;
    cout<<"Birth year\n";
    cout << "Decimal:" <<   '\t' << dec << 2002 <<endl ;
    cout << "Hexadecimal: "<<'\t'<< hex << 2002 <<endl;
    cout << "Octal: \t" <<'\t'<< oct << 2002 <<endl;
    cout << "Age"<<endl;
    cout << "Decimal:" <<   '\t' << dec << 2020-2002<<endl ;
    cout << "Hexadecimal: "<<'\t'<< hex << 2020-2002 <<endl;
    cout << "Octal: \t" <<'\t'<< oct << 2020-2002 <<endl;
    int a,b,c,d;
cin >> a >>oct >> b >> hex >> c >> d;
cout << a << "\t" << b << " \t " << c << " \t " << d << " \n " ;

cout << 1234567.89 <<defaultfloat <<"\tDefault"<<endl;
cout << 1234567.89 <<fixed <<"\tFixed"<<endl;
cout << 1234567.89 <<scientific<< "\tScientific"<<endl;

//Random nevek//

   
    cout << setw(8) << "Veres" << setw(9) << "Richárd" << setw(14) << "0991188666" << setw(25) << "Veres@asdfghj.com" << endl;
	cout << setw(8) << "Nagy" << setw(8) << "Laci" << setw(14) << "0662288766" << setw(25) << "nagy@asdfghj.com" << endl;
	cout << setw(8) << "Szabó" << setw(10) << "András" << setw(14) << "0993388996" << setw(26) << "Szabó@asdfghj.com" << endl;
	cout << setw(8) << "Stadler" << setw(8) << "Nati" << setw(14) << "0991144666" << setw(25) << "Stadler@asdfghj.com" << endl;
	cout << setw(8) << "Szabó" << setw(9) << "Peti" << setw(14) << "0661338666" << setw(26) << "Szabó@asdfghj.com" << endl;


}