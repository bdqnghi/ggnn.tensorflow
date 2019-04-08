int main()
{
	char e[256],all[1000],words[50][256];
	int i,j,l,len,n=0,k=0;
	gets(all);
	len=strlen(all);
	for(i=0;i<len;i++)
	{
		if(all[i]==' ')
		{
			all[i]='\0';
			strcpy(words[n],(all+k));
			n++;
			k=i+1;
		}
	}
	strcpy(words[n],(all+k));
	for(j=0;j<n;j++)
	{
		if(strlen(words[j])>=strlen(words[j+1]))
		{
			strcpy(e,words[j+1]);
			strcpy(words[j+1],words[j]);
			strcpy(words[j],e);
		}
	}
	printf("%s\n",words[n]);
	for(l=0;l<n;l++)
	{
		if(strlen(words[l])<=strlen(words[l+1]))
		{
			strcpy(e,words[l+1]);
			strcpy(words[l+1],words[l]);
			strcpy(words[l],e);
		}
	}
	printf("%s\n",words[n]);
	return 0;
}

