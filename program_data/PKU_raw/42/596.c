void main()
{
	int n,i,k,a[100000],*p,*q;
	scanf("%d",&n);
	for(i=0;i<n-1;i++)
		scanf("%d ",&a[i]);
	scanf("%d",&a[n-1]);
	scanf("%d",&k);
	p=a;
	for(i=0;i<n;i++,p++)
	{
		if(*p==k)
		{
			for(q=p;q<a+n;q++)
				*(q)=*(q+1);
			i--;
			n--;
			p--;
		}
	}
	p=a;
	printf("%d",*p);
	for(i=1;i<n;i++)
		printf(" %d",*(p+i));

}