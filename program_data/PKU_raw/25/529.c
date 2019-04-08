int a[100000],b[1000000];

int main()
{
	int n,i,j,cnt=1;
	cin>>n;
	for(i=0;i<10000;i++)
	{
		a[i]=0;
		b[i]=0;
	}
	a[0]=1;
	for(i=0;i<n;i++)
	{
		for(j=0;j<100000;j++)
		{
			a[j]=a[j]*2+b[j];
			if(a[j]>=10)
			{
				a[j]-=10;
				b[j+1]++;
			}
		}
		for(j=0;j<10000;j++)
			b[j]=0;
		
	}
	j=100000;
	while(a[j]==0)
		j--;
	for(;j>=0;j--)
		cout<<a[j];
	return 0;
}
