int main()
{
	char a[100][100];
	int i,j,k;
	for(i=0;i<100;i++)
	{
		for(j=0;j<100;j++)
		{
			scanf("%c",&a[i][j]);
			if((a[i][j]==' ')||(a[i][j]=='\n'))
				break;
		}
		if(a[i][j]==' ')
			a[i][j]='\0';
		if(a[i][j]=='\n')
		{
			a[i][j]='\0';
		    break;
		}
	}
	k=i;
	for(i=k;i>0;i--)
	{
		for(j=0;j<=(strlen(a[i])-1);j++)
		{
			printf("%c",a[i][j]);
		}
		printf(" ");
	}
	for(j=0;j<=(strlen(a[i])-1);j++)
	printf("%c",a[0][j]);
	return 0;
}