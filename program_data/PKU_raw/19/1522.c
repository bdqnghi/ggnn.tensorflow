void main()
{
	char str[100][100];
	char c[101],word1[100],replaceword[100];
	gets(c); gets(word1); gets(replaceword);
	int i,j=0,k=0;
	for(i=0;c[i]!='\0';i++)
	{
		if(c[i]!=' '){
			str[j][k]=c[i];
			k++;
		}
		else {
			str[j][k]='\0';
			j++;
			k=0;
		}
	}
	str[j][k]='\0';
	for(i=0;i<=j;i++)
	{
		if(strcmp(str[i],word1)==0)
			strcpy(str[i],replaceword);
	}
	printf("%s",str[0]);
	for(i=1;i<=j;i++)
	   printf(" %s",str[i]);
	printf("\n");
}

	
			
