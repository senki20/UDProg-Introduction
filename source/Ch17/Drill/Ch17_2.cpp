#include "../../std_lib_facilities.h"

void print_arrayn(ostream& os,int* a,int n)
{
    for (int i = 0; i < n; i++)
    {
       // os<<a[i]<<"\t";
        os<<*(a+i)<<"\t";
    }
    cout<<"\n";
}

int main()
{
    int* szam = new int(7);
    int* p1 = szam;
    cout << p1 << "= "<<(*p1)<<endl;

    int* array = new int[7]{1,2,4,8,16,32,64};
    int* p2 = array;

    cout<<p2<<"= ";
    print_arrayn(cout,p2,7);


    int* p3 = p2;
    p2=p1;
    p2=p3;
    cout<<p1<<"= " << *p1 <<"\n";
    cout<<p2<<"= " << *(p2+1)<<"\n"; //Tömb
    cout<<p2<<"= ";
    print_arrayn(cout,p2,7);

    delete szam,p1,p3;
    delete[] array,p2;


    //Copy array[]
    array = new int[10];

    for (int i = 0; i < 10; i++)
    {
        *(array+i)=pow(2,i);
    //cout<<*(array+i)<<'\n';
    }
    
    
    p1=array;
    int* array2 = new int[10];
    p2=array2;

    for (int i = 0; i < 10; i++)
    {
        *(p2+i)=*(p1+i);
    }

    cout<<"p1 =";
    print_arrayn(cout,p1,10);
    cout<<"p2 =";
    print_arrayn(cout,p2,10);

    

    
    //Copy Vector<int>

    vector<int> *veector = new vector<int>{1,2,4,8,16,32,64,128,256,512};
    vector<int> *veector2 = new vector<int>(10);
    cout <<"\nv1 \tv2\n";
    
    for (int i = 0; i < 10; i++)
    {
         cout<<veector->at(i)<<"\t";
         veector2->at(i)=veector->at(i);
         cout <<veector2->at(i)<<"\n";

    }

    delete veector2,veector,p1,p2;
    delete[] array2;
    
   


      
    
    
}