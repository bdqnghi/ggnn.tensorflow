void main()
{
	int a[100],b[100],n,i,*p,*q;
	scanf("%d",&n);
	for(p=a;p<a+n;p++)
		scanf("%d",p);
	q=b;
	p--;
	for(i=0;i<n;i++)
		*q++=*p--;
	q=b;
	for(i=0;i<n-1;i++)
		printf("%d ",*q++);
	printf("%d",*q);
}