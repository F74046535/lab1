#include<iostream>
 using namespace std;
 
 int main(void)
{
	int i;
	cout<<"please enter a number:";
	cin>>i;
while(1){
	
    if(i%2==0){
	  i=i/2;
	  cout<<i<<" ";
	if(i==1) break;
}
    if(i%2!=0){
	  i=3*i+1;
	  cout<<i<<" ";
	if(i==1) break;
}
   

}
	   
return 0;
}
