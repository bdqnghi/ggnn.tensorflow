main()
{
	char s1[14],s2[4],t;
	int n,m,i,j,k;
	while (scanf("%s%s",s1,s2)!=EOF)
	{
		m=strlen(s1);
		n=strlen(s2);
		j=0;
		t=s1[0];
		for (i=1;i<m;i++)
		{
			if(s1[i]>t)
			{
				j=i;
				t=s1[i];
			}
		}
		for (i=0;i<=m-j-1;i++)
			s1[n+m-i]=s1[m-i];
		for (i=0;i<n;i++)
			s1[j+1+i]=s2[i];
		for (i=0;i<m+n;i++)
	    printf("%c",s1[i]);
printf("\n");	}

}
