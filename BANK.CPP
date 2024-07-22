#include<iostream.h>
#include<conio.h>
class account{
       long int acc_no;
       char name[50];
       double balance;
       public:
	      account(long int no,char n)
	      {
		  balance=0;
		  acc_no=no;
		char name=n;
	      }
    void credit(double bal)
    {
      balance+=bal;
    }
    void debit(double bal)
    {
       if(balance<bal)
       {
	   cout<<"insufficient balance"<<endl;
       }
       else
       {
	 balance-=bal;
       }
   }
 void display()
 {
    cout<<"Account Number:"<<acc_no<<endl;
    cout<<"Account Holder Name:"<<name<<endl;
    cout<<"Current Balance:"<<balance<<endl;
 }
 void trancation()
 {
     int choice=0,ch=0;
     double bal=0.0;
     do
     {
	cout<<"1.Credit Amount"<<endl;
	cout<<"2.Debit Amount"<<endl;
	cout<<"3.Exit"<<endl;
	cout<<"Enter choice:"<<endl;
	cin>>choice;
	switch(choice)
	{
	    case 1:
		   cout<<"Enter Amount:";
		   cin>>bal;
		   credit(bal);
		   display();
	    break;
	    case 2:
		   cout<<"Enter Amount:";
		   cin>>bal;
		   debit(bal);
		   display();
	    break;
	    case 3:
		   cout<<"Thank You! Bye."<<endl;
		   exit(0);
	    break;
	    default:
		   cout<<"Invalid Choice."<<endl;
	 }
	 cout<<"Do You Want to Transation Again(1/0):";
	 cin>>ch;
      }
      while(ch==1);
   }
};
void main()
{
       clrscr();
       long int acc_no;
       char name[50];
       cout<<"Enter Account Number:";
       cin>>acc_no;
       cout<<"Enter Account Holder Name:";
       cin>>name;
       account acc(acc_no, name);
       acc.trancation();

getch();
}
