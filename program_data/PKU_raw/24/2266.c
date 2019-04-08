void main()
{
	char a[10000];
	int k[200]={0},l,i,j=1,m[200]={0},max=1,min=1;
	gets(a);
	for(i=0;i<strlen(a);i++)
	{
		if(a[i]!=' '&&a[i]!=',')
		{
			k[j]++;
		}
		else
		{
			if(a[i]==' ')
				{
					m[j]=i;
					j++;}	
		}
	}
	m[j]=strlen(a);
	for(i=1;i<=j;i++)
	{
		if(k[max]<k[i])max=i;
	}
	for(l=m[max]-k[max];l<m[max]&&a[l]!=',';l++)
		printf("%c",a[l]);
	putchar('\n');
	for(i=1;i<=j;i++)
	{
		if(k[min]>k[i])min=i;
	}
	for(l=m[min]-k[min];l<m[min]&&a[l]!=',';l++)
		printf("%c",a[l]);
}