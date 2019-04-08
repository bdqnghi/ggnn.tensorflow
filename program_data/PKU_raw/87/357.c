int main()
{
	int a[1000],b[1000],c[1000],d[1000],e[1000],f[1000],s[1000];
	int i,k;
	for(i=0;i<1000;i++)
	{
		scanf("%d %d %d %d %d %d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
		if(a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&e[i]==0&&f[i]==0)
		{
			k=i;
			break;
		}
	}
	for(i=0;i<k;i++)
	{
		s[i]=(d[i]+12-a[i])*3600+(e[i]-b[i])*60+f[i]-c[i];
		printf("%d\n",s[i]);
	}
	return 0;
}