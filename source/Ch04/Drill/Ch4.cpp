#include "../../std_lib_facilities.h"

double alltom(string unit,double num)
{
    if (unit=="m")
    {
       return num;
    }
    if (unit=="in")
    {
        return (num*2.54)/100;
    }
    if (unit=="ft")
    {
        return ((num*12)*2.54)/100;
    }
    if (unit=="cm")
    {
        return num/100;
    }
    simple_error("Error converting values!");
    return 0;
    
    
    
}


int main()
{
   
    double in1,in2;
    double smallest =10000000;
    double biggest=0;
    double sum=0;
    int count=0;
    vector<double> values;
    string unit;

    while (cin >> in1)
    {
     cin >> unit;
     if (unit!="cm" && unit!="m"  && unit!="in" && unit!="ft")
     {
         simple_error("Wrong Unit!  "+unit);
     }
     in2 = alltom(unit,in1);
     sum+=in2;
     count++;
     
        values.push_back(in2);


        /*
        if (in1==in2)
        {
               cout<< "The numbers are equal"<<endl; 
        }
        else
        {
            if (in1<in2)
            {
                cout<< "The bigger number is: " << in2<<endl;
                cout<< "The smaller number is: " << in1<<endl;
                
            }
            else
            {
                cout<< "The bigger number is: " << in1 <<endl;
                cout<< "The smaller number is: " << in2<<endl;
            }

            if (abs(in1-in2)<1.0/100)
            {
                cout << "The numbers are almost equal"<<endl;
            }
        }
        */
           
            if (in2>biggest)
            {
                biggest=in2;
                 cout << in2 << " ";
                cout << "m the largest so far";
                cout << endl;
            }
            else
            {
                 if (in2<smallest)
            {
                smallest=in2;
                 cout << in2 << " ";
                cout << "m the smallest so far";
                cout << endl;
            }
            }
            

           
            //cout << smallest << endl << endl;
            

            
            
            
            
            
            
    }
        
        cout <<"Biggest: " << biggest << "m"<<endl;
        cout <<"Smallest: " << smallest<< "m"<<endl;
        cout <<"Number of values: " << count<<endl;
        cout <<"Sum: " << sum<< "m"<<endl;
        sort(values);
        for (auto value:values)
        {
            cout << value << "m \n";
        }
        
    
    return 0;
}