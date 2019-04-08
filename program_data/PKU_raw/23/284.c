int main()
{
	int i,j,a[20]={0};
	char c[20][40],d;
	for(i=0;;i++)
	{
		for(j=0;;j++)
		{
			d=getchar();
			if(d!=' '&&d!='\n')c[i][j]=d;
			else break;
			a[i]++;
		}
		if(d=='\n')break;
	}
	for(;i>=1;i--)
	{
		for(j=0;j<=a[i]-1;j++)
		{
			printf("%c",c[i][j]);
		}
        printf(" ");
	}
    for(j=0;j<=a[i]-1;j++)
	{
		printf("%c",c[0][j]);
	}
    return 0;
}