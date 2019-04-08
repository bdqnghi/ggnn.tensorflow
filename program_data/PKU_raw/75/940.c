main()
{
	char a1[10000],a2[10000];
	int b[1000]={0},c[1000]={0};
	int i,j=0,k=0,l,r1,r2,m,n,p;
	gets(a1);
	gets(a2);
	r1=strlen(a1);
	r2=strlen(a2);
	for (i=0;i<r1;i++)
	{
		if (a1[i]!=',')
		{
			if (k==0) 
			{
				b[j]=a1[i]-48;
				k++;
			}
			else 
			{
				b[j]=b[j]*10+a1[i]-48;
			}
		}
		else
		{
			k=0;
			j++;
		}
	}
	j=0;
	for (i=0;i<r2;i++)
	{
		if (a2[i]!=',')
		{
			if (k==0) 
			{
				c[j]=a2[i]-48;
				k++;
			}
			else 
			{
				c[j]=c[j]*10+a2[i]-48;
			}
		}
		else
		{
			k=0;
			if (j==0) l=c[j];
			else if (c[j]>l) l=c[j];
			j++;
		}
	}
	printf("%d ",j+1);
	for (i=1;i<l;i++)
	{
		n=0;
		for (m=0;m<=j;m++)
		{
			if (b[m]<=i&&c[m]>i) n++;
		}
		if (i==1) p=n;
		else if (n>p) p=n;
	}
	printf("%d",p);
}