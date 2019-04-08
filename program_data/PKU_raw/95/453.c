void main()
{
	int i,j;
	char s[2][81];
	gets(s[0]);
	gets(s[1]);
	for(i=0;i<=1;i++)
		for(j=0;j<=strlen(s[i])-1;j++)
			if(s[i][j]>='a'&&s[i][j]<='z')
				s[i][j]=s[i][j]-32;
	if(strcmp(s[0],s[1])<0)
		printf("<");
	if(strcmp(s[0],s[1])>0)
		printf(">");
	if(strcmp(s[0],s[1])==0)
		printf("=");
}