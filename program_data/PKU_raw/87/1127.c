int main()
{
	int a[100],b[100],c[100],d[100],e[100],f[100],s,m,n,k,i=0;
	while(1){
	scanf("%d %d %d %d %d %d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
	if(a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&e[i]==0&&f[i]==0)
	{
		break;
	}
	d[i]=d[i]+12;
	m=d[i]-a[i];
	if(e[i]>=b[i])
	{
		n=e[i]-b[i];
	}
	else
	{
		m=m-1;
		n=60-(b[i]-e[i]);
	}
	if(f[i]>=c[i])
	{
		k=f[i]-c[i];
	}
	else
	{
		n=n-1;
		k=60-(c[i]-f[i]);
	}
	s=m*60*60+n*60+k;
	printf("%d\n",s);
	i++;
	}
	return 0;
}
	
