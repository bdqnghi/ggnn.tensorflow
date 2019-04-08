void main()
{
	int i,j=0,k=0;
	char str[101],str1[101],str2[101],str3[101][101];
	gets(str);
	gets(str1);
	gets(str2);
	for(i=0;i<strlen(str);i++)
	{
		if(str[i]!=' ') {str3[k][j]=str[i];j++;}
		else {str3[k][j]='\0';k++;j=0;}
	}
	str3[k][j]='\0';
	for(i=0;i<=k;i++)
	{
		if(strcmp(str3[i],str1)==0)
		{if(i==0) printf("%s",str2);
		else printf(" %s",str2);
		}
		else {if(i==0) printf("%s",str3[i]);
		else printf(" %s",str3[i]);}
	}
}