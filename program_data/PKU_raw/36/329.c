void main()
{
	char a[1000],b[1000];
	int c[52]={0},d[52]={0};
	int numa,numb,i,j;
	scanf("%s %s",a,b);
	numa=strlen(a);
	numb=strlen(b);
	for (j=0;j<26;j++)
	{
	     for (i=0;i<numa;i++)
		     if (a[i]=='A'+j)
			     c[j]++;
		 for (i=0;i<numb;i++)
			 if (b[i]=='A'+j)
				 d[j]++;
	}
	for (j=26;j<52;j++)
	{
	     for (i=0;i<numa;i++)
		     if (a[i]=='a'+j-26)
			     c[j]++;
		 for (i=0;i<numb;i++)
			 if (b[i]=='a'+j-26)
				 d[j]++;
	}
	for (i=0;i<51;i++)
	{
		if (c[i]!=d[i])
		{
			printf("NO");
			break;
		}
	}
	if (i==51)
		printf("YES");
}