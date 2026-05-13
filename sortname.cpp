#include<iostream>
using namespace std;
int main() {

string names[7]={"Ryan","Lecturer","Ellie","Amjed","Esther","Manar","Anne"};
string sort;
    
for(int x=0;x<=6;x++){
    for(int y=x+1;y<=6;y++){
if(names[x]>names[y]){
    sort= names[x];
    names[x]=names[y];
    names[y]=sort;

}
    }
}
    cout<<"the names in ascending order"<<endl;
    for(int x=0;x<=6;x++){
        cout<<names[x]<<" ";
    }
    cout<<endl;
return 0;
}
