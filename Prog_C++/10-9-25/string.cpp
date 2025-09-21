/*String operations
#include<iostream>
/*Take a line of string from user
Count total digits in the string
Count total uppercase, lowercase, special characters 
Count total words in the string

using namespace std;
int main()
{
  string line;
  int i,count=0,cap=0,sml=0,dig=0,spl=0,words=0;
  cout<<"Enter data:";
  getline(cin,line);
  for(i=0;line[i]!='\0';i++)//accessing by index
  {
    if(line[i]>='A' && line[i]<='Z'){//0 to 9 digits
  		cap=count++;
    }
    else if(line[i]>='a' && line[i]<='z' ){//0 to 9 digits
  		sml=count++;
        
    }
  	else if(line[i]>='0' && line[i]<='9' ){//0 to 9 digits
  		dig=count++;
        
    }
    else if(line[i]==' '){
        words=count++;
        
    }
    else{
        spl=count++;
        
    }

   }
   cout<<"\nTotal Capital Letters in string are:"<<cap; 
   cout<<"\nTotal Lowercase letters in string are:"<<sml;
   cout<<"\nTotal digits in string are:"<<dig;
   cout<<"\nTotal words in string are:"<<words+1;
   cout<<"\nTotal Special characters in string are:"<<count;
}
*/

/*
#include <iostream>
//Palindrome string
using namespace std;
int main()
{
  string word;
  bool flag=true;
  int i,j;
  cout<<"Enter data:";
  getline(cin,word);
  for(j=0;word[j]!='\0';j++);  //to get end
  j=j-1;
  for(i=0;i<j;i++,j--){
    if(word[i]!=word[j]){
        flag=false;
        break;
    }
  }
  cout<<word<<"is Palindrome:"<<(flag?"Yes":"No");
}
*/
/*
#include <iostream>
//Count vowels and consonants
using namespace std;
int main()
{
  string line;
  bool flag=true;
  int i,vow=0,con=0;
  cout<<"Enter data:";
  getline(cin,line);
  for(i=0;line[i]!=0;i++){
    if((line[i]>='a' && line[i]<='z')||(line[i]>='A' && line[i]<='Z')){
        // char c=line[i];
        if(line[i]=='a'||line[i]=='e'||line[i]=='i'||line[i]=='o'||line[i]=='u'||line[i]=='A'||line[i]=='E'||line[i]=='I'||line[i]=='O'||line[i]=='U')
        vow++;
     else
        con++;
    }
  }
  cout<<"\nTotal Vowels are:"<<vow;
  cout<<"\nTotal Consonants are:"<<con;
}
*/

#include<iostream>
using namespace std;

int main(){
    string line;
    int i,j;
    cout<<"Enter data:";
    getline(cin,line);
    for(i=0;line[i]!='\0';){
        if(line[i]==' ' && line[i+1]==' '){
            for(j=i;line[j]!='\0';j++){
                line[j]=line[j+1];
            }
        }
        else
            i++;
    }
   cout<<line; 
}
