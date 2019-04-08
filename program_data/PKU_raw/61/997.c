int feibonaqishulie(int a)
{
	int b,a1,a2,i;
	a1=a2=1;
	if(a==1|a==2) b=1;
	else
		for(i=2;i<a;i++)
		{
			b=a1+a2;
			a1=a2;
			a2=b;
		}
	return(b);
}
int main()
{
	int n,a;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		cout<<feibonaqishulie(a)<<endl;
	}
	return 0;
}