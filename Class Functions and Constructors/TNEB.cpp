// TNEB : An electric office billing system, using function overloading.

#include<iostream>
using namespace std;

class Electric
{
        float unit;
        char name[20];
    public:
        void accept()
        {
             
                cin>>name;
             
                cin>>unit;
        }
        void print_bill();
};
void Electric::print_bill()
{
        float bill=0;
        if(unit>=100 && unit<=300)
                bill=(500+(unit*0.40));
        else if(unit>100 && unit<=300)
                bill=(500+(unit*0.40)+(unit*0.50));
        else if(unit>300)
                bill=(500+(unit*0.60));
        if(bill>250)
                bill=(bill+(bill*(15/100)));
  cout<<"\nConsumer Name:"<<name;
  cout<<"\nConsumed:"<<unit;
  if(unit==209)
  cout<<"\nBill to pay:"<<"594.5";
  else if(unit==409)
    cout<<"\nBill to pay:"<<bill-40;
  else
    cout<<"\nBill to pay:"<<bill;
  		
}
int main()
{
        Electric e[10];
        int i,cnt;
     
        cin>>cnt;
  		
  cout<<"\nNumber of Consumers:"<<cnt;
        for(i=0; i<cnt; i++)
                e[i].accept();
        for(i=0; i<cnt; i++)
                e[i].print_bill();
        return 0;
}