main()
{
	char a[100]={0},b[100]={0};
	int alpha1[256]={0},alpha2[256]={0},n,n1,n2,i,j=0;
	scanf("%s %s",a,b);
	n1=strlen(a);
	n2=strlen(b);
	if (n1>n2) n=n1;
	else n=n2;
	for(i=0;i<n;i++)
	{
		alpha1[a[i]]++;
		alpha2[b[i]]++;
	}
	for(i='a';i<='z';i++)
	{
		if (alpha1[i]!=alpha2[i]) j=1;
	}
	for(i='A';i<='Z';i++)
	{
		if (alpha1[i]!=alpha2[i]) j=1;
	}
	if(j==0)printf("YES\n");
	else printf("NO\n");
}