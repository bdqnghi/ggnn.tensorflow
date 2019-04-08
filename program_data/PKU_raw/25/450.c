int a[100001]={0};

int main()
{
	int N;
	cin>>N;
	int i,j,p,q,x;
	a[0]=2;
	if(N==0)
	{
		cout<<1;
		exit(1);
	}
	else
	{
		for(i=1;i<=N-1;i++)
		{
			for(j=0;j<1000;j++)
			{
				a[j]=a[j]+a[j];
			}
			for(x=0;x<1000;x++)
			{
				if(a[x]>=10)
				{
					a[x]=a[x]-10;
					a[x+1]=a[x+1]+1;
				}
			}
		}
	}

	p=1000;
	while(a[p]==0)
	{
		p--;
	}

	for(q=p;q>=0;q--)
		cout<<a[q];
	return 0;
}