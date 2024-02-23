#include<iostream>
using namespace std;
// Calculate circle area and circumference.
class Rectangle
{
    private :
      float length,width;

    public :
       void setValue(float len,float wid)
       {
          length=len;
          width=wid;
       }
       float CalculateArea()
       {
          float recar=length*width ;
          return recar;
         
       }
       float CalculatePerimetr()
       {
          float perimtr=(2*length)+(2*width);
          return perimtr;
         
       }
};

int main()
{
    Rectangle r;
    float l,w;
    cout<<"Enter the length and width of rectangle\n";
    cin>>l>>w;
    r.setValue(l,w);
    float area=r.CalculateArea();
    float peri=r.CalculatePerimetr();

    cout<<"The area of rectangle is "<<area<<"\t"<<"and\t perimetr is "<<peri;
}