#include <iostream>
using namespace std;
int main(){
int arr[10];
int max,min;
cout<<"enter 10 integers: "<<endl;
 for(int i=0;i<10;i++){
    cin>>arr[i];
}
max=min=arr[0];
for(int i=1;i<10;i++){
    if(arr[i]>max)
     max=arr[i];
    if(arr[i]<min)
     min=arr[i];
}
cout<<"maximum value: "<<max<<endl;
cout<<"minimum value: "<<min<<endl;
return 0;




}
