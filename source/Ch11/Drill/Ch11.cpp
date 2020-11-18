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

    cout <<left<<setw(10) << "Veres" << setw(10) << "Richárd" <<left<< setw(14) << "1234567891" << setw(25) << "veres@sample.com" << endl;
	cout <<left<<setw(10) << "Kovács"<< setw(10) << " Niki"   <<left<< setw(14) << "1234567891" << setw(25) << "kovacs@sample.com" << endl;
	cout <<left<<setw(10) << "Szabó" << setw(10) << " Lajos"  <<left<< setw(14) << "1234567891" << setw(25) << "szabo@sample.com" << endl;
	cout <<left<<setw(10) << "Nagy"  << setw(10) << "Bence"   <<left<< setw(14) << "1234567891" << setw(25) << "nagy@sample.com" << endl;
	cout <<left<<setw(10) << "Kocsis"<< setw(10) << "Péter"   <<left<< setw(14) << "1234567891" << setw(25) << "kocsis@sample.com" << endl;





}