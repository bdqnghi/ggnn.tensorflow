int main()
{
	char s[10000],a[50][100];
	gets(s);
	int slen,i,j=0,k=0,maxlen,max=0,minlen,min=0;
	slen=strlen(s);
	for(i=0;i<slen;i++)
	{
		if(s[i]!=' ')
		{
			a[j][k]=s[i];
			k++;
		}
		if(s[i]==' ')
		{
			a[j][k]='\0';
			j++;
			k=0;
		}
		if(i==slen-1)
		{
			a[j][k]='\0';
		}
	}
	
	maxlen=strlen(a[0]);
	
	minlen=strlen(a[0]);
	
	for(i=0;i<=j;i++)
	{
		if(maxlen<strlen(a[i]))
		{
			maxlen=strlen(a[i]);
			max=i;
		}
		if(minlen>strlen(a[i]))
		{
			minlen=strlen(a[i]);
			min=i;
		}
	}
	printf("%s\n%s",a[max],a[min]);
	return 0;
}