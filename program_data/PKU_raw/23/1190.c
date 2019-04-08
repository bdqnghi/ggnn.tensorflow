main()
{
	char c[50][100];
	int d[100],i,j,a=0;
	for(i=0;i<=50;i++)
	{ 
		d[i]=0;
		for(j=0;j<=100;j++)
		{
			c[i][j]=getchar();
			if(c[i][j]>122||c[i][j]<65) break;
				d[i]=d[i]+1;
		}
		if(c[i][j]=='\n') break;
			a=a+1;
	}

	c[a][d[i]]=' ';
	for(i=a;i>0;i--)
	{	
		for(j=0;j<=d[i];j++)
		{		
			printf("%c",c[i][j]);
		}
	}
	for(i=0,j=0;j<=d[i]-1;j++)
	{		
		printf("%c",c[i][j]);
	}

}