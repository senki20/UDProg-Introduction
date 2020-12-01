#include "../../std_lib_facilities.h"

int ga[] ={1,2,4,8,16,32,64,128,256,512};

void f(int arr[],int size)
{
    int la[10];
    cout<<"la = ";
    for (int i = 0; i < 10; i++)
    {
        la[i]=ga[i];
        cout<<la[i]<<"\t";
    }
    cout<<"\n";
    
    int *p = new int[size]; 
    cout<<"*p = ";
	for (int i = 0; i < size; ++i)
	{
		*(p+i) = arr[i];
        cout<<*(p+i)<<"\t";
	}
    cout<<"\n";
    delete[] p;
    
}


int main()
{
    f(ga,10);
    int aa[10];
    int temp = 1;
    cout<<"aa = ";
	for (int i = 0; i < 10; i++)
	{
		temp *= i+1;
		aa[i] = temp;
        cout << aa[i]<<"\t";
	}
    cout<<"\n";
    f(aa,10);
    return 0;
}