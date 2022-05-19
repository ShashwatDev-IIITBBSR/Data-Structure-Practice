#include<iostream.h>
using namespace std;
typedef int roll_number;
int main()
{
    roll_number r1,r2,r3;
    enum roll_number {r4=10,r5,r6};
    cout<<"Enter roll number of 3 students ";
    cin>>r1>>r2>>r3;
    cout<<"Roll Numbers are "<<r1<<" "<<r2<<" "<<r3<<" "<<r4<<" "<<r5<<" "<<r6;
}