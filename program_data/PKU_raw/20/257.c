void main()
{
	char str[100][10]={'\0'}, substr[100][3]={'\0'},re[100][13]={'\0'};
	char *p;
	int n,i,j,k;
	for(n=0;scanf("%s",str[n])!=EOF;n++)scanf("%s",substr[n]);
	for(i=0,k=0;i<n;i++)
	{
		p=&str[i][0];
		k=0;
		for(j=1;*(p+j)!='\0';j++)
		{
			if(*(p+k)<*(p+j))k=j;
		}
		for(j=0;j<=k;j++,p++)re[i][j]=*p;
		for(;j<=k+3;j++)re[i][j]=substr[i][j-k-1];
		for(;*p!='\0';p++,j++)re[i][j]=*p;
	}
	for(i=0;i<n;i++)
	{
		p=&re[i][0];
		for(;*p!='\0';p++)printf("%c",*p);
		printf("\n");
	}
}