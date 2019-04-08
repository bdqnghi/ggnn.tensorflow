void main()
{
	int n,i,max,m,j=0,k;
	char a[111],b[4],*p,c[11111][111];
	while(scanf("%s %s",a,b)!=EOF)
	{
	n=strlen(a);
	p=a;
	max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)  
		{
			max=a[i];
			m=i;
		}
	}
	for(i=n+3;i<(n+n-m+2);i++)
		a[i]=a[i+m-n-2];
	for(p=(a+m+1);p<(a+m+4);p++)
		*p=b[p-a-m-1];
	for(p=(a+m+4);p<(a+n+3);p++)
		*p=a[p-a-m+n-1];
	for(i=0;i<n+3;i++)
		c[j][i]=a[i];
        c[j][n+3]=0;
	j=j+1;
	k=j;
	}
	for(j=0;j<k;j++)
		printf("%s\n",c[j]);
}