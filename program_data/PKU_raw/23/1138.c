int main()
{
	char str[100];
	gets(str);
	char a[100][100];
	int i,j=1,k=0;
	for(i=0;i<strlen(str);i++)
	{
		a[j][k]=str[i];
		k=k+1;
		if((str[i+1]==' '&&str[i]!=' ')||(str[i+1]!=' '&&str[i]==' '))
		{
			a[j][k]='\0';
			j=j+1;
			k=0;
		}
	}
	for(i=j;i>=1;i--)
	{
		printf("%s",a[i]);
	}
	return 0;
}