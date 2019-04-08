void main()
{
	char s[100],a[100],b[100];
	char t[50][100];
	int s1,n,i,j,m;
	gets(s);
	gets(a);
	gets(b);
	s1=strlen(s);
	for(i=0,n=1;i<s1;i++)
		if(s[i]==' ')n++;
	for(i=0,m=0;i<n;i++)
	{
		for(j=0;;j++)
		{
			if(s[m+j]==' ')
			{
				t[i][j]='\0';m=m+j+1;break;
			}
			else
				t[i][j]=s[m+j];
		}
	}
	for(i=0;i<n;i++)
		if(strcmp(t[i],a)==0)
			strcpy(t[i],b);
		else strcpy(t[i],t[i]);
	for(i=0;i<n-1;i++)
		printf("%s ",t[i]);
	printf("%s\n",t[n-1]);
}