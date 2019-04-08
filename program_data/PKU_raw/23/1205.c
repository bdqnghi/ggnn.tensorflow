void main()
{
	char a[100]={0},b[100]={0},c[100][100]={0};
	int i=0,j=0,k=0,l=0;
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		for(j=0;a[i]!='\0'&&a[i]!=' ';i++)
		{
			c[k][j]=a[i];
			j++;
		}
		if(k!=0)
			c[k][j]=' ';
		k++;
	}
	for(i=k-1;i>=0;i--)
		strcat(b,c[i]);
	printf("%s\n",b);
}
