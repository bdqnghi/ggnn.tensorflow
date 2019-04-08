int main()
{
	char words[110],zfcsz[110][110];
	char a[110],b[110];
	int i,n,k,j;
	gets(words);
	scanf("%s",a);
	scanf("%s",b);
	n=strlen(words);
	k=0;
	j=0;
	for(i=0;i<n;i++)
	{
		if(words[i]!=' ')
		{
			zfcsz[k][j]=words[i];
			j++;
			if(i==n-1)
			{
				k++;
				zfcsz[k][j]='\0';
			}
		}
		else
		{
			zfcsz[k][j]='\0';
			k++;
			j=0;
		}
	}
	for(i=0;i<k-1;i++)
	{
		if(strcmp(zfcsz[i],a)==0)
		{
			printf("%s ",b);
		}
		else
		{
			printf("%s ",zfcsz[i]);
		}
	}
	if(strcmp(zfcsz[k-1],a)==0)
	{
		printf("%s",b);
	}
	else
	{
		printf("%s",zfcsz[i]);
	}
	return 0;
}
