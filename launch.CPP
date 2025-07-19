#include<iostream>
#include<ctime>
using namespace std;
int frequency(int a[],int n,int x){
    int count =0;
for(int i=0;i<n;++i){
    if(a[i]==x) ++count;
}
return count;
}
void fill(int a[],int n){
srand(time(0));
for(int i=0;i<n;++i){
a[i]=rand()%100;
}
}
void show(int a[],int n){
for(int i=0;i<n;++i){
    cout<<a[i]<<" ";
}
cout<<endl;
}
int main(){
    int n,x,count;
    cout<<"enter size of array :";
    cin>>n;
    int a[n];
    cout<<"enter the frequency item :";
    cin>>x;
    fill(a,n);
    show(a,n);
    cout<<"the frequency is "<<frequency(a,n,x);
}