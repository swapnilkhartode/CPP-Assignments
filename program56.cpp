#include<iostream>
using namespace std;
// Calculate circle area and circumference.
class Circle
{
    private :
      float radius;

    public :
       void setValue(float r)
       {
          radius=r;
       }
       float CalculateArea()
       {
          float ar= 3.14f*radius*radius;
          return ar;
         
       }
       float CalculateCircumference()
       {
          float crcm=2*3.14f*radius;
          return crcm;
         
       }
};

int main()
{
    Circle c;
    float r;
    cout<<"Enter the radius\n";
    cin>>r;
    c.setValue(r);
    float area=c.CalculateArea();
    float circum=c.CalculateCircumference();

    cout<<"The area of circle is "<<area<<"\t"<<"and\t circumference is "<<circum;
}