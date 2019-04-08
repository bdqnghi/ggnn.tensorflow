void main()
{
	char str[1000][10],substr[1000][3],finalstr[1000][13];
	int n,i,j,l,k;
	for(i=0;scanf("%s%s",str[i],substr[i])!=EOF;i++)
	{
	}
	n=i;
	for(k=0;k<n;k++)
	{
		l=strlen(str[k]);
	for(i=0;i<l;i++)
	{
		for(j=0;j<l;j++)
		{
			if(str[k][i]<str[k][j])
				break;
		}
		if(j==l)
		{
			break;
		}
	}
	for(j=0;j<=i;j++)
		finalstr[k][j]=str[k][j];
	for(j=0;j<3;j++)
		finalstr[k][i+j+1]=substr[k][j];
	for(j=1;j<l-i;j++)
		finalstr[k][i+3+j]=str[k][i+j];
		
	}
		for(i=0;i<n;i++)
		printf("%s\n",finalstr[i]);
}