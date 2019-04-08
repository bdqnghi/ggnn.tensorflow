int main()
{
	char s[1000],word[51][30];
	gets(s);
	int a[51];
	int i,j=0,k=0;
	int n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(s[i]==' ')
		{
			s[i]='\0';
			strcpy(word[j],(s+k));
			j++;
			k=i+1;
		}
	}
	strcpy(word[j],(s+k));
	j++;
	for(i=0;i<j;i++)
	{
		a[i]=strlen(word[i]);
	}
	int max=a[0],min=a[0],w=0,e=0;
	for(i=1;i<j;i++)
	{
		if(max<a[i])
		{
			max=a[i];
			w=i;
		}
		if(min>a[i])
		{
			min=a[i];
			e=i;
		}
	}
	printf("%s\n",word[w]);
	printf("%s\n",word[e]);
	return 0;
}