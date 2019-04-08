/*
*	5.cpp
*	???
*	2013.9.29
*	???????3?5?7????
*/
int main() // ???
{
	int num,x,y,z; // ????
	cin >> num; // ????
	x=!(num%3);
	y=!(num%5);
	z=!(num%7);
	if(x==1&&y==1&&z==1)
	{
		cout<<"3 5 7"<<endl;
	}
	else if(x==1&&y==1&&z==0)
	{
		cout<<"3 5"<<endl;
	}
	else if(x==1&&y==0&&z==1)
	{
		cout<<"3 7"<<endl;
	}
	else if(x==0&&y==1&&z==1)
	{
		cout<<"5 7"<<endl;
	}
	else if(x==1&&y==0&&z==0)
	{
		cout<<"3"<<endl;
	}
	else if(x==0&&y==1&&z==0)
	{
		cout<<"5"<<endl;
	}
	else if(x==0&&y==0&&z==1)
	{
		cout<<"7"<<endl;
	}
	else
	{
		cout<<"n"<<endl;
	}
	return 0;
}
