int odd (int a);
int even (int a);
int main ()
{
	int n;
	cin>>n;
	while (n!=1) //???1???????
	{
		if (n%2==0)	
			n=even (n);
		else
			n=odd (n);
	}
	cout<<"End";

	return 0;
}
int odd (int a)	//?????????
{
	cout<<a<<"*3+1=";
	a=a*3+1;
	cout<<a<<endl;
	return a;
}
int even (int a)	//?????????
{
	cout<<a<<"/2=";
	a=a/2;
	cout<<a<<endl;
	return a;
}