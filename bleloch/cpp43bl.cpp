#include<bits/stdc++.h>

using namespace std;
int main(){
int size;
cout<<"\n enter the size of array-"<<endl;
cin>>size;

int arr[size];
int i,j,k,m;
cout<<"enter the elements in the array- "<<endl;
for(i=0;i<size;i++){
cin>>arr[i];
                   }

for(i=0;i<=log2(size);i++){ //for loop implemented for initial log(n) steps

     for(j=1;j<size;j=pow(2,i)){
         k=pow(2,i-1);
         arr[j]=arr[j]+arr[j-k];
                                  }
                          }         
j=size-1;
arr[j]=0;

for(i=log2(size);i>0;i--){
      k=pow(2,i-1);  
        m=arr[j];
        arr[j] = arr[j]+arr[j-k];
         arr[j-k]=m;
                      }
cout<<"output is -";                            
for(i=0;i<size;i++){
cout<<arr[i]<<"\t";          
                  }

return 0;
}


                    
