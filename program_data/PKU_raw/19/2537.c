int main()
{
	char str[100],str1[100],str2[100],word[50][50]={0};
	int len,i,row=1,col=1;
	gets(str);
	gets(str1);
	gets(str2);
	len=strlen(str);
	for(i=1;i<=len;i++)
		if(str[i-1]==' ')
		{
			row++;
			col=1;
		}
		else
		{
			word[row-1][col-1]=str[i-1];
			col++;
		}
		for(i=1;i<=row;i++)
			if(strcmp(word[i-1],str1)==0)
				strcpy(word[i-1],str2);
		printf("%s",word[0]);
		for(i=2;i<=row;i++)
			printf(" %s",word[i-1]);
		return 0;
}




