void main(){
	char a[500],b[10];
	int n,max=0;
	scanf("%d",&n);
	gets(b);
	gets(a);
	int i,j,k,l,x;
	l=strlen(a);
	int c[500];
	c[0]=1;
	for(i=1;i<=l-n;i++)
	{
		for(j=0;j<i;j++)
		{
			for(k=0;k<n;k++)
			{
				if(a[i+k]!=a[j+k])
				{
					break;
				}
			}
			if(k==n) 
				{
					c[j]++;
					c[i]=0;
					break;
				}
		}
		if(j==i) c[i]=1;
	}
	for(i=0;i<=l-n;i++)
	{
		if(max<c[i]) 
		{
			max=c[i];
		}
	}
	if(max>1)
	{
	printf("%d\n",max);
	for(i=0;i<=l-n;i++)
	{
		if(c[i]==max)
		{
			for(j=i;j<i+n;j++)
			{
				printf("%c",a[j]);
			}
			printf("\n");
		}
	}
	}
	else printf("NO");
	scanf("\n");
}