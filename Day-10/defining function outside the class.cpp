#include<iostream>
using namespace std;
class Sample{
    int x;
    public:
    void getdata();
    void showdata();
};

void Sample::getdata(){
    cout<<"enter a number:";
    cin>>x;
}
void Sample::showdata(){
    cout<<"Number="<<x;
}
int main(){
    Sample obj;
    obj.getdata();
    obj.showdata();
    return 0;}