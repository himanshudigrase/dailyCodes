#include <iostream>

using namespace std;

/*objective to print ganesha pattern
for n = 7
    *  ****
    *  *
    *  *
    *******
       *  *
       *  *
    ****  *
*/

int main()
{
 int n;
 cin>>n;

 //first pattern
 // *  ****
 cout<<"*";
for(int i=1; i<=(n-3)/2;i++) cout<<" ";
for(int i=1; i<=(n+1)/2;i++) cout<<"*";
cout<<endl;

//Second Component
// *  *
// *  *
for(int rows=1;rows<=(n-3)/2;rows++){
    cout<<"*";
    for(int j=1;j<=(n-3)/2;j++) cout<<" ";
    cout<<"*";
    cout<<endl;
}

//Third Component
// *******
for(int i=1;i<=n;i++) cout<<"*";
cout<<endl;

//Fourth component
//   *  *
//   *  *
for(int rows=1;rows<=(n-3)/2;rows++){
    for(int i=1;i<=(n-1)/2;i++) cout<<" ";
    cout<<"*";
    for(int j = 1;j<=(n-3)/2;j++)cout<<" ";
    cout<<"*";
    cout<<endl;
}
//Fifth component
// ****  *
for(int i=1;i<=(n+1)/2;i++)cout<<"*";
for(int i=1; i<=(n-3)/2;i++) cout<<" ";
cout<<"*";
}
