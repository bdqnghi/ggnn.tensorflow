// tiaoshi.cpp : Defines the entry point for the console application.
//



int main()
{
	int n,i,j;
	char a[100001];
	scanf("%d",&n);
	for(i=1;i<=n;++i)
	{
		scanf("%s",&a);
		int l=strlen(a)-1;
		int b[123],c[123],k;
		for(j=0;j<=122;++j) 
		{
			b[j]=0;
			c[j]=0;
		}
		for(j=0;j<=l;++j)
			for(k=97;k<=122;++k)
				if(a[j]==k) b[k]++;
		int flag=0;
		k=0;
		for(j=97;j<=122;++j)
			if(b[j]==1)
			{
				flag=1;
				c[k]=j;
				k++;
			}
		if(flag==0) printf("no\n");
		else
		{
		int p=0;
		for(j=0;j<=l;++j)
		{
			for(p=0;p<=k-1;++p)
			{
				if(a[j]==c[p])
				{
					printf("%c\n",a[j]);
					break;
				}
			}
			if(a[j]==c[p]) break;
		}
		}
	}
	return 0;
}

