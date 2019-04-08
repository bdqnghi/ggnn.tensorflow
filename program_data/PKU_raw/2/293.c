int main()
{
	struct book
	{
		int m;
		char a[26];
	};
	int n,i,j,k,q=0;int b[26]={0},c[26];
	scanf("%d",&n);
	struct book * p;
	p=(struct book *)malloc(n*sizeof(struct book));
	for(i=0;i<n;i++)
		scanf("%d %s",&p[i].m,p[i].a);
	for(i=0;i<26;i++)
		for(j=0;j<n;j++)
			for(k=0;k<26;k++)
				if(p[j].a[k]=='A'+i)
					b[i]=b[i]+1;
	for(i=0;i<26;i++)
		c[i]=b[i];
	for(j=0;j<25;j++)
		for(i=0;i<25-j;i++)
			if(b[i]>b[i+1])
			{
				k=b[i];
				b[i]=b[i+1];
				b[i+1]=k;
			}
	for(i=0;i<26;i++)
		if(c[i]==b[25])
		{
			printf("%c\n%d\n",'A'+i,b[25]);
			for(j=0;j<n;j++)
				for(k=0;k<26;k++)
					if(p[j].a[k]=='A'+i)
						printf("%d\n",p[j].m);
		}
		free(p);

	
}
		