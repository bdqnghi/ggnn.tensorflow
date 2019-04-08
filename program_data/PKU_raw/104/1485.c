int main()
{
	int x,y,a[1000],b[1000],k=0,l=0;
	cin>>x>>y;
	if(x==y)
	{
		cout<<x<<endl;
	}
	else
	{
		while(1)
		{
			a[k]=x;
			x=x/2;
			b[l]=y;
			y=y/2;
			if(a[k]==0&&b[l]==0)
				break;
			k++;
			l++;
		}
		for(int i=0;i<=k;i++)
		{
			for(int j=0;j<=l;j++)
			{
				if(a[i]==b[j])
				{
					cout<<a[i]<<endl;
					return 0;
				}
			}
		}
	}
	return 0;
	}