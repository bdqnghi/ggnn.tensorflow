int main()
{
	int a[10005]={0},i,j,n,m=0,t=0;
	scanf("%d",&n);
		for(i=3;i<=n;i++)
		{
			for(j=2;j<i;j++)
				if(i%j==0)
					break;
				if(j>=i)
				{
					a[t]=i;
					t++;
				}
		}
			for(t=0;t<=n;t++)
			if(a[t+1]-a[t]==2)
			{
				printf("%d %d\n",a[t],a[t+1]);
				m=m+1;
			}
			if(m==0)
				printf("empty\n");	
		return 0;
}
