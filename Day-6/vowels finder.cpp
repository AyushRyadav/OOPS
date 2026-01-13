#include<iostream>
using namespace std;

int main()
{
string word;
int count=0;
cout<<"enter a word:";
cin>>word;
cout<<"vowels found: ";
for(int i=0; i<word.length();i++){
char ch=word[i];
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') {
cout<<ch<<" ";
count++;
}}
 cout << "\nTotal vowels:"<<count << endl;
    return 0;
}

    