void main()
{
	char c[50][100],b[50][100]={""},a[50][100]={""};
	int n,i,j,l;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",c[i]);
	}
	for(i=0;i<n;i++)
	{
		l=strlen(c[i]);
		strcpy(b[i],c[i]);
		b[i][l-2]='e';
		b[i][l-1]='r';
		if(strcmp(c[i],b[i])==0)
			strncpy(a[i],c[i],l-2);
		strcpy(b[i],c[i]);
		b[i][l-2]='l';
		b[i][l-1]='y';
		if(strcmp(c[i],b[i])==0)
			strncpy(a[i],c[i],l-2);
		strcpy(b[i],c[i]);
		b[i][l-3]='i';
		b[i][l-2]='n';
		b[i][l-1]='g';
		if(strcmp(c[i],b[i])==0)
			strncpy(a[i],c[i],l-3);
	}
	for(i=0;i<n;i++)
	{
		printf("%s\n",a[i]);
	}
}