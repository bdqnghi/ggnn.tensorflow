void main()
{
	char a[101],b[101],c[101];
	int n,i,j,k,p=0,q;
	int len1,len2;
	scanf("%d",&n);
	for(i=0;i<=100;i++)
	{
		c[i]=0;
	}
	for(i=1;i<=n;i++)
	{
		scanf("%s",a);
		scanf("%s",b);
		len1=strlen(a);
		len2=strlen(b);
		for(j=len2-1;j>=0;j--)
		{
			b[j+len1-len2]=b[j];
		}
		for(j=0;j<len1-len2;j++)
		{
			b[j]='0';
		}
		for(k=len1-1;k>=0;k--)
		{
			if(a[k]>=b[k])
				c[k]=a[k]-b[k];
			else if(a[k]<b[k])
			{
				c[k]=a[k]+10-b[k];
				a[k-1]--;
			}
		}
		while(c[p]==0)
		{
			p++;
		}
		for(q=p;q<len1;q++)
		{
			printf("%d",c[q]);
		}
		printf("\n");
	}
}