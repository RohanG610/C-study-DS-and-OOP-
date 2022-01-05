//Console-Based Book WishList Application
#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;
class DataBook{
private:
int length=0;
float price[100];
char book_name[100][100];
char author[100][100];
bool isOwned[100];
public:
void get_info()
{
    char own;
    cout<<"Enter Name Of Book(100 characters limit): ";
    cin.getline(book_name[length],100);//Why I have to do that can anyone explain to me
    cin.getline(book_name[length],100);
    cout<<"Enter Author Of Book(100 characters limit): ";
    cin.getline(author[length],100);
    cout<<"Enter do you have book?(Y/N): ";
    cin>>own;
    if(own=='Y' || own=='y')
        isOwned[length]=true;
    else if(own=='N' || own=='n')
        isOwned[length]=false;
    else
        cout<<"It is been Empty";
    cout<<"Enter Price of the Book: ";
    cin>>price[length];
    this->length++;
}
void print_info()
{
    int i;
    for(i=0;i<this->length;i++)
    {
        cout<<book_name[i]<<"\t"<<author[i]<<"\t";
        if(isOwned[i])
            cout<<"Owned";
        else
            cout<<"Not Owned";
        cout<<"\t"<<price[i]<<endl;
    }
}
};
int main()
{
    DataBook d1;
    int inp;
    while(true)
    {
        cout<<"1:Enter A Entry\t2:Print the List\n3:Quit the Application ";
        cin>>inp;
        if(inp==1)
        {
            d1.get_info();
        }
        else if(inp==2)
        {
            d1.print_info();
        }
        else if(inp==3)
        {
            break;
        }
        else if(inp>3)
            cout<<"Enter Again";
    }
}
