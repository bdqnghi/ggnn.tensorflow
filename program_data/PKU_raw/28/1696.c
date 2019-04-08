void main()
{
	int n=0,i=0,j=0,k=0;
	int a[300]={0};
	char b[10000];
	gets(b);
	for(i=0;b[i]!='\0';i++)
	{
		if(b[i]!=' ')
			k++;
		if(b[i]==' '&&k!=0)
		{
			a[j]=k;
			j++;
			k=0;
		}		
	}
	for(i--;b[i]!=' '&&i>=0;i--)
		a[j]++;
	for(i=0;i<j;i++)
		printf("%d,",a[i]);
	printf("%d\n",a[j]);
}
