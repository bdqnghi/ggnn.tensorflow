void main()
{
	int a[300];int c[300]={0};
	int i,j=0,k,l,m,n;char b[300]={'\0'};
	for(i=0;i<300;i++)
		a[i]=0;
	for(i=0;i<300;i++)
	{
		scanf("%d%c",&a[i],&b[i]);
		if(b[i]=='\n')
		{
			j=i+1;
			break;
		}
	}
	
	if(j==1){printf("No");exit(-1);}
	if(j>1)
	{
		for(i=0;i<=j-1;i++)
			c[i]=a[i]-a[0];
	}
m=0;
for(i=0;i<=j-1;i++)
{
	if(c[i]!=0)m=m+1;
}
if(m==0){printf("No");exit(-1);}
	k=a[0];
	for(i=0;i<j;i++)
	{
		if(a[i]>k)k=a[i];
	}
	for(i=0;i<j;i++)
	{
		if(a[i]==k)a[i]=0;
	}
	l=a[0];
    for(i=0;i<j;i++)
	{
		if(a[i]>l)l=a[i];
	}
	printf("%d",l);
}

	
