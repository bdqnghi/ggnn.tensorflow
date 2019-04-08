int main()
{
	int a[80],b[80],c[80],d[80],e[80],f[80];
	int i;
	int s=0;
	int t=0;
	int m;
	for(i=0;i<80;i++)
	{
	scanf("%d%d%d%d%d%d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
	if(a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&e[i]==0&&f[i]==0)
	break;
	else
	{
		s=3600*a[i]+60*b[i]+c[i];
		d[i]+=12;
		t=3600*d[i]+60*e[i]+f[i];
		m=t-s;
		printf("%d\n",m);
	}
	}

	return 0;
}