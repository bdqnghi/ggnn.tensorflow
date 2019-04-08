int main()
{
	int a[7]={0,100,50,20,10,5,1},b[7]={0};
	int q,i;
	cin>>q;
	for (i=1;i<=6;i++)
	{
		if( q>=a[i])
		{	
			b[i]=q/a[i];
			q=q%a[i];
		}
	}
	for (i=1;i<=6;i++)
	{
		cout<<b[i]<<endl;
	}
	return 0;
}
