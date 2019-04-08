void main()
{
	int m,n,i,l,b,i1,j,k,a[302]={0};
	for(;;)
	{
	scanf("%d %d",&n,&m);
	if(m==0 && n==0) break;
	if(n==1) {printf("1\n");continue;}
	for(i=0;i<n;i++)
		a[i]=i+1;
	l=n;
	k=0;
	for(i1=0;;i1++)
	{

		b=(k+m)%l;
		if(b==0) b=l;
		for(i=b-1;i<l;i++)
			a[i]=a[i+1];
		l--;
		k=b-1;
		if(a[1]==0) break;
	}

	printf("%d\n",a[0]);

}
}