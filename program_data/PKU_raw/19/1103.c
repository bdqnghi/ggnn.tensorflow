int main()
{
	char s[100],a[100],b[100],c[50][100];
	int i,n=0,len1,len2,k=0;
	gets(s);
	gets(a);
	gets(b);
	len1=strlen(s);
	len2=strlen(a);
	for(i=0;i<len1;i++)
	{
		if(s[i]==' ')
		{
			s[i]='\0';
			strcpy(c[n],(s+k));
			k=i+1;
			n++;
		}
	}
	strcpy(c[n],(s+k));
	for(i=0;i<n+1;i++)
	{
		if(strcmp(c[i],a)==0)
		{
			strcpy(c[i],b);
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%s ",c[i]);
	}
	printf("%s",c[n]);
	return 0;
}

