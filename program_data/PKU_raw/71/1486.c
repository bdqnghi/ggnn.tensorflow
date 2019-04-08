int max(int x,int y)
{
	int z;
	if(x>y)z=x;
	else z=y;
	return(z);
}

int min(int x,int y)
{
	int z;
	if(x<y)z=x;
	else z=y;
	return(z);
}

int main()
{
	int n,i,x,y,z,j,m,b[200];
	cin>>n;
	for(i=1;i<=n;i++)
	{
		m=0;
		cin>>x>>y>>z;
		if((x%100==0&&x%400==0)||(x%100!=0&&x%4==0))
		{
			int a[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
			for(j=min(y,z);j<max(y,z);j++)m+=a[j];
			b[i]=m;
		}
		else if((x%100==0&&x%400!=0)||(x%4!=0))
		{
			int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
			for(j=min(y,z);j<max(y,z);j++)m+=a[j];
			b[i]=m;
		}
	}
	for(i=1;i<=n;i++)
	{
		if(b[i]%7==0)cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	return 0;
}
