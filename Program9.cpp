// create class name as  power with two functions 

#include<iostream>
using namespace std;
class power
{
    private :
        int base,index;
    public :
        void setValue(int x, int y)
        {
            base=x;
            index=y;
        }
        int getPower()
        {
            int p=1;
            for(int i=1;i<=index;i++)
            {
                p=p*base;
            }
            return p;
        }
};
int main()
{
    power p;
    p.setValue(5,3);
    int result=p.getPower();
    cout<<"Power is : "<<result;
    return 0;
}