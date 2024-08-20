#include<bits/stdc++.h>
using namespace std;

static int atm_balance =10000;

class ATM {
string name;
string acc_no;
string pin;
int balance;

public:
ATM(string name,string pin,int intitial_bal){
this->name=name;
this->pin=pin;
balance=intitial_bal;
}

bool check_pin(string temp_pin){
int flag=0;
int num=3;
while(true){
if(flag==1) {
cout<<"Enter Your Current Pin :"<<endl;
cin>>temp_pin;
}
if(temp_pin==pin){
return true;
}
else{
cout<<"Sorry You Have Entered a Wrong Pin !!!"<<endl;
cout<<"You Have only"<<" "<<num<<" "<<"Attempts"<<endl;
flag=1;
num--;
if(num<0) {
cout<<"Sorry Try After Some Times"<<endl;
return false;
}
}
  }
}

void check_atmbalance(){
cout<<"ATM Balance is $"<<atm_balance<<endl;
}

void withdrw_amt(){
int amt;
string temp_pin;
cout<<"Enter Your PIN :"<<endl;
cin>>temp_pin;
if(check_pin(temp_pin)){
cout<<"Enter the Amount to Withdraw "<<endl;
cin>>amt;
if(atm_balance>amt && balance>amt){
atm_balance-=amt;
balance-=amt;
cout<<"Successfully withdrawn"<<endl;
}
else if(balance<amt){
cout<<"insufficient balance"<<endl;
}
else if(atm_balance<amt){
cout<<"ATM has insufficient balance kindly withdraw after sometimes"<<endl;
}
  }
  else {
cout<<"Try after sometimes... thankyou"<<endl;
}

    }

void get_balance(){
cout<<" Your Current Balance is $"<<balance;
}

void change_pin(){
int num=3;
cout<<"Enter Your Current Pin :"<<endl;
while(true){
string temp_pin;
cin>>temp_pin;
if(temp_pin==pin){
cout<<"Enter Your New Pin :"<<endl;
cin>>pin;
cout<<"successfully changed";
break;
}
else{
cout<<"Sorry You Have Entered a Wrong Pin !!!"<<endl;
cout<<"You Have only"<<" "<<num<<" "<<"Attempts ";
num--;
if(num==0) {
cout<<"Sorry Try After Some Times";
break;
}
}
  }
}

void deposit(){
int amt;
string temp_pin;
cout<<"Enter Your Current Pin :"<<endl;
cin>>temp_pin;
if(check_pin(temp_pin)){
cout<<"Enter the Amount to Add "<<endl;
   cin>>amt;
   balance+=amt;
   atm_balance+=amt;
   cout<<"AMT have been successfully added to your account .!!!"<<endl;
}
else {
cout<<"Try after sometimes... Thankyou"<<endl;
}
}
};


int main(){
ATM user1("nithish","2496",2000);
cout<<"1 . Deposit"<<endl;
cout<<"2 . withdraw"<<endl;
cout<<"3 . change pin"<<endl;
cout<<"4 . check balance"<<endl;
cout<<"5 . Exit"<<endl;
int flag=0;

do{
cout<<endl<<"Enter a Number :";
int n;
cin>>n;
switch(n){
case 1:
user1.deposit();
break;
case 2:
user1.withdrw_amt();
break;
case 3:
user1.change_pin();
break;
case 4:
user1.get_balance();
break;
case 5:
flag=1;
break;
}
if(flag==1) {
cout<<"Thank you For Choosing our Bank !";
break;
}

    } while(true);
}
