int main()
{
	int n,i,j,k,nan,nv;
	scanf("%d\n",&n);
	char a[42][8];
	double b[42],c[42],d[42],x;
	for(i=0;i<n;i++)
	{
		scanf("%s%lf",a[i],&b[i]);
	}
	j=0;
	k=0;
	for(i=0;i<n;i++)
	{
		if(a[i][0]=='m')
		{
			c[j]=b[i];
			j++;
		}
		else
		{
			d[k]=b[i];
			k++;
		}
	}
	nan=j;
	nv=k;
	for(i=0;i<nan;i++)
	{
		for(j=i;j<nan;j++)
		{
			if(c[j]<c[i])
			{
				x=c[j];
				c[j]=c[i];
				c[i]=x;
			}
		}
	}
	for(i=0;i<nv;i++)
	{
		for(j=i;j<nv;j++)
		{
			if(d[j]>d[i])
			{
				x=d[j];
				d[j]=d[i];
				d[i]=x;
			}
		}
	}
	for(i=0;i<nan;i++)
	{
		printf("%.2lf ",c[i]);
	}
	printf("%.2lf",d[0]);
	for(i=1;i<nv;i++)
	{
		printf(" %.2lf",d[i]);
	}
	return 0;
}
