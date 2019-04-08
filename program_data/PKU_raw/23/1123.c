void main()
{
	char a[101];
	char b[50][100];
	int i,j=0,k=0,n;
	gets(a);
	for(i=0;i<101&&a[i]!='\0';i++)
		if(a[i]!=' ')
		{
			b[j][k]=a[i];
			k++;
		}
		else
		{
			b[j][k]='\0';
			j++;
			k=0;
		}
		b[j][k]='\0';
	n=j;
	for(i=n;i>0;i--)
		printf("%s ",b[i]);
	printf("%s\n",b[0]);
}     