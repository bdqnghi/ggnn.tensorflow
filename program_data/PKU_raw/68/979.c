int main()
{
	int n,i,j,t,k;
	int su[50000];
	su[2]=0;
	scanf("%d",&n);
	for(j=3;j<n;j=j+2)
	{
		int m=0;
		for(k=2;k<=sqrt(j);k++)
		{
			if(j%k==0)
			m++;
		}
		if(m==0) 
		{
			su[j]=j;
		}
		else su[j]=0;
	}
	for(i=6;i<=n;i=i+2)
	{
		for(j=0;j<n;j++)
		{
			if(su[j]!=0)
			{
				t=i-su[j];
				if(su[t]!=0&&t>0)
				{
					printf("%d=%d+%d\n",i,j,t);
					break;
				}
			}
		}
	}	

	return 0;
}
