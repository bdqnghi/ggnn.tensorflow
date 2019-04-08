void main()
{
	int a[300],i=0,j,m1,m2=0,n=0;
	int c;
	while(scanf("%d",&a[i]))
	{
		c=getchar();
		if(i==0)
			m1=a[0];
		else if(a[i]>m1)
			m1=a[i];
		if(c=='\n')
			break;
		i++;
	}
	for(j=0;j<=i;j++)
		if(a[j]<m1&&a[j]>m2)
			m2=a[j];
	for(j=0;j<=i;j++)
		if(a[j]==m2)
			n++;
	if(n==0)
		printf("No\n");
	else printf("%d\n",m2);
}