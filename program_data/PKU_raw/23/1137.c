int main()
{
	char str[100];
	gets(str);
	int i,j,k;
	char a[100][100];
	j=1;k=0;
	for(i=0;i<strlen(str);i++)
	{
		a[j][k]=str[i];
		k=k+1;
		if(str[i+1]==' ')
		{
			a[j][k]='\0';
			j=j+1;
			k=0;
                           i++;
		}
		if (str[i+1]=='\0') a[j][k]='\0';
	}
	for(i=j;i>=1;i--)
	{
		printf("%s",a[i]);
		if(i!=1) printf(" ");
	}
return 0;
}
