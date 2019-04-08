void main()
{
	char s[100],a[100][30];
	int i,j,k;
	gets(s);
	for(i=0,j=0,k=0;i<100&&s[i]!=0;i++)
	{
		if(s[i]==' ')
		{
			a[j][k]=0;
			j++;
			k=0;
		}
		else
		{
			a[j][k]=s[i];
			k++;
		}
		a[j][k]=0;
	}
	for(i=j;i>0;i--)
	{
		for(k=0;k<30&&a[i][k]!=0;k++)
		{
			printf("%c",a[i][k]);
		}
		printf(" ");
	}
	for(k=0;k<30&&a[0][k]!=0;k++)
	{
		printf("%c",a[0][k]);
	}
}
