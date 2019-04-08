main()
{
	char x[501];
	int y[501];
	int i,j,k,l,h,n,m;
	scanf("%d",&n);
	scanf("%s",x);
	m=strlen(x);
	m=m-n;
	for(i=0;i<=m;i++)
	{
		l=0;//zongshu
		for(k=i;k<=m;k++)
		{
			h=0;//panding
			for (j=0;j<n;j++)
			{
				if (x[i+j]!=x[k+j]) h++;
			}
			if (h==0) l++;
		}
		y[i]=l;
	}
	k=y[0];
	for(i=1;i<=m;i++)
	{
		if (y[i]>k) k=y[i];
	}
if (k==1) printf("NO");
else{
	printf("%d\n",k);
	for(i=0;i<=m;i++)
	{
		if (k==y[i])
		{
			for (j=0;j<n;j++)
			{
				printf("%c",x[i+j]);
			}
			printf("\n");
		}
	}
}
}
