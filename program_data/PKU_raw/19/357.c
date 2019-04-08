int main()
{
	char *s;
	char *a;
	char *b;
	s=(char *)malloc(sizeof (char)*1000);
	a=(char *)malloc(sizeof (char)*1000);
	b=(char *)malloc(sizeof (char)*1000);
	char ans[1001]={'\0'};
	int i,j,k,p;
	gets(s);
	gets(a);
	gets(b);
	int l,la,lb;
	l=strlen(s);
	la=strlen(a);
	lb=strlen(b);
	int index;
	index=0;
	for (i=0;i<l;i++)
	{
		k=0;
		for (j=0;j<la;j++)
		{
			if (s[i+j]!=a[j]) k=1;
		}
		if (((i+la)<l)&&(s[i+la]!=' ')) k=1;
		if ((i>0)&&(s[i-1]!=' ')) k=1;
		if (k==0) 
		{
			for (p=0;p<lb;p++) ans[p+index]=b[p];
			index=index+lb-1;
			i=i+la-1;
		}
		if (k>0) ans[index]=s[i];
        index++;
	}
	printf("%s\n",ans);
	free(a);
	free(b);
	free(s);
	return 0;
}