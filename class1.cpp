#include <iostream>

using namespace std;

class rectangle{
    public:
    double length;
    double breadth;

    void display(){
    double area=length * breadth;
    cout<<"Area of rectangle is:"<<area<<endl;
    }
};

int main()
{
rectangle R1;
R1.length=5.0;
R1.breadth =6.0;
R1.display();
return 0;

}
