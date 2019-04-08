int main()
{
	char zfc[100];
	gets(zfc);
	char b[100][100];
	int l=strlen(zfc);
	int n=0,k=0,i;
	for(i=0;i<l;i++)
	{
		if(zfc[i]!=' '&&zfc[i]!=',')
		{
			b[n][k]=zfc[i];
			k++;
		}
		else
		{
			b[n][k]='\0';
			n++;
			k=0;
		}
	}
	b[n][k]='\0';
    char h[100],f[100];
	gets(h);
	gets(f);
	int j;
	for(j=0;j<n;j++)
	{
		if(strcmp(b[j],h)==0)
		{
			strcpy(b[j],f);
			printf("%s ",b[j]);
		}
		else
		{
			printf("%s ",b[j]);
		}
	}
	if(strcmp(b[n],h)!=0)
		printf("%s",b[n]);
	if(strcmp(b[n],h)==0)
		printf("%s",f);
	return 0;
}