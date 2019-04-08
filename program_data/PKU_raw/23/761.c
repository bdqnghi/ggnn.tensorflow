void main()
{
	char str[100],word[20][50]={'\0'};
	gets(str);
	int i,n,j=0,s=0;
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		if(str[i]!=' ') {word[j][s]=str[i];s++;}
		else {j++;s=0;}
	}
	for(i=j;i>0;i--)
		printf("%s ",word[i]);
	printf("%s",word[0]);
}
