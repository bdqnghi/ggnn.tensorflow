void main()
{
	int m,n,i,j,k,t,h,a[301]={0};
	for(i=1;;i++)
	{
		scanf("%d%d",&n,&m);
		if(n==0||m==0)break;
		else
		{
			for(j=1;j<=n;j++)
			a[j]=1;
			k=0;t=n;
			for(j=1;;j++)
			{
				if(j%n==0)h=n;
				else h=j%n;
				if(a[h]!=0)k++;
				if(k==m)
				{
					a[h]=0;
					k=0;
					t--;
				}
				if(t==0)
				{
					printf("%d\n",h);
					break;
				}
			}
		}
	}				
}