#include "../../std_lib_facilities.h"

struct Point {
    int x;
    int y;
};


istream& operator>>(istream& stream, Point& p)
{
    char ch1;
    stream >> ch1;
    if (!stream || ch1 != '(') {
        stream.unget();
        if(stream.eofbit)
        {
            
            return stream;
        }
       
 error("( expected");
       
    }
    int x;
    int y;
    stream >> x;

     stream >> ch1;
    if (!stream || ch1!=',')
    {
        stream.unget();
        error(", expected");
       

    }
    stream >> y;


    stream >> ch1;
    if (!stream || ch1!=')')
    {
        stream.unget();
        error(") expected");
        return stream;

    }

    p.x=x;
    p.y=y;
   
    
    

}



ostream& operator<<(ostream& stream, Point& p)
{
    return stream << '(' << p.x << ',' << p.y << ')';
}


vector<Point> readfromfile(string filename)
{
    ifstream ifile {"mydata.txt"};
    vector<Point> temp;
    Point p;
    while (ifile)
    {
        ifile>>p;
       if (ifile.fail())
       {
           //cout << "fail";
       }
       else
       {
          temp.push_back(p);
       }
       
       
        
        
    }
    /*p=temp[temp.size()-1];
    temp.;*/
    
    return temp;
   
    
}

int main()
{   cout << "Enter 7 Points. Ex.:(2,1)\n";
    vector<Point> original_points;
   
    for (int i = 0; i < 7; i++)
    {
        Point p;
        cout << i+1 <<".> ";
        cin>> p;
        original_points.push_back(p);
    }

    for (auto point:original_points)
    {
       cout<<point<<endl;
    }
    
    ofstream file {"mydata.txt"};
    if (!file)
    {
        error("Failed to open file!");
    }

    for (auto point:original_points)
    {
       file<<point<<endl;
    }

    file.close();

    
    vector<Point> processed_points = readfromfile("mydata.txt");
    cout << "original : processed\n";
    for (int i = 0; i < processed_points.size(); i++)
    {
       cout << original_points[i] << ":" << processed_points[i]<<endl;

       if (original_points[i].x != processed_points[i].x ||original_points[i].y != processed_points[i].y || original_points.size()!=processed_points.size())
       {
           error("Something's wrong.");
       }
       
    }
    
    

   
    

    

   
    
    
    
    
    
}