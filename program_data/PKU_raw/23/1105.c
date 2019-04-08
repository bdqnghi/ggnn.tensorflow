void main()
{
	char s[101],c[101],len;
	int i,j=0,p;
	gets(s);
	len=strlen(s);
	for(i=len-1;i>=0;i--)
	if(*(s+i)==' ')
	{
		
		for(p=1;*(s+i+p)!=' '&&*(s+i+p)!='\0';p++)
			printf("%c",*(s+i+p));
		printf(" ");
	}
	for(p=0;*(s+p)!=' '&&*(s+p)!='\0';p++)
			printf("%c",*(s+p));
}

		

		

	
				




	
	

