main()
{
	char s[101],t[100][100];
	int i=0,j=0,k=0;
	gets(s);
	while(s[i]!='\0')
	{
		if(s[i]!=' ')
		{
			t[j][k]=s[i];
			k++;
			i++;
		}
		else
		{
			j++;
			k=0;
			i++;
		}
	}
	for(i=j;i>0;i--)
	printf("%s ",t[i]);
	printf("%s",t[0]);
}