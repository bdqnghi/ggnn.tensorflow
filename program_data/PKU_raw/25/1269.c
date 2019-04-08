int main()
{
	int a[100]={2},b[100]={0},n,m=0,j,count=1;
	cin>>n;
	if(n==0)
	{
		cout<<"1"<<endl;
	}
	else if(n==1)
	{
		cout<<"2"<<endl;
	}
	else
	{
		for(int i=1;i<n;i++)
		{
			m=0;
			for(j=0;j<count;j++)
			{
				b[j]=a[j]*2;
				if(m==1)
				{
					b[j]++;
				}
				if(b[j]>=10)
				{
					b[j]=b[j]-10;
					m=1;
				}
				else
				{
					m=0;
				}
			}
			if(m==1)
			{
				a[j]=1;count++;
			}
			for(int i=0;i<j;i++)
			{
				a[i]=b[i];
			}
		}
		if(a[j]!=0)
		{
			for(int i=j;i>=0;i--)
			{
				cout<<a[i];
			}
		}
		else
		{
			for(int i=j-1;i>=0;i--)
			{
				cout<<a[i];
			}
		}
	}
	return 0;
}
