int main()
{
	int n;
	cin>>n;	
	int i;
	int flag=0;
	int a[10000];
	for(i=0;i<10000;i++)
	{
		a[i]=0;
	}
	int x,y;
	while(cin>>x>>y)
	{
		if(x==0&&y==0)
			break;
		a[y]++;
	}
	for(i=0;i<10000;i++)
	{
		if(a[i]==n-1)
		{	
			cout<<i<<endl;
			flag=1;
			break;
		}
	}
	if(flag==0)
		cout<<"NOT FOUND"<<endl;
	return 0;
}