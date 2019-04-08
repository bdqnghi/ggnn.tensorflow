void main()
{
	int n,a[300],i,m,j,s,*p1=a,*p2=a;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("%d",*p1);
	for(p1=a+1;p1<a+n;p1++)
	{
		s=0;
		for(p2=a;p2<p1;p2++)
	{
		m=*p1-*p2;
		if(m!=0)
			s++;
		}
		if(s==p1-a)
				printf(",%d",*p1);
		}
}
