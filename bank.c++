#include<iostream>
using namespace std;
class bank
{
public:
string name,branch,name1,branch1,account_nu1;
int account_nu;
float pre_amount,debited_amount,total_amount,credit_amount;
void setdetail(string name1,string branch1,int account_nu1);
void detail(string name,string branch,int account_nu);
void debit(string name1,string branch1,int account_nu1);
void credit(string name1,string branch1,int account_nu1);
};
void bank::setdetail(string name1,string branch1,int account_nu1)
{
    name=name1;
    branch=branch1;
    account_nu=account_nu1;
}
void bank::detail(string name,string branch,int account_nu)
{
     cout<<"name:"<<name<<endl;
    cout<<"branch"<<branch<<endl;
    cout<<"account_num"<<account_nu<<endl;
    cout<<"total amount:"<<total_amount<<endl;
}
void bank::debit(string name,string branch,int account_nu)
{
    pre_amount=total_amount;
    cout<<"enter amout you want to debit:"<<endl;
    cin>>debited_amount;
    total_amount=pre_amount-debited_amount;
    cout<<"before debit amount:"<<pre_amount<<endl;
    cout<<"debit amount:"<<debited_amount<<endl;
    cout<<"rest Amount:"<<total_amount<<endl;
}
void bank::credit(string name,string branch,int account_nu)
{
    cout<<"enter amout you want to credit:"<<endl;
    cin>>credit_amount;
    pre_amount=total_amount;
    total_amount=pre_amount+credit_amount;
    cout<<"before credit amount:"<<pre_amount<<endl;
    cout<<"credit amount:"<<credit_amount<<endl;
    cout<<"rest Amount:"<<total_amount<<endl;
}
int main()
{
string name,branch;
int account_nu,choice;
 bank b;
 cout<<"enter name:"<<endl;
 cin>>name;
 cout<<"enter branch name:"<<endl;
 cin>>branch;
 cout<<"enter account_number:"<<endl;
 cin>>account_nu;
 cout<<"enter amount"<<endl;
 cin>>b.total_amount;
 do
 {
 cout<<"-------------------------------------------------------"<<endl;
 cout<<"                       Menu"<<endl;
 cout<<"-------------------------------------------------------"<<endl;
 cout<<"1, get detail"<<endl;
 cout<<"2, debit "<<endl;
 cout<<"3, credit"<<endl;
 cout<<"4, exit"<<endl;
 cout<<"enter your choice:"<<endl;
 cin>>choice;
 switch (choice)
 {
 case 1:
    b.detail(name,branch,account_nu);
    break;
 case 2:
    b.detail(name,branch,account_nu);
    b.debit(name,branch,account_nu);
    break;
case 3:
    b.detail(name,branch,account_nu);
    b.credit(name,branch,account_nu);
    break;
 default:
    cout<<"invalid choice"<<endl;
    break;
 }
}while (choice!=4);
}