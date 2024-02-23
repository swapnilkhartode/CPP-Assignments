#include<iostream>
#include<string.h>
using namespace std;
int count=3;
class Food
{
    private :
      int fid;
      char fname[90];
      float fprice;

    public :
       void setData(int id,char ch[],float price)
       {
          fid=id;
          strcpy(fname,ch);
          fprice=price;
       }
       void showData()
       {
            cout<<fid<<"\t"<<fname<<"\t"<<fprice<<"\n";
       }

       
       void updateFoodInfo()
       {
                int ch;
          do
           {
                    int choice;
                    cout<<"Enter the id of food which information is updated\n";
                    cin>>choice;
                    printf("1 : only update the id\n");
                    printf("2 : only update the foodname");
                    printf("3 : only update the price\n");
                    printf("4 : udate id and food name\n");
                    printf("5 : update foodname and price \n");
                    printf("6 : update id and price\n");
                    printf("7 : Update All info\n");
                    printf("8 : Exit\n");
                    cout<<"Enter the choice\n";
                    cin>>ch;
                
                    switch(ch)
                    {
                                int id1;
                                case 1: 
                                {
                                    for(int i=0;i<count;i++)
                                    {
                                        if(this->fid==choice)
                                        {
                                            
                                            cout<<"Enter the New id\n";
                                            cin>>id1;
                                            this->fid=id1;
                                            printf("id Updated Succesfully!!!\n");

                                            break;

                                        }

                                    }
                                    break;  
                                }
                                case 2 :
                                {
                                    char ch1[90];
                                    for(int i=0;i<count;i++)
                                    {
                                        if(this->fid==choice)
                                        {
                                            
                                            cout<<"Enter the Food name\n";
                                            cin>>ch1;
                                            strcpy(this->fname,ch1);
                                            printf("foodname Updated Succesfully!!!\n");

                                            break;
                                        }
                                    }  
                                    break; 
                                }
                                case 3 :
                                {
                                    
                                    for(int i=0;i<count;i++)
                                    {
                                        if(this->fid==choice)
                                        {
                                            float price;
                                            cout<<"Enter the price\n";
                                            cin>>price;
                                            this->fprice=price;
                                            printf("Price updated Successfully\n");
                                            break;
                                        }
                                    }  
                                    break;     

                                }
                                case 4:
                                {
                                    for(int i=0;i<count;i++)
                                    {
                                        if(this->fid==choice)
                                        {
                                            int id1;
                                            float price;
                                            cout<<"Enter the New id & price\n";
                                            cin>>id1>>price;
                                            this->fid=id1;
                                            this->fprice=price;
                                            printf("id and price Updated Succesfully!!!\n");

                                            break;
                                        }
                                    }
                                    break;
                     
                                }
                                case 5:
                                {
                                  //update foodname and price
                                  char ch1[90];
                                  for(int i=0;i<count;i++)
                                    {
                                        if(this->fid==choice)
                                        {
                                            
                                            float price;
                                            cout<<"Enter the foodname & price\n";
                                            cin>>ch1>>price;
                                            strcpy(this->fname,ch1);
                                            this->fprice=price;
                                            printf("id and price Updated Succesfully!!!\n");

                                            break;
                                        }
                                    }
                                   break;
                                }
                                case 6 :
                                {
                                    char ch1[90];
                                    for(int i=0;i<count;i++)
                                    {
                                        if(this->fid==choice)
                                        {
                                            float price;
                                            cout<<"Enter the id & price\n";
                                            cin>>ch1>>price;
                                            strcpy(this->fname,ch1);
                                            this->fprice=price;
                                            printf("id and price Updated Succesfully!!!\n");

                                            break;
                                        }
                                    }
                                   break;
                                }
                                case 7:
                                {
                                    int id1;
                                    float price;
                                    char ch1[90];
                                    for(int i=0;i<count;i++)
                                    {
                                        if(this->fid==choice)
                                        {
                                            
                                            cout<<"Enter the New id ,foodname & price\n";
                                            cin>>id1>>ch1>>price;
                                            this->fid=id1;
                                            strcpy(this->fname,ch1);
                                            this->fprice=price;
                                            printf("id , foodname and price Updated Succesfully!!!\n");

                                            break;
                                        }
                                    }
                                    break;
                     
                                } 
                                default :
                                  cout<<"Invalid Choice\n";        
                    }
            }    
           while(ch!=8);
        }
};

int main()
{
    
    Food f[count];
    int id;
    char name[90];
    float price;

    
    cout<<"Enter the information in object\n";
    for(int i=0;i<count;i++)
    {
        cout<<"Enter id , name , price\n";
        cin>>id>>name>>price;
        f[i].setData(id,name,price);
    }
    cout<<"Displays the all food information\n";
    for(int i=0;i<count;i++)
    {
        f[i].showData();
    }
    f->updateFoodInfo();
    return 0;
    
}