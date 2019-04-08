void main()
{
	int n,i,j;
	char a[100],b[100];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%s%s",a,b);
		for(j=strlen(a)-1;j>=strlen(a)-strlen(b);j--)
			if(a[j]>=b[j-strlen(a)+strlen(b)])
				a[j]=a[j]-b[j-strlen(a)+strlen(b)]+48;
			else
			{
				a[j]=a[j]-b[j-strlen(a)+strlen(b)]+58;
				a[j-1]--;
			}
			j=0;
			while(a[j]=='0')
				j++;
			for(;j<=strlen(a)-1;j++)
				printf("%c",a[j]);
			printf("\n");
	}
}