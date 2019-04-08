int main()
{
	int a[100],b[100],c[100],e[100],d[100],f[100],i,j=0,s;
	scanf("%d %d %d %d %d %d",&a[0],&b[0],&c[0],&d[0],&e[0],&f[0]);
	for(i=0;d[i]!=0;i++)
	{
		scanf("%d %d %d %d %d %d",&a[i+1],&b[i+1],&c[i+1],&d[i+1],&e[i+1],&f[i+1]);
		j++;
	}
	for(i=0;i<j;i++)
	{
		s=(d[i]+12-a[i])*3600+(e[i]-b[i])*60+f[i]-c[i];
	    printf("%d\n",s);
	}
	return 0;
}
