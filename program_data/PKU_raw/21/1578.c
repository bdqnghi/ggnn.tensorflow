int main()
{
	unsigned int *p,*k;
	int n,i,j=0,t,m=0,tmp;
	double a=0,sum=0,*c,lar=0;
	scanf("%d",&n);
	p=(unsigned int*)malloc(sizeof(unsigned int)*n);
	c=(double*)malloc(sizeof(double)*n);
	k=(unsigned int*)malloc(sizeof(unsigned int)*n);
	for(i=0;i<n;i++)
	{
		scanf("%u",&p[i]);
		sum=sum+(double)p[i];
	}
	a=sum/(double)n;
	for(i=0;i<n;i++)
	{
		if(a-(double)p[i]>=0)
			c[i]=a-(double)p[i];
		else
			c[i]=(double)p[i]-a;
	}
	for(i=0;i<n;i++)
	{
		if(lar<c[i])
		{
			lar=c[i];
		}
	}
	for(i=0;i<n;i++)
	{
		if(c[i]==lar)
		{
			k[j]=p[i];
			j++;
		}
	}
	m=j;
	for(i=0;i<m;i++)
	{
		t=i;
		for(j=m-1;j>i;j--)
		{
			if(k[j]>k[j-1])
				t=j-1;
		}
		tmp=k[i];
		k[i]=k[t];
		k[t]=tmp;
	}
	printf("%u",k[0]);
	for(i=1;i<t+1;i++)
		printf(",%u",k[i]);
	free(p);
	free(k);
	free(c);
	return 0;
}