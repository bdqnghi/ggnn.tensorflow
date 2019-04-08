void main()
{
	int i=0,j=0,n,a[100],b[100],k,m=0,sum=59;
	char c[100][10];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s %d",c[i],&a[i]);
		if(a[i]>=60) m++;
	}
	for(j=0;j<m;j++)
	{
		for(i=0;i<n;i++)
		{
			if(a[i]>sum) 
			{
				sum=a[i];
				k=i;
			}
		}
		a[k]=0;
		b[j]=k;
		sum=59;
	}
	for(j=0;j<m;j++)
	{
		printf("%s\n",c[b[j]]);
	}
	for(i=0;i<n;i++)
	{
		if((a[i]>0)&&(a[i]<60)) 
		{
			printf("%s\n",c[i]);
		}
	}
}
