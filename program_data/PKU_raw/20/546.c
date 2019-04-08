void main()
{
	char a[11],b[4],c[16];
	int i,n,max,maxi;
	while (scanf("%s%s",a,b)!=EOF)
	{
		n=0;
		max=0;
		for(i=0;a[i]!='\0';i++)
			n++;
		for(i=0;i<=n-1;i++)
		{
			if(a[i]>max)
			{
				max=a[i];
				maxi=i;
			}
		}
		for(i=0;i<=maxi;i++)
			c[i]=a[i];
		for(i=maxi+1;i<=maxi+3;i++)
			c[i]=b[i-maxi-1];
		for(i=maxi+4;i<=n+2;i++)
			c[i]=a[i-3];
		c[n+3]='\0';
		printf("%s\n",c);
	}
}