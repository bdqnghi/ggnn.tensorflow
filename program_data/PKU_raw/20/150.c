void main()
{
	char c,str[100][100];
	int a,b,e,i=0,j;
	while (gets(str[i])!=0)
	{
		c=0;
		for (j=0;str[i][j]!=' ';j++)
		{
			if (str[i][j]>c)
			{
				c=str[i][j];
				a=j;
			}
		}
		e=j;
		b=strlen(str[i]);
		for (j=0;j<=a;j++)
			printf("%c",str[i][j]);
		for (j=e+1;j<=b-1;j++)
			printf("%c",str[i][j]);
		for (j=a+1;j<=e-1;j++)
			printf("%c",str[i][j]);
		printf("\n");
		i++;
	}
}