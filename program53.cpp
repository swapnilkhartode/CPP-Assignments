#include<iostream>
using namespace std;
#include<stdbool.h>

//Write program to create class name as CheckChar with two functions 

class CheckChar
{
    private :
        char ch;

    public :
        void setChar(char ch)
        {
            this->ch=ch;
        }

        bool checkChar()
        {
            if((ch>=65 && ch<=90 ) || (ch>=97 && ch<= 122))
            {
                return true;
            }
            else if(ch>=48 && ch<=57)
            {
                return true; 
            }
            else
            {
                return false;
            }
        }
};
int main()
{
    CheckChar ck;
    char ch;
    cout<<"Enter the character\n";
    cin>>ch;
    ck.setChar(ch);
    bool r = ck.checkChar();
    if(r==true)
    {
        cout<<"Given character is digit or alphabet\n";
    }
    else
    {
        cout<<"it is a special symbol\n";
    }

    return 0;
    
}