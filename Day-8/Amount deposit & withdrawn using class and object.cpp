#include<iostream>
using namespace std;
class Employee{
private:
string name;
int account_no;
float balance;

public:
void readData(){
cout<<"enter employee name:";
cin>>name;
cout<<"enter account number:";
cin>>account_no;
cout<<"enter initial balance:";
cin>>balance;
}

void displayData(){
cout<<"\n employee details:"<<endl;
cout<<"employee name:"<<name<<endl;
cout<<"account no:"<<account_no<<endl;
cout<<"balance:"<<balance<<endl;
}
 void deposit(float amt){
 balance+=amt;
 cout<<"amount deposited:"<<amt<<endl;
 cout<<"updated amount:"<<balance<<endl;
 }
 
 void withdraw(float amt){
 if(amt>balance) {
 cout << "insufficient balance! " << endl;
 }else{
 balance-=amt;
 cout << "amount withdrawn:" <<amt<<endl;
 cout<<"updated balance:"<<balance<<endl;
 
 }

}};
int main(){
    Employee e;
    e.readData();
    e.displayData();
    float amount;
    cout << "\n enter amount to deposit:";
    cin >> amount;
    e.deposit(amount);
    cout<<"\n enter amount to withdraw:";
    cin >> amount;
    e.withdraw(amount);
    return 0;}