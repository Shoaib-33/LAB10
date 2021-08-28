#include <bits/stdc++.h>
using namespace std;

typedef long long ll;



class Vehicle
{
 public:
     string name;
     string model;
      int year;
      int price;
          int buy;
          int sell;


    virtual void buysell()=0;  ///pure virtual class so it must be overridden in the derived class;

    virtual void details() /// virtual class may be overridden in the derived class,if not overriden it will call the function from base class
    {   cout<<"Name is:";
        cin>>name;
        cout<<"Model is:";
        cin>>model;
        cout<<"Year:";
        cin>>year;
        cout<<"Price:";
        cin>>price;
    }
    virtual void show()
    {
      cout<<"Name:";
        cout<<name<<endl;
        cout<<"Model:";
            cout<<model<<endl;
            cout<<"Year:";
            cout<<year<<endl;
            cout<<"Price:";
            cout<<price<<endl;
    }



};

class Bus:public Vehicle
{
    public:
    void details()
    {
       cout<<"Name is:";
        cin>>name;
        cout<<"Model is:";
        cin>>model;
        cout<<"Year:";
        cin>>year;
        cout<<"Price:";
        cin>>price;
    }
    void buysell()
    {
        cin>>buy;
        cin>>sell;
    }
       void show()
    {
   cout<<"Name:";
        cout<<name<<endl;
        cout<<"Model:";
            cout<<model<<endl;
            cout<<"Year:";
            cout<<year<<endl;
            cout<<"Price:";
            cout<<price<<endl;
    }




};

class Plane:public Vehicle
{
   public:
    void details()
    {
        cout<<"Name is:";
        cin>>name;
        cout<<"Model is:";
        cin>>model;
        cout<<"Year:";
        cin>>year;
        cout<<"Price:";
        cin>>price;
    }
        void buysell()
    {
        cin>>buy;
        cin>>sell;
    }
   void show()
    {   cout<<"Name:";
        cout<<name<<endl;
        cout<<"Model:";
            cout<<model<<endl;
            cout<<"Year:";
            cout<<year<<endl;
            cout<<"Price:";
            cout<<price<<endl;
    }



};



int main()
{
    Vehicle *v,*a,*b;
    v=new Bus;
    v->details();
    v->show();
    a=new Plane;
    a->details();
    a->buysell();
    a->show();
}




