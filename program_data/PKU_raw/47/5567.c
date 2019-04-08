void main()
{
	int n,i,a[128],*p,*q,t;
	scanf("%d",&n);
	p=a;
	for(i=0;i<n;i++)
		scanf("%d",p++);
	p=a;
	q=a+n-1;
	for(i=0;i<=n/2-1;i++)
	{
		t=*(p+i);
		*(p+i)=*(q-i);
		*(q-i)=t;
	}
	p=a;
	printf("%d",*p);
	p=a+1;
	for(i=1;i<n;i++)
	    printf(" %d",*(p++));
}