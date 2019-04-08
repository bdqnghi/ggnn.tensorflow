void main()
{
	int a[400]={0},c[400],n,i,j,m,temp,d[400],k;float b[400]={0},t,max,s=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	for(i=1;i<=n;i++)
		s=s+a[i];
	t=s/n;
	for(i=1;i<=n;i++)
	{if(a[i]>=t)b[i]=a[i]-t;else b[i]=t-a[i];}
	max=b[1];
	for(i=1;i<=n;i++)
	{if(b[i]>max)max=b[i];}
	m=0;
		for(i=1;i<=n;i++)
		{if(b[i]>=max)c[m]=a[i];m++;}
		for(j=0;j<m-1;j++)
			for(i=0;i<m-1-j;i++)
				if(c[i]>c[i+1])
				{temp=c[i];c[i]=c[i+1];c[i+1]=temp;}k=0;
			for(i=0;i<m;i++)
				if(c[i]>0){d[k]=c[i];k++;}
				printf("%d",d[0]);
				for(i=1;i<k;i++)
					printf(",%d",d[i]);
}

			


	
