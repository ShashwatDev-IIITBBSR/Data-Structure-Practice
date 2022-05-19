#include<iostream.h>
using namespace std;
class Rectangle
{
    private:
       int length;
       int breadth;
    public:
       Rectangle(int l, int b)
       {
           length=l;
           breadth=b;
       }
       int area();
       int perimeter();
};
int Rectangle::area()
{
    return length*breadth;
}
int Rectangle::perimeter()
{
    return 2*(length+breadth);
}
int main()
{
    int a,b;
    cout<<"Input length and breadth ";
    cin>>a>>b;
    Rectangle r1(a,b);
    cout<<"Area is "<<r1.area()<<endl;
    cout<<"Perimeter is "<<r1.perimeter();
}
