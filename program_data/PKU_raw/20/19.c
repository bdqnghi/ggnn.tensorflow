
void main()
{
	char mid,a[100][50];
	int i=0,j=0,k=0,m,b[100];
	do
	{
		gets(a[i]);
		b[i]=strlen(a[i]);
		i++;
	}
	while(a[i-1][0]!='\0');
	
	m=i-1;

	for(i=0;i<m;i++)
	{
		k=0;
		mid=a[i][0];
		for(j=1;j<b[i]-4;j++)
		{
			if(a[i][j]>mid)
			{
				mid=a[i][j];
				k=j;
			}
		}
		for(j=0;j<=k;j++)
		{
			printf("%c",a[i][j]);
		}
		for(j=b[i]-3;j<b[i];j++)
		{
			printf("%c",a[i][j]);
		}
		for(j=k+1;j<b[i]-4;j++)
		{
			printf("%c",a[i][j]);
		}
		printf("\n");
	}
}