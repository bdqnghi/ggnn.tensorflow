int main()
{
	char word[32],n,i,j,k,len,temp[32];
	scanf("%d\n",&n);
	for (i=1;i<=n;i++)
	{
		gets(word);
		len=strlen(word);
		for (j=len-2;j<=len;j++) temp[j-len+2]=word[j];
		if (strcmp(temp,"er")==0 || strcmp(temp,"ly")==0) 
		{
			word[len-2]='\0';
			printf("%s\n",word);
		}
		for (j=len-3;j<=len;j++) temp[j-len+3]=word[j];
		if (strcmp(temp,"ing")==0) 
		{
			word[len-3]='\0';
			printf("%s\n",word);
		}
	}
	return 0;
}