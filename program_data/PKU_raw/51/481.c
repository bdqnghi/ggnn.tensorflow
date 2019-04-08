int main()
{
	char a[600],c[600][7];
	int max=0,temp,n,m,i,j,num[600]={0},shu=0;
	scanf("%d\n",&n);
	gets(a);
	m=strlen(a);
	for(i=0;i<=m-n;i++)
		for(j=0;j<n;j++)
			c[i][j]=a[i+j];
	for(i=0;i<=m-n;i++)
		c[i][n]=0;
	for(i=0;i<=m-n;i++)
		for(j=i;j<m;j++)
			if(strcmp(c[i],c[j])==0)
				num[i]++;
	for(i=0;i<=m-n;i++)
		if(num[i]>max)
			max=num[i];
	if(max==1)
		printf("NO");
	else
	{
		for(i=0;i<=m-n;i++)
			if(num[i]==max)
				shu++;
	}
	if(max!=1)
	{
		printf("%d\n",max);
		for(i=0;i<=m-n;i++)
			if(num[i]==max)
			{
					puts(c[i]);
					putchar('\n');
			}
	}
}
