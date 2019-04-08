int main()
{
	int ls,i,word,num;
	char s[100],s1[100][100];
	gets(s);
	ls=strlen(s);
	word=0;
	num=0;
	for(i=0;i<ls;i++)
	{
		if(s[i]!=' ')s1[word][num++]=s[i];
		else{
			while(s[i]==' ')i++;
			i--;
			s1[word][num]='\0';
			word++;
			num=0;
		}
	}
	for(i=0;i<=word;i++)
	{
	printf("%s",s1[i]);
	if(i!=word)printf(" ");
	}


        return 0;
}