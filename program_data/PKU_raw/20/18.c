
void main()
{
	char c[100][100];
	int  i=0,j,count,max,m,b[100];
	do
	{
		gets(c[i]);
		b[i]=strlen(c[i]);
		i++;
	}
	while(c[i-1][0]!='\0');
	m=i-1;
	for (i=0;i<m;i++)
	{
		max=0;
		count=0;
		for (j=0;j<b[i]-4;j++)
		{
			if (c[i][j]>max)
			{
				max=c[i][j];
			    count=j;
			}
		}
		for (j=0;j<=count;j++)
		{
			printf("%c",c[i][j]);
		}
		for (j=b[i]-3;j<=b[i]-1;j++)
		{
			printf("%c",c[i][j]);
		}
		for (j=count+1;j<b[i]-4;j++)
		{
			printf("%c",c[i][j]);
		}
		printf("\n");
	}
}




	
	