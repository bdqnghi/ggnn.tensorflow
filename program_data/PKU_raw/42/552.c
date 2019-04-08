void main()
{
	int n,a[100000],i,j,k,l,m,t;
	int *p;
	l=0;m=0;
	scanf("%d",&n);
	for (i=0;i<n;i++) scanf("%d",&a[i]);
	p=&a[0];
	scanf("%d",&k);
	for (i=0;i<n-l;i++)
	{
		if (m>=n) break;
		if (*(p+i)==k)
		{
			l++;
			for (j=i;j<n-l;j++) {t=*(p+j);*(p+j)=*(p+j+1);*(p+j+1)=t;}
			i--;
		}
		m++;
	}
	for (i=0;i<n-l;i++) {printf("%d",*(p+i));if (i!=n-l-1) printf(" ");}
}