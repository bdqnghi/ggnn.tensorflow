main()
{
	int i,n=1,m1,m2,a[100];
	char d;
	scanf("%d",&a[0]);
	while(scanf("%c",&d),d==',')
	{
		scanf("%d",&a[n]);
		n++;
	}
	if (n==1) printf("No");
	else
	{
		m1=a[0];m2=a[0];
		if (a[1]>=a[0]) m1=a[1];
		else m2=a[1];
		for (i=2;i<n;i++)
		{
			if (m1==m2) 
			{
				if (a[i]>m1) m1=a[i];
				else m2=a[i];
			}
			else
			{
			if (a[i]>m1)
			{
				m2=m1;
				m1=a[i];
			}
			else
			{
				if (a[i]<m1&&a[i]>m2)
				{
					m2=a[i];
				}
			}
			}
		}
	
	if (m1==m2) printf("No");
	else printf("%d",m2);
}}
