void main()
{
	int i=0,j=0,k;
	char a[100][100],b[101];
	gets(b);
	for(;b[j]!=0;)
		if(b[j]!=' ')
		{
			for(k=0;b[j]!=' '&&b[j]!=0;j++,k++)
				a[i][k]=b[j];
			a[i][k]=0;
			i++;
		}
		else
			j++;
	printf("%s",a[i-1]);
	for(j=i-2;j>=0;j--)
		printf(" %s",a[j]);
}