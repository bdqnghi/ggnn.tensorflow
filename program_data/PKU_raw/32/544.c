void main()
{
	char a[101],b[101];
	int c[100],d[100];
	int i,l1,l2,n,j;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%s%s",a,b);
		l1=strlen(a);
		l2=strlen(b);
		//printf("%d,%d\n",l1,l2);
		for(i=0;i<l1;i++)
		c[i]=a[l1-i-1]-'0';
		for(i=0;i<l2;i++)
		d[i]=b[l2-i-1]-'0';
		
		for(i=0;i<l2;i++)
		{
			c[i]-=d[i];
			if(c[i]<0)
			{
				c[i]+=10;
				c[i+1]--;	
			}	
		}
		for(i=l1-1;i>=0;i--)
		if(c[i]!=0) break;
		for(j=i;j>=0;j--)
		printf("%d",c[j]);
		printf("\n");
	}
		
}