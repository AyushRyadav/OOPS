#include <iostream>
using namespace std;
class student{
public:
string name;
int rollno;
void readData(){
cout<<"enter Name:";
cin>>name;
cout << "enter roll_no:";
cin>>rollno;
}
void displayData(){
cout<<" student details! "<<endl;
cout << "Name:"<<name<<endl;
cout << "roll_no:"<<rollno<<endl;
}};
int main(){
student s;
s.readData();
s.displayData();
return 0;
}

    