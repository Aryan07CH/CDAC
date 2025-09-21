/*Array 2D
#include<iostream>
using namespace std;
int main()
{
  int m[5][5],rows,columns,r_ind,col_ind;
  cout<<"Enter number of rows and columns\n";
  cin>>rows>>columns;
  cout<<"\nEnter "<<rows*columns<<" elements\n";
  for(r_ind=0;r_ind<rows;r_ind++)
  {
  	for(col_ind=0;col_ind<columns;col_ind++)
  	{
  		cout<<"\nelement at ["<<r_ind<<"] ["<<col_ind<<"] :";
  		cin>>m[r_ind][col_ind];
	  }
  }
  
   cout<<"\nelements are:\n";
  for(r_ind=0;r_ind<rows;r_ind++)
  {
  	for(col_ind=0;col_ind<columns;col_ind++)
  	{
  		cout<<m[r_ind][col_ind]<<"\t";
	}
	cout<<endl;//nex line
  }
  
}
*/

/*
#include<iostream>
//Transpose of array
using namespace std;
int main()
{
  int m[5][5],rows,columns,r_ind,col_ind;
  cout<<"Enter number of rows and columns\n";
  cin>>rows>>columns;
  cout<<"\nEnter "<<rows*columns<<" elements\n";
  for(r_ind=0;r_ind<rows;r_ind++)
  {
  	for(col_ind=0;col_ind<columns;col_ind++)
  	{
  		cout<<"\nelement at ["<<r_ind<<"] ["<<col_ind<<"] :";
  		cin>>m[r_ind][col_ind];
	  }
  }
  cout<<"\nelements are:\n";
  for(r_ind=0;r_ind<rows;r_ind++)
  {
  	for(col_ind=0;col_ind<columns;col_ind++)
  	{
  		cout<<m[r_ind][col_ind]<<"\t";
	}
	cout<<endl;//nex line
  }
   cout<<"\nTranspose elements are:\n";
  for(col_ind=0;col_ind<columns;col_ind++)
  {
  	for(r_ind=0;r_ind<rows;r_ind++)
  	{
  		cout<<m[r_ind][col_ind]<<"\t";
	}
	cout<<endl;//nex line
  }
  
}

*/