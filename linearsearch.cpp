#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number of family members:"<<endl;
    cin>>n;
    
   int age[n];
   string name[n];
   string key;
for (int i=0;i<n;i++){
    cout<<"Enter the name of number "<<(i+1)<<" member:"<<endl;
    cin>>name[i];
    cout<<"Enter the age of number "<<(i+1)<<" :"<<endl;
    cin>>age[i];
    
}
cout<<"Enter the key name to search for :"<<endl;
cin>>key;
for (int i=0;i<=n;i++){
if (key==name[i]){
    cout<<"The name was found"<<endl;
    cout<<"Name: "<<name[i]<<endl;
    cout<<"Age: "<<age[i];
    break;
}
else{ 
    cout<<"Not found "<<endl;
}}
    return 0;
}
