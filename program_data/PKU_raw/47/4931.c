void main()
{
	int n;
	int a[100],b[100];
	int*p,*q;
	scanf("%d",&n);
	q=b+n-1;
	for(p=a;p<a+n;p++)
	{
		scanf("%d",p);
		*q=*p;
		q--;
	}
	q=b;
	printf("%d",*q);
	for(q=b+1;q<b+n;q++)
	{
		printf(" %d",*q);
	}
}
	