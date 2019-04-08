void main()
{
	char str1[100][100],str[100];
	int n,a=0,b=0,c,d,i;
	gets(str);
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		if(str[i]!=' ')
        {str1[a][b]=str[i];b++;}
		if(str[i]==' ')
		{str1[a][b]='\0';a++;b=0;}
	}
	str1[a][b]='\0';
    for(d=a;d>=1;d--)
	{
		for(i=0;;i++)
		{
			if(str1[d][i]!='\0')
				printf("%c",str1[d][i]);
			if(str1[d][i]=='\0')
				break;
		}
		printf(" ");
	}
	for(i=0;;i++)
	{
		if(str1[0][i]!='\0')
			printf("%c",str1[0][i]);
		if(str1[0][i]=='\0')
			break;
	}
}