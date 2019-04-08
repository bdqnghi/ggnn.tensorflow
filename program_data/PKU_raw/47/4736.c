void main()
{
	int n,i,t,a[100],*p=a;
	scanf("%d",&n);
	for(i=0;i<n;i++,p++)
		scanf("%d",p);
	for(p=a,i=0;i<n/2;i++)
	{
		t=*(p+n-1-i);
		*(p+n-1-i)=*(p+i);
		*(p+i)=t;
	}
	for(p=a;p<a+n;p++)
	{
		printf("%d",*p);
		if(p!=a+n-1)
			printf(" ");
	}
}