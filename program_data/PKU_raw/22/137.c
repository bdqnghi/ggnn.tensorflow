void main()
{
	int a[300],i,m,max,n=0,s=0;
	char b;
	for(i=0;i<300;i++)
	{
		scanf("%d",&a[i]);
		b=getchar();
		if(b=='\n')
		{
			m=i;
			break;
		}

	}
	if(m==1)
		printf("No");
	for(i=0;i<m;i++)
		if(a[i]==a[i+1])
			n++;
		if(n==m)
			printf("No");
		else
		{
	max=a[0];	
	for(i=0;i<=m;i++)
		if(max<a[i])
			max=a[i];
	for(i=0;i<m+1;i++)
		if(s<a[i]&&a[i]<max)
			s=a[i];
	for(i=1;i<=m;i++)
		if(s<a[i]&&a[i]<max)
			s=a[i];
		printf("%d",s);
		}
}