void main()
{
	char a[255],b[255];
	int x[255],y[255],sum[255],i,j,m,n,p;
	gets(a);
    gets(b);
	memset(x,0,sizeof(x));
	memset(y,0,sizeof(y));
    memset(sum,0,sizeof(sum));
	m=strlen(a);
	for(i=m-1,j=0;i>=0;i--,j++)
		x[j]=a[i]-'0';
	n=strlen(b);
	for(i=n-1,j=0;i>=0;i--,j++)
		y[j]=b[i]-'0';
	p=m>n?m:n;
	for(i=0;i<p;i++)
	{
		sum[i]+=x[i]+y[i];
		if(sum[i]>=10) {
			sum[i]-=10;
			sum[i+1]++;
		}
	}
	
	while(sum[p]==0)
		p--;
	if(p<0) printf("0");
	else {
		for(i=p;i>=0;i--)
		printf("%d",sum[i]);
	}

}
