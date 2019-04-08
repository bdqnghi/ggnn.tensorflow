/**
*@file 5.cpp
*@author ??? 1300012841
*@date 2013-09-25
*@description ??3?5?7????
*/


int main()
{
int num;
	scanf("%d",&num);
 int x;
x=0;
if(num%3==0)
	{cout << "3" ;x=1;}
if(num%5==0)
	{if(x==1)cout<<" ";
          cout << "5" ;
         x=1;}
if(num%7==0)
	{if(x==1)cout<<" "; 
        cout << "7";}
if((num%7==0||num%3==0||num%5==0)==0)
	cout << "n" << endl;
else cout<<endl;
	return 0;
}