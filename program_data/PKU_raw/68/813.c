int main()
{
	int n,i,t,a[80000]={0},sum=0;
	cin>>n;
		for(i=2;i<sqrt(n);i++,sum=0)
		{
			sum=sum+i;
			if(a[sum]==0)
			{
				while(sum<=n)
				{
					sum=sum+i;
					a[sum]=1;
				}
			}
		}
		t=n-6;
		for(i=2;i<=n/2&&t>=0;i++)
		{
			if(a[i]==1)
				continue;
				if(a[n-i-t]==0)
				{
					cout<<n-t<<'='<<i<<"+"<<n-i-t<<endl;
					t=t-2;
					i=1;
				}
		}
	return 0;
}