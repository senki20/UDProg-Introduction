#include "../../std_lib_facilities.h"

void print_array10(ostream& os,int* a)
{
    for (int i = 0; i < 10; i++)
    {
        os<<a[i]<<"\n";
    }
    
}

void print_arrayn(ostream& os,int* a,int n)
{
    for (int i = 0; i < n; i++)
    {
        os<<a[i]<<"\n";
    }
    
}


void print_vectorn(ostream& os,vector<int>* a)
{
  for (auto item:(*a))
  {
      os<<item<<"\n";
  }
  
   
    
}



int main()
{

    int* arr = new int[10]{1,2,3,4,5,6,7,8,9,10};
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i]<<"\n";
    }
  
    delete[] arr;
   

    arr = new int[10]{100,101,102,103,104,105,106,107,108,109};
    print_array10(cout,arr);
    delete[] arr;
    arr = new int[11]{100,101,102,103,104,105,106,107,108,109,110};
    print_arrayn(cout,arr,11);
    delete[] arr;
    arr= new int[20]{100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119};
    print_arrayn(cout,arr,20);
    cout<<"Vector: \n";

    vector<int> *vec = new vector<int>{100,101,102,103,104,105,106,107,108,109};
    print_vectorn(cout,vec);
    vec = new vector<int>{100,101,102,103,104,105,106,107,108,109,110};
    print_vectorn(cout,vec);
    vec = new vector<int>{100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119};
    print_vectorn(cout,vec);

    
   return 0;
    
}