int main()
{
    int ls,i,num,sk,lk,word;
	char kong[100][100],s1[100][100],s[100];
	gets(s);
	ls=strlen(s);
	sk=0;
	num=0;
	word=0;
	lk=0;
	for(i=0;i<ls;i++)
	{
		if(s[i]!=' ')
			s1[word][num++]=s[i];
		else{
			while(s[i]==' ')
			{
				kong[lk][sk++]=s[i];
				i++;
			}
			kong[lk][sk++]='\0';
			lk++;
			sk=0;
			s1[word][num]='\0';
				word++;
				num=0;
				i--;
		}

	}
	for(i=word;i>=0;i--)
	{
		printf("%s",s1[i]);
		if(i!=0)printf("%s",kong[i-1]);
	}


	return 0;



}
