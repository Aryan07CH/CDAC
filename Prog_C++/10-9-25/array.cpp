/*    1
#include<iostream>
//print center triangle of n lines where n given by user
using namespace std;
int main()
{
  int a[50],size,index;//50 is the maximum size given. The user can enter anything up to 50. 
  cout<<"\nEnter size of array:";
  cin>>size;
  
  cout<<"\nEnter "<<size<<" elements.";
  for(index=0;index<size;index++)
  {
  	cout<<"\neneter element at a["<<index<<"] :";
  	cin>>a[index];
  }

  cout<<"\nEntered "<<size<<" elements are";
  for(index=0;index<size;index++)
  {
  	cout<<"\na["<<index<<"] :"<<a[index];
  }  
}
*/   
/*        2
#include<iostream>

using namespace std;
int main()
{
  int a[50],size,index;//50 is the maximum size given. The user can enter anything up to 50. 
  cout<<"\nEnter size of array:";
  cin>>size;
  
  cout<<"\nEnter "<<size<<" elements.";
  for(index=0;index<size;index++)
  {
  	cout<<"\neneter element at a["<<index<<"] :";
  	cin>>a[index];
  }

  cout<<"\nEntered "<<size<<" elements in reverse order are";
  for(index=size;index>=0;index--)
  {
  	cout<<"\na["<<index<<"] :"<<a[index];
  }  
}
*/
/*          3
#include<iostream>
//find min/max
using namespace std;
int main()
{
  int a[]={5,10,3,8,20,1,7},size=7,index;
  int min,max,min_pos,max_pos;
  min=max=a[0];//local ref
  for(index=1;index<size;index++)
  {
  	if(a[index]<min){
  		min=a[index];//update min
        min_pos=index;
    }
  	else if(a[index]>max){
  		max=a[index];//update max
        max_pos=index;
    }
  }  

  cout<<"\nEntered "<<size<<" elements are:";
  for(index=0;index<size;index++)
  {
  	cout<<a[index]<<",";
  }
    cout<<"\nMin:"<<min<<"at"<<min_pos<<"\tMax:"<<max;
//   for(index=1;index<size;index++)
//   {
//   	if(a[index]==min)
//   		cout<<"\nMin found at a["<<index<<"]";
//   	if(a[index]==max)
//   		cout<<"\nMax found at a["<<index<<"]";
//   }

}
*/
/*           4
#include<iostream>
//find min/max
using namespace std;
int main(){
  int a[]={5,10,3,8,20,1,7},size=7,index;
  int key,position=-1; //if position remains -1, element not found
  cout<<"Enter element to search:";
  cin>>key;
  for(index=0;index<size;index++){
  if(key=a[index]) {
        position=index;
        break;
    }
}
if(position==-1){
    cout<<"Element not found";
}
    else {
        cout<<position;
  }
  cout<<"\nEntered "<<size<<" elements are:";
  for(index=0;index<size;index++)
  {
  	cout<<a[index]<<",";
  }
} // cout<<"\nMin:"<<min<<"at"<<<<"\tMax:"<<max;
*/

/*            5
#include<iostream>
using namespace std;

int main(){
	int num[]={5,10,3,8,20,1,7,4,6,29},size=10,index,even=0,odd=0;
    for(index=0;index<size;index++){		
		if(num[index]%2==0)
			even++;
		else if(num[index]%2==1)
			odd++;
	}
	
	cout<<"\nNumber of Even Numbers:"<<even;
	cout<<"\nNumber of Odd Numbers:"<<odd;
}
*/

/*              6
#include<iostream>
using namespace std;

int main(){
	int num[]={5,10,3,8,20,1,7,4,6,19},size=10,index,sum=0;
    float avg;
    for(index=0;index<size;index++){
        sum=sum+num[index];
        avg=(float)sum/size;//Dynamic type casting
    }
    cout<<"\nAverage of array elements: "<<avg;
    cout<<"\nElements less than average: ";
    for(index=0;index<size;index++){
        if(num[index]<avg)
            cout<<num[index]<<" ";
    }
    cout<<"\nElements greater than average: ";
    for(index=0;index<size;index++){
        if(num[index]>avg)
            cout<<num[index]<<" ";
    }
}
*/
/*
//Reverse an array
#include <iostream>
using namespace std;

int main(){
  int i,size,a[20];
  cout<<"Enter Size of array: ";
  cin>>size;
  cout<<"Enter the array at: ";
  for(i=0;i<size;i++){
    cin>>a[i];
  }
  cout<<"\nEntered array is: ";
  for(i=0;i<size;i++){
    cout<<a[i]<<" ";
  }
  cout<<"\nEnter Reversed Array is: ";
  for(i=size-1;i>=0;i--){
    cout<<a[i]<<" ";
  }
  
}
*/