int main()
{
	char danci[100][100];
	char ch[100];
	char yaotihuan[100];
	char tihuan[100];
	int i;
	int j;
	int k;
	int len;
	gets(ch);
	for(j=0;j<100;j++)
	{
		for(k=0;k<100;k++)
			danci[j][k]='\0';
	}
	j=0;k=0;
	len=strlen(ch);
	for(i=0;i<len;i++)
	{
		if(ch[i]!='\n'&&ch[i]!=' ')
		{
			danci[j][k]=ch[i];
			k++;
		}
		else
		{
			if(ch[i]==' ')
			{
				j++;
				k=0;
			}
			if(ch[i]=='\n')
				break;
		}
	}
	


	scanf("%s",yaotihuan);
	scanf("%s",tihuan);
	for(i=0;i<=j;i++)
	{
		if(strcmp(danci[i],yaotihuan)==0)
			strcpy(danci[i],tihuan);
	}
	for(i=0;i<j;i++)
		printf("%s ",danci[i]);
printf("%s",danci[j]);
return 0;
}