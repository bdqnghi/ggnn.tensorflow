main()
{
	char a[80],b[80];
    scanf("%s %s",a,b);
	int i,j,m,n,k;
	n=strlen(a);
	m=strlen(b);
	if(m!=n) printf("NO");
	else
	{
		int c[52]={0},d[52]={0};
		for(i=0;i<n;i++)
		{
			for(j=65;j<=90;j++)
			{
				if(a[i]==j) c[j-65]+=1;
				if(b[i]==j) d[j-65]+=1;
			}
		
	        for(j=97;j<=122;j++)
			{
				if(a[i]==j) c[j-71]+=1;
				if(b[i]==j) d[j-71]+=1;
			}
		}
		k=0;
		for(i=0;i<52;i++)
		{
            if(c[i]!=d[i])
				k=1;
		}
		if(k==1) printf("NO");
		else printf("YES");
	}
}