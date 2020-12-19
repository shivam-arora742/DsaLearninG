#include<iostream>
using namespace std;

class Array{
int a[4];
public:
void set_data();
void get_data();
void sum_data();
};
void Array::set_data(){
    int i;
for(i=0;i<4;i++){
cin>>a[i];
}
}
void Array::get_data(){
    int i;
for(i=0;i<4;i++){
cout<<a[i]<<endl;
}
}
void Array::sum_data(){
int i,sum=0;
for(i=0;i<4;i++){
sum=sum+a[i];
}
cout<<sum;
}

int main(){
Array a;
a.set_data();
a.get_data();
a.sum_data();
return 0;
}
