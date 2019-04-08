int main()
{
	int i,j,k,t,n,a[100000];
	char str[100000];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		//gets(str);
		scanf("%s",str);
		n=strlen(str);
		for(j=0;j<n;j++)a[j]=0;
		for(j=0;j<n;j++)
		for(k=0;k<n;k++)
			if(str[j]==str[k])a[j]++;
		for(j=0;j<n;j++)if(a[j]==1)break;
		if(j==n)printf("no\n");
		else printf("%c\n",str[j]);
	}
	return 0;
}


