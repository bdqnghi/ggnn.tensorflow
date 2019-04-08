void main()
{
	int n,m,i,j,k,p=0;
	int a[10000]={0};
	scanf("%d",&n);
	for(i=3,k=0;i<n+1;i++)
	{
		p=0;
		m=i/2;
		for(j=2;j<m+1;j++)
			if(i%j==0) p=1;
		if(p==0)  
		{
			a[k]=i;
			k++;
		}
	}
	if(k==0&&k==1)
		printf("empty");
	else
	{
		for(i=0,p=0;i<k;i++)
			if(a[i+1]-a[i]==2)
			{
				printf("%d %d\n",a[i],a[i+1]);
				p=1;
			}
		if(p==0)
			printf("empty");
	}
}