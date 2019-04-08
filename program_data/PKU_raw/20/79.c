void main()
{
	char s[20][13],str[3],S[20][13];
	int i,j,k,n,max;
	for(i=1;(s[i][0]=getchar())!=EOF;i++)
	{
		s[i][1]='\0';
		gets(S[i]);
		strcat(s[i],S[i]);
	}
	n=i-1;
    for(i=1;i<=n;i++)
	{
		max=0;
		for(j=1;s[i][j]!=' ';j++)
		{
			if(s[i][j]>s[i][max])
				max=j;  
		}

		k=j-1;
		str[0]=s[i][k+2];
        str[1]=s[i][k+3];
		str[2]=s[i][k+4];
        for(j=k;j>max;j--)
			s[i][j+3]=s[i][j];
		s[i][max+1]=str[0];
		s[i][max+2]=str[1];
		s[i][max+3]=str[2];
		for(j=0;j<=k+3;j++)
			printf("%c",s[i][j]);
		printf("\n");
	}
}

