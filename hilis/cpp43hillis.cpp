#include<bits/stdc++.h>

using namespace std;
int main(){
int size;
cout<<"\n enter the size of array-"<<endl;
cin>>size;

int arr[size];
int i,j,k,l,m;
int result[size];
cout<<"enter the elements in the array- "<<endl;
for(i=0;i<size;i++){
cin>>arr[i];
result[i]=arr[i];
                    }
                    
for(i=0;i<log(size)/log(2);i++){
int step=int(pow(2,i)+0.5);
j=0;
k=step;
for(m=step;m<size;m++){
result[m]=arr[j]+arr[k];
j++;
k++;
}
for(l=0;l<size;l++){
arr[l]=result[l];
                }
                            }

cout<<"\n the result is - ";
for(i=0;i<size;i++){
cout<<result[i]<<"\t";                                            
                }
return 0;
}
















