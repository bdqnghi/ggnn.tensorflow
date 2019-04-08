int main()
{
	int a[100],b[100],x,y;
	int i,j;
	for(i=0;i<100;i++)
	{
		a[i]=0;
		b[i]=0;
	}
	i=0;
	cin>>x>>y;
	while(x>=1)
	{
		a[i]=x;
		if(x%2==0)
		{
			x=x/2;
		}
		else
		{
			x=(x-1)/2;
		}
		i=i+1;
	}
	j=0;
	while(y>=1)
	{
		b[j]=y;
		if(y%2==0)
		{
			y=y/2;
		}
		else
		{
			y=(y-1)/2;
		}
		j=j+1;
	}
	while(j>0&&i>0)
	{
		if(b[j-1]!=a[i-1])
		{
			cout<<a[i]<<endl;
			break;
		}
		else if(i==1)
		{
			cout<<a[0]<<endl;
		}
		else if(j==1)
		{
			cout<<b[0]<<endl;
		}
		j=j-1;
		i=i-1;
	}
	return 0;
}