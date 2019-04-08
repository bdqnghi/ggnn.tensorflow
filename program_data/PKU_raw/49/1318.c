int f(char word[500],int len)
{
	int i;
	for(i=0;i<=len/2;i++)
	{
		if(word[i]!=word[len-1-i])
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	char str[500],word[1000][500];
	int i,j,len[1000],lenth,m,log;
	gets(str);
	log=0;
	lenth=strlen(str);
	for(i=2;i<=lenth;i++)
	{
		for(j=0;j<=lenth-i;j++)
		{
			for(m=0;m<i;m++)
			{
				word[log][m]=str[m+j];
				word[log][m+1]='\0';
			}
			log++;
			len[log-1]=strlen(word[log-1]);
		}
	}
	for(i=0;i<log;i++)
	{
		if(f(word[i],len[i]))
			printf("%s\n",word[i]);
	}
	return 0;
}

