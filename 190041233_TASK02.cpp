#include <bits/stdc++.h>
using namespace std;

typedef long long ll;



class Counter
{
private:
    int count;
    int value;
    int range;


  public:
//      Counter() {}
      Counter():count(0),range(0),value(0){}
      Counter(int a):count(a){}
    void get()
    {   cout<<"Value is:";
        cin>>value;
          cout<<"Range is :";
        cin>>range;
    }
     Counter operator=(Counter &a)  /// it copies all values of each members to another object's member;
    {   cout<<"Using assignment operator overloading"<<endl;
        count=a.count;
        value=a.value;
        range=a.range;
//        return *this;

    }
    Counter(Counter&b)   /// its a copy constructor overloading which assigns value at declaration
    {     cout<<"Using copy constructor overloading"<<endl;
        count=b.count;



    }

    void gain (Counter x)
    {   cout<<"using definite value function"<<endl;
        range=x.range;   /// It only copies the value of range from another object that means we can copy our desired value
                            ///to another obj which is not possible in assignment and copy constructor overloading so those are not suitable
    }
    void put()
    {   cout<<"Count is:";
        cout<<count<<endl;
        cout<<"Value is:";
        cout<<value<<endl;
        cout<<"Range is :";
        cout<<range<<endl;
    }

  private:
//    Counter operator=(Counter &a) {};                       ///restricting
//    Counter(Counter&b) {}
           ///If this two are used in the private we can prevent from copying
};


int main()

{
    Counter cc(111);
    cc.get();
    cc.put();
       cout<<"For object e"<<endl;
    Counter e(cc);

    e.put();
//    cout<<"now"<<endl;
    Counter aa;

   cout<<"For object aa"<<endl;
   aa=cc;

   aa.put();
   aa.gain(cc);
}

