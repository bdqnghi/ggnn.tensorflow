int a[1004],b[1004];

void main()
{
	void qsorta(int n);
	void qsortb(int n);
	int n=1,i,j,k,max=0,one,ll[3000],l=1;
	while (n!=0)
	{
		scanf("%d",&n);
		if (n==0) break;
		for (i=1;i<=n;i++) scanf("%d",&a[i]);
		qsorta(n);
		for (i=1;i<=n;i++) scanf("%d",&b[i]);
		qsortb(n);
		max=-100000000;
		for (i=0;i<=n-1;i++)
		{
			one=0;
			for (j=1;j<=n;j++)
			{
				k=j+i;
				if (k>n) k=k-n;
				if (a[j]>b[k]) one=one+200;
				else if (a[j]<b[k]) one=one-200;
			}
			if (one>max) max=one;
		}
		ll[l]=max;
		l=l+1;
	}
	for (i=1;i<=l-1;i++)
		printf("%d\n",ll[i]);
}
 
void qsorta(int n)
{
	int i,j,temp;
	for (i=1;i<=n-1;i++)
		for (j=i;j<=n;j++)
			if (a[j]<a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
}

void qsortb(int n)
{
	int i,j,temp;
	for (i=1;i<=n-1;i++)
		for (j=i;j<=n;j++)
			if (b[j]<b[i])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
}