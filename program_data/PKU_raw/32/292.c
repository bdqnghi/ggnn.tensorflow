void main()
{
	char a[101],b[101];
	int c[101],e[101],*d,n,i,j,l1,l2;
	scanf("%d",&n);
	for (j=1;j<=n;j++)
	{
	   scanf("%s%s",a,b);
	   l1=strlen(a);
       l2=strlen(b);
	  
	   d=(int*)malloc((l1+l2)*sizeof(int));
	   for (i=l1-1;i>=0;i--)
	   {
		   c[i]=a[i]-48;
	   }
	    for (i=l1-1;i>=0;i--)
	   {
		   d[i]=b[i]-48;
		   if (i>=l2) d[i]=0;
	   }
		for (i=0;i<l2;i++)
		{
			d[i+l1]=d[i];
		}
		for (i=l1-1;i>=0;i--)
		{
			e[i]=c[i]-d[i+l2];
			if (e[i]<0) 
			{
				e[i]=e[i]+10;
				c[i-1]=c[i-1]-1;
			}
		}
		if (e[0]!=0) printf("%d",e[0]);
		for (i=1;i<=l1-2;i++)
		{
			printf("%d",e[i]);
		}
		printf("%d\n",e[l1-1]);

		
		

	}
}







	
	

