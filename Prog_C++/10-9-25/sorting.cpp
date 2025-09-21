/*
#include<iostream>
using namespace std;

int main(){
    int a[50],size,index;
    cout<<"Enter size of array: ";
    cin>>size;
    cout<<"\nEnter "<<size<<" elements.";
    for(index=0;index<size;index++){
  	cout<<"\neneter element at a["<<index<<"] :";
  	cin>>a[index];
    }
    for(int i=size-1;i>0;i--){//passes
    for(int j=0;j<i;j++){//sort
		if(a[j]<a[j+1])//comapre
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
    cout<<"\nSorted array is: ";
    for(index=0;index<size;index++){
        cout<<a[index]<<" ";
    }
    cout<<"\nSecond Smallest element is: ";
    cout<<a[size-2];

}
*/

