main()
{
	char *p1,*p2;
	char a[50]={0},b[50]={0};
	int i,j,m,n;
	p1=a;
	p2=b;
	scanf("%s",p1);
	scanf("%s",p2);
	m=strlen(a);
	n=strlen(b);
	for (i=0;i<n;i++,p2++)
	{
        if (*p2==*p1)
		{
			for (j=0;j<m;j++)
			{
				if (p2[j]!=p1[j])
					break;
			}
		}
		if (j==m)
			break;
	}
	printf("%d",i);
}