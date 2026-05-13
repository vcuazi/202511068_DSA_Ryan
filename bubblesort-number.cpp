#include<iostream>
using namespace std;
int main() {

int numbers[8]={109,99,23,45,23,2,5,1};
int asced;
    
for(int x=0;x<=7;x++){
    for(int y=x+1;y<=7;y++){
if(numbers[x]>numbers[y]){
    asced=numbers[x];
    numbers[x]=numbers[y];
    numbers[y]=asced;

}
    }
}
    cout<<"the numbers in ascending order:"<<endl;
    for(int a=0;a<=7;a++){
        cout<< numbers[a]<<" ";
}
    cout<<endl;
return 0;
}
