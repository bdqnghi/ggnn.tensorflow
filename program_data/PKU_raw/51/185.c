int main()
{
	int n,i,l,j,num[504]={0},max=0;
	char a[504]={0},b[600][10]={0};
	scanf("%d\n",&n);
	gets(a);
	l=strlen(a);
	for(i=0;i<=l-n;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i][j]=a[i+j];
		}
	}
	for(i=0;i<=l-n;i++)
		for(j=0;j<i;j++)
			if(strcmp(b[j],b[i])==0) num[j]++;
	for(i=0;i<=l-n;i++)
		if(max<num[i]) max=num[i];
	if(max==0) printf("NO\n");
	else
	{
		printf("%d\n",max+1);
		for(i=0;i<=l-n;i++)
			if(num[i]==max) printf("%s\n",b[i]);
	}
	return 0;
}
