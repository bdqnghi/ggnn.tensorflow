int reverse(int a)
{
	int n,b[10],c[10],i,ra,sum=0;
	if(a>0)
	{
		n=log10(a)+1;
	for(i=0;i<n;i++)
	{
		b[i]=a/(int)pow(10,n-i-1);
		c[i]=a%(int)pow(10,n-i-1);
		a=c[i];
	}
	for(i=0;i<n;i++)
	{
		ra=b[i]*pow(10,i);
		sum=sum+ra;
	}
	return(sum);
	}
	
	if(a<0)
	{
		a=-a;
			n=log10(a)+1;
	for(i=0;i<n;i++)
	{
		b[i]=a/(int)pow(10,n-i-1);
		c[i]=a%(int)pow(10,n-i-1);
		a=c[i];
	}
	for(i=0;i<n;i++)
	{
		ra=b[i]*pow(10,i);
		sum=sum+ra;
	}
	return(-sum);
	}

	if(a==0)
	{
		return(0);
	}
}

void main()
{
	int i,a[6];
	for(i=0;i<6;i++)
		scanf("%d",&a[i]);
	for(i=0;i<6;i++)
		printf("%d\n",reverse(a[i]));
}