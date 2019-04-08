void main()
{
	char a[1000][15],c[1000][14];
	char ch;
	int i,j,k,n=0,b[1000];
	for (i=0;i<1000;i++)
	{
		gets(a[i]);
		if (a[i][0]=='\0')
			break;
		n++;
	}
	for (i=0;i<n;i++)
	{
		b[i]=strlen(a[i]);
		ch=a[i][0];
		k=0;
		for (j=0;j<b[i]-4;j++)
		{
			if (ch<a[i][j])
			{
				ch=a[i][j];
				k=j;
			}
			else
				continue;
		}
		for (j=0;j<k+1;j++)
		{
			c[i][j]=a[i][j];
		}
		c[i][k+1]=a[i][b[i]-3];
		c[i][k+2]=a[i][b[i]-2];
		c[i][k+3]=a[i][b[i]-1];
		for (j=k+1;a[i][j]!=' ';j++)
		{
			c[i][j+3]=a[i][j];
		}
		c[i][j+3]='\0';
	}
	for (i=0;i<n;i++)
		printf("%s\n",c[i]);
}
