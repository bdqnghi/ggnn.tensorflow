
int main()
{
	char a[101];
	int n=0;
	int i=0,j;
	gets(a);
	while(a[i]!='\0')
	{
		n++;
		i++;
	}
	i=n-1;
	a[n]=' ';
	while(i>=0)
	{
		if(a[i]==' ')
		{
			for(j=i+1;a[j]!=' ';j++)
				printf("%c",a[j]);
			printf(" ");
		}
		if(i==0)
			for(j=0;a[j]!=' ';j++)
				printf("%c",a[j]);
		i--;
	}
	return 0;
}