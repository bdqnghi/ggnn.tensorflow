void main()
{
	char a[10000];
	int b[300],m=0,i;
	gets(a);
	int n=strlen(a);
	for(i=0;i<n;i++)
	{
		int k=0;
		while(a[i]!=' '&&a[i]!='\0')
		{
			k++;
			i++;
		}
		
		if(k!=0){m++;
		b[m]=k;}
	}
	for(i=1;i<m;i++)
		printf("%d,",b[i]);
	printf("%d\n",b[m]);
}
