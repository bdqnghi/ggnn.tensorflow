void main()
{
	int n,i,g[100],max=0,min=0;
	char c[100][500],c1[50],c2[50];
	
	for(i=0;;i++)
	{
		if(scanf("%s",c[i])==EOF) break;
		g[i]=strlen(c[i]);
	}
	n=i;
	max=g[0];
	strcpy(c1,c[0]);
	for(i=0;i<n;i++)
	{
		if(g[i]>max) 
		{max=g[i];strcpy(c1,c[i]);}
		else continue;
	}
	min=g[0];
	strcpy(c2,c[0]);
	for(i=0;i<n;i++)
	{
		if(g[i]<min) 
		{min=g[i];
		strcpy(c2,c[i]);}
		else continue;
	}
	printf("%s\n%s\n",c1,c2);
}
		