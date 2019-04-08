int main()
{
	char a[10000]={0};
	gets(a);
	int s[400]={0};
	int i;
	int j=0;
	for(i=0;i<10000;i++)
	{
		
		if(a[i]!=' '&&a[i]!='\0')
		{
			s[j]++;
		}
		else if(a[i]==' '&&a[i+1]!='\0'&&a[i]!='\0'&&a[i+1]!=' ')
		{
			j++;
		}
	}
	for(i=0;i<=j-1;i++)
	{
		printf("%d,",s[i]);
	}
	printf("%d\n",s[j]);
	return 0;
}