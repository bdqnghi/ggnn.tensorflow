void main ()
{
	int n,i,j,len1,len2,p,q, a[100],b[100],c[100];
	char s1[100],s2[100];
	scanf("%d",&n);
		for (i=0;i<n;i++)
	{
        for(j=0;j<100;j++)
		{
			a[j]=0;
			b[j]=0;
			c[j]=0;
		}
		scanf("%s %s",s1,s2);
		len1=strlen(s1);
		len2=strlen(s2);
		for (p=0;p<len1;p++)
			a[len1-p-1]=s1[p]-'0';
		for (p=0;p<len2;p++)
			b[len2-p-1]=s2[p]-'0';
		for (p=0;p<len1;p++)
		{
			c[p]=a[p]-b[p];
			if (c[p]<0)
			{
				a[p+1]=a[p+1]-1;
				c[p]=c[p]+10;
			}
		}
		while (c[len1]==0&&len1>1)
			len1=len1-1;
		for (q=len1;q>=0;q--)
			printf("%d",c[q]);
		
		printf("\n");
                   }
}