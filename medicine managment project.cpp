#include<windows.h>
#include<iostream>
#include<conio.h>
#include<string>
#include <stdlib.h>
#include<fstream>
using namespace std;
class store
{
private:
    char a[20];int s,c,b,choice;
public:
    store ()  //default constructor
    {
        string pass,password="coding@c++";
        for(s=0;;)
        {
        cout<<"\n enter correct password :- ";
        cin>>a;
        int i=password.compare(a);
        if (i==0)
        {
            cout<<"\npassword matched";
            break;
        }
        else
        {
            cout<<"\npassword not matched\a";
            ++s;
            cout<<"\n"<<s<<" number of times entered wrong password\n\n\n";
        }
        }

    }
    store (int x,int y=20)//parameterized constructor
    {
     c=x,b=y;
Sleep(c);
cout<<"\n \n *******************************";
        Sleep(c);
          cout<<"WELCOME TO KRISHNA STORE";
        Sleep(c);
          cout<<"******************************* \n";

Sleep(c);
cout<<"                                 MADE BY- DEEPAK SHARMA                         \n";Sleep(600);
cout<<"                                   RK18RH (11809945)                           \n";
cout<<"  \n ";

    }

};
class store1
{public:
    int mfgdd,mfgmm,mfgyyyy,expdd,expmm,expyyyy,n,i,price;
    char name[50];
    public:
    void detail();
    void totalitems();
    void additems();
    void edititems();
    void searchproduct();
    void sold();
};
void store1::additems()
{
	cout<<"for how many products u want to enter data -";
	cin>>n;
	for(i=0;i<n;i++)
	{
	ofstream outf("store.txt",ios::out|ios::app);
    cout<<"enter product name : ";
    cin>>name;
    outf<<"name-"<<name<<"\t\t";
    cout<<"enter product price : ";
    cin>>price;
    outf<<"price-"<<price<<"\t\t";
    cout<<"enter mfg date -";
    cin>>mfgdd;cout<<"-";
	cin>>mfgmm;cout<<"-";
	cin>>mfgyyyy;
    outf<<"mfg-"<<mfgdd<<"-"<<mfgmm<<"-"<<mfgyyyy;
    cout<<"enter exp date";
    cin>>expdd;cout<<"-";
	cin>>expmm;cout<<"-";
	cin>>expyyyy;
    outf<<"\t\texp-"<<expdd<<"-"<<expmm<<"-"<<expyyyy<<"\n";
    detail();
   }
}
void store1::totalitems()
{
	std::string line_;
	cout<<"the items available in store are following\n";
	ifstream f;
	f.open("store.txt");
	while(getline(f,line_))
	{
		std::cout<<line_<<"\n";
    }
	f.close();
}
void store1::detail()
{
	 cout<<"entered details are following\n name:"<<name;
    cout<<"    mfg date:"<<mfgdd<<"-"<<mfgmm<<"-"<<mfgyyyy;
    cout<<"  exp date:"<<expdd<<"-"<<expmm<<"-"<<expyyyy<<"\n";
}
void store1::edititems()
{
	
}
void store1::searchproduct()
{ 

}
void store1::sold()
{

}
int main()
{
   // store s1;
    store s2(200);
    store1 d;
    int t,w;
    do{
        //cout<<"\nenter choice";
        cout<<"\n 1.add item";
        cout<<"\n 2.total item";
        cout<<"\n 3.show all detail of items";
        cout<<"\n 4.edit item";
        cout<<"\n 5.searchproduct";
        cout<<"\n 6.show total item sold";
        cout<<"\n 7.quit\n";
        cout<<"enter your number you want to search\n";
        cin>>w;
        switch(w)
          {
		    case 1: d.additems();break;
            case 2: d.totalitems(); break;
            case 3: d.detail();break;
            case 4: d.edititems();break;
            case 5: d.searchproduct();break;
            case 6: d.sold();break;
            case 7:break;
        }
    }while(w!=7);
    getch();
    return 0;
}

