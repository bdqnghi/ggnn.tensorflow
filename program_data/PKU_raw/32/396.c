int main()
{
	int n;
	scanf("%d",&n);
    int d[100];
	char c[100][100];
	for(int i=0;i<n;i++)
	{
		char a[100]={0};
		char b[100]={0};
		scanf("%s",a);
		scanf("%s",b);
		int m=strlen(a);
		d[i]=strlen(a);
		int o=strlen(b);
		for(int j=m-1;j>m-o-1;j--)
			c[i][j]=a[j]-b[j-m+o]+'0';
		if(m>n)
		{
			for(int t=m-o-1;t>=0;t--)
				c[i][t]=a[t];
		}
		for(int k=m-1;k>=0;k--)
		{
			if(c[i][k]<'0')
			{
				c[i][k]=c[i][k]+10;
				c[i][k-1]=c[i][k-1]-1;
			}	
		}
	}
		for(int h=0;h<n;h++)
		{
			for(int t=0;t<d[h];t++)
		     printf("%c",c[h][t]);
			printf("\n");
		}
}




		







		