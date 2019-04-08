void main ()
{
	char s[2][80];
	int i,j;
	for(i=0;i<2;i++)
	{
		gets(s[i]);
		for(j=0;j<80;j++)
		{
			if(s[i][j]<='Z'&&s[i][j]>='A')
				s[i][j]=s[i][j]+32;
		}
	}
	if(strcmp(s[0],s[1])>0)
		printf(">\n");
	if(strcmp(s[0],s[1])<0)
		printf("<\n");
	if(strcmp(s[0],s[1])==0)
		printf("=\n");
}