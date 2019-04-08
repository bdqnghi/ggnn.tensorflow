int main()
{
	char sent[1000],zfc[300][200];
	int n,i=0,j=0,k=0;
	gets(sent);
	n=strlen(sent);

	for(i=0;i<n;i++)
	{
		if((sent[i]==' '&&sent[i+1]!=' ')||sent[i]=='\0')
		{
			zfc[j][k]='\0';
			k=0;
			j++;
		}
		else if(sent[i]!=' ')
		{
			zfc[j][k]=sent[i];
			k++;
		}
	}
    zfc[j][k]='\0';
	for(i=0;i<j;i++)
	{
		printf("%d,",strlen(zfc[i]));
	}
	printf("%d",strlen(zfc[j]));
	return 0;
}
