int main()
{
	char s[999];
	char a[100];
	char b[100];
	int i=0,j=0,k;
	int add;
	char word[200][100]={'\0'};
	gets(s);
	gets(a);
	gets(b);
	for(k=0;s[k]!='\0';k++)
	{
		if(s[k]==' ')
		{
			i++;
		    j=0;
	    }
		else
		{			
			word[i][j]=s[k];
		    j++;
		}

	}
	add=i;
	for(i=0;i<add+1;i++)
	{
		if(strcmp(word[i],a)==0)
			strcpy(word[i],b);
	}
	for(i=0;i<add;i++)
		printf("%s ",word[i]);
	puts(word[i]);
	return 0;
}