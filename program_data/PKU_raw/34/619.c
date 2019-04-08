/**************
*????
*?????
***************/
void f1(int); //????
void f2(int); //????
int main()
{
	int n;
	cin>>n;
	if(n == 1)     //?1?????
	{
		cout<<"End";
	}
	else
	{
		if(n%2 == 0) //????f2
		{
			f2(n);
		}
		else         //????f1
		{
			if(n%2 == 1)
			{
				f1(n);
			}
		}
	}
return 0;
}
void f1(int a)                       //????
{
	int b;
	b=3*a+1;          //??????
	cout<<a<<"*"<<3<<"+"<<1<<"="<<b<<endl;//???????
	if(b == 1)         //????
	{
		 cout<<"End";
	}
	else            //????
	{
		if(b%2 == 0)
		{
			f2(b);
		}
		else
		{
			if(b%2 == 1)
			{
				f1(b);
			}
		}
	}
}
void f2(int a)//??
{
	int b;
	b=a/2;
	cout<<a<<"/"<<2<<"="<<b<<endl;   
	if(b == 1)
	{
		cout<<"End";
	}
	else
	{
		if(b%2 == 1)
		{
			f1(b);
		}
		else
		{
			if(b%2 == 0)
			{
				f2(b);
			}
		}
	}
}