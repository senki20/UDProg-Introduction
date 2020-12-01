#include "../../std_lib_facilities.h"

vector<int> gv ={1,2,4,8,16,32,64,128,256,512};

void f(vector<int> vec)
{
    vector<int> lv(vec.size());
    for (int i = 0; i < vec.size(); i++)
    {
        lv[i]=gv[i];
        cout<<lv[i]<<"\t";
    }
    cout<<"\n";
    vector<int>lv2 = vec;
    for (auto item:lv2)
    {
        cout<<item<<"\t";
    }
    cout<<"\n";
    
}



int main()
{
f(gv);
vector<int> vv(10);
int temp =1;
for (int i = 0; i < 10; i++)
{
    temp *= i+1;
    vv[i]=temp;
    cout<< vv[i]<<"\t";
}
cout<<"\n";

f(vv);



return 0;
}