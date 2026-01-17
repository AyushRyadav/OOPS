#include<iostream>
using namespace std;
class demo{
private:
int privateVar;
protected:
int protectedVar;
public:
int publicVar;
void setValues(){
privateVar =10;
protectedVar =20;
publicVar =30;
}
void showPrivate(){
cout<<"private variable :"<<privateVar<<endl;
}
};
//derived class to access protected variable
class child:public demo{
public:
 void showProtected(){
cout<<"show protected:"<<protectedVar<<endl;
}};
    
 int main(){
 demo obj;
 child cobj;
 obj.setValues();
 cobj.setValues();
 cout<<"--ACCESSING THROUGH DEMO OBJECT--"<<endl;
 cout << "public variable:" <<obj.publicVar<<endl;
 obj.showPrivate();
 cout << "\n ---accessing through child object---" << endl;
 cobj.showProtected();
 cout << "\n---local variable scope example-- " << endl;
 int localVar=50;
 cout << "local variable:" <<localVar<<endl;
 return 0;
 }