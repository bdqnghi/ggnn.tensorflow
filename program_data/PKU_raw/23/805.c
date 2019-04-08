void main()
{
	char c,str[100];
	int i,k,j,e,number;
	gets(str);
	number=strlen(str);
	k=number-1;
	for(i=number-1;i>=0;i--)
	{
		if(str[i]==' ')
		{
			e=i;
		   for(j=e+1;j<=k;j++)
		     printf("%c",str[j]);
		   if(j==k+1) printf(" ");
			 k=e-1;
		}
		if(i==0)
			for(j=0;j<=number-1&&(str[j])!=' ';j++)
				printf("%c",str[j]);

	}
	
}