void main()
{
	char str[20][14];
	int m;
	int i=0,j,p,q;
	char x;
	for(i=0;i<20;i++)
		for(j=0;j<14;j++)
		{
			str[i][j]='\0';
		}
	for(i=0;;i++)
	{
		gets(str[i]);
		m=i;
		if(str[i][0]=='\0')break;
		
	}
	for(i=0;i<m;i++)
	{
        p=0;
		q=0;
		for(j=0;j<14;j++)
		{
			if(str[i][j]==' ')
			{
				p=j; 
				break;
			}
		}
        x=str[i][0];
		for(j=1;j<p;j++)
		{
			if(str[i][j]>x)
			{
				x=str[i][j];
				q=j;
			}
		}

		for(j=0;j<=q;j++)
		{
			printf("%c",str[i][j]);
		}
		printf("%c%c%c",str[i][p+1],str[i][p+2],str[i][p+3]);
		for(j=1;j<p-q-1;j++)
		{
			printf("%c",str[i][q+j]);
		}
		printf("%c\n",str[i][p-1]);

	}
}
