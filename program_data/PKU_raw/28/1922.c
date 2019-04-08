int main()
{
	int len=0,m=0,i=0;
	char sentence[6000];
	gets(sentence);
	len=strlen(sentence);
	for(i=0;i<=len;i++)
	{
		if(sentence[i]!=' '&&sentence[i]!=0)
			m++;
		else
		{
			printf("%d",m);
			m=0;
			break;
		}
	}
	for(i=i+1;i<=len;i++)
	{
		if(sentence[i-1]==' '&&sentence[i]!=' ')
			m=1;
		else if(sentence[i-1]!=' '&&(sentence[i]!=' '&&sentence[i]!=0))
			m++;
		else if(sentence[i-1]!=' '&&(sentence[i]==' '||sentence[i]=='\0'))
			printf(",%d",m);
	}
	return 0;
}