int ch(char a)
{
	if (a>='0'&&a<='9') return 1;
	return 0;
}
void main()
{
	char s[100];
	gets(s);
	int j,i,k=0,m=0;
	for (i=0;i<strlen(s);i++)
	{
	 if (i>0&&ch(s[i])&&!ch(s[i-1]))
		 k=i;
	 if (i>0&&!ch(s[i])&&ch(s[i-1]))
		 {
			 m=1;
			 for (j=k;j<=i-1;j++)
				 printf("%c",s[j]);
			 printf("\n");
		 }
	 if (ch(s[i])&&i==strlen(s)-1)
				  {
					  m=1;
			          for (j=k;j<=i;j++)
				        printf("%c",s[j]);
			          printf("\n");
			 }
	}
}