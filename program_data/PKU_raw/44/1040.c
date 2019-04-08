void main()
{
	int reverse(int n);
	int i;
	int a[6],b[6];
	for (i=0;i<=5;i++)
		scanf("%d",&a[i]);
	for (i=0;i<=5;i++)
		b[i]=reverse(a[i]);
	for (i=0;i<=5;i++)
		printf("%d\n",b[i]);
}

int reverse(int n)
{
	int f=0,i,j,m,p,q,c[10],d[10];
	if (n>0)
	{
		p=log10(n);
		for (i=0;i<=p;i++)
		{
			q=pow(10,(p-i));
			c[i]=(n-n%q)/q;
			n=n-c[i]*q;
		}
		for (i=0;i<=p;i++)
			d[i]=c[p-i];
		for (i=0;;i++)
			if (d[i]>0) break;
		for (j=i;j<=p;j++)
			f=f+d[j]*pow(10,p-j);
	}
	else if (n==0)
		f=0;
	else
	{
		n=-n;
		p=log10(n);
		for (i=0;i<=p;i++)
		{
			q=pow(10,(p-i));
			c[i]=(n-n%q)/q;
			n=n-c[i]*q;
		}
		for (i=0;i<=p;i++)
			d[i]=c[p-i];
		for (i=0;;i++)
			if (d[i]>0) break;
		for (j=i;j<=p;j++)
			f=f+d[j]*pow(10,p-j);
		f=-f;
	}
	return(f);
}