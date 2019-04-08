int main()
{
	int a[10000],b[10000],c[10000],d[10000],e[10000],f[10000],n[10000],i=1;
	while(1)
	{
	scanf("%d%d%d%d%d%d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
	if(a[i]==0)
		break;
	d[i]=d[i]+12;
	n[i]=(d[i]-a[i])*60*60+(e[i]-b[i])*60+f[i]-c[i];
	printf("%d\n",n[i]);
	i++;
	}
	return 0;
}