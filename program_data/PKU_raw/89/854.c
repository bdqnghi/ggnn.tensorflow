int main()
{
	int n,i;
	cin>>n;
	int a[100000][2];
	memset(a,0,sizeof(a));
	int b[n];
	memset(b,0,sizeof(b));
	for(i=0;;i++)
	{
		cin>>a[i][0]>>a[i][1];
		if(a[i][0]==0&&a[i][1]==0)
		break;
	}
	int c=i-1;
	for(i-1;i>=0;i--)
	{
		b[a[i][1]]++;
	}
	int j;int flag=1,fg=1;
	for(i=0;i<=n;i++)
	{
		if(b[i]==n-1)
		{
			for(j=0;j<c;j++)
			{
				if(a[j][0]==i)
				break;
			}
			if(j==c)
			{cout<<i<<endl;fg=0;}
			else
			if(flag)
			{
				cout<<"NOT FOUND"<<endl;
				flag=0;
			}
		}
	}
                  if(fg)
		{
			cout<<"NOT FOUND"<<endl;
			
		}

	return 0;
}
			
