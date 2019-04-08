int main()
{
	int i,t;
	char a[1000],b;
	cin>>a;
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]>96)
		{
			a[i]=a[i]-32;
		}
	}
	b=a[0];
	t=1;
	for(i=1;i<strlen(a)+1;i++)
	{
		if(a[i]==b)
		{
			t=t+1;
		}
		else
		{
			cout<<"("<<b<<","<<t<<")";
			b=a[i];
			t=1;
		}
	}
	cout<<endl;
	return 0;
}
