void main()
{
	int m,i,j,a[10000]={0};
	scanf("%d",&m);
	for(i=2;i<m;i+=2)
	{
		if((i+1)%2)
		{
			a[i]=1;
			for(j=3;j<=i;j+=2)
			{
				if((i+1)%j==0) 
				{
					a[i]=0;break;
				}
			}
		}
	}
	for(i=0;i<m/2;i++)
	{
		if(a[i]&&a[m-2-i]) printf("%d %d\n",i+1,m-1-i);
	}
}
