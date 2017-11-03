#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
int main()
{
ofstream file2("sushu_output.txt");
int flag=1;
int count=0;
for(int a=2;a<100000;a++){
 if(a==2){
  //cout << a << "\t";
  file2 << a << "\t";
  count++;
  }
  else{
  for(int i=2;i<(a/2+1);i++){
   if(a%i==0)
   {flag=0;}
   }
  if(flag==1)
   {
   //cout << a <<"\t";
   count++;
   file2 << a << "\t";
   //cout.write(file2,a);
   }
   flag=1;
  }
 }
cout << count<< endl;
file2.close();
}
