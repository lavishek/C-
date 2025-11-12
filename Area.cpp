#include <iostream>

using namespace std;
class circle{
    public:
    double radius;
    const double PI = 3.1416;
void display(){
    double area= PI *radius*radius;
    double circumference = 2*PI*radius;
    cout<<area<<"\n";
    cout<<circumference<<endl;
}
};

int main()
{
circle c1;
c1.radius=5.0;
c1.display();
return 0;
}
