void main()
{
	int n,i,j,j1,l,l1;
	char str[100][100],str1[100][100];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s%s",str[i],str1[i]);
     	getchar();
	}
	for(i=1;i<=n;i++)
	{
		l=strlen(str[i]);
		l1=strlen(str1[i]);
		j=0;
		while(j<l1)
		{
			str[i][l-1-j]='0'+(int)str[i][l-1-j]-(int)str1[i][l1-1-j];
			j1=j;
			while(str[i][l-1-j1]<'0')
			{
				str[i][l-1-j1]=10+str[i][l-1-j1];
				j1++;
				str[i][l-1-j1]='0'+(int)str[i][l-1-j1]-(int)'1';
			}
			j++;
		}
		j1=0;
		while(str[i][j1]=='0') j1++;
		for(j=j1;j<l;j++)putchar(str[i][j]);
		printf("\n");
	}
}
