int main()
{
	int a[100],b[100],c[100],d[100],e[100],f[100];
	int i,z;
	for(i=0;i<100;i++)
	{
		scanf("%d%d%d%d%d%d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
		if(a[i]==0)
			break;
		z=(d[i]+12-a[i])*3600+(e[i]-b[i])*60+f[i]-c[i];
		printf("%d\n",z);
	}
	return 0;
}
