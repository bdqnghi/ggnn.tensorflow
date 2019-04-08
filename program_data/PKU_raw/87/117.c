int main()
{
	int i,u=1,a[100],b[100],c[100],d[100],e[100],f[100],g[100];
    do{
       scanf("%d %d %d %d %d %d",&a[u],&b[u],&c[u],&d[u],&e[u],&f[u]);
	   g[u]=(d[u]+12-a[u])*3600+(e[u]-b[u])*60+f[u]-c[u];
	   u++;
	   
	}
	while(a[u-1]+b[u-1]+c[u-1]+d[u-1]+e[u-1]+f[u-1]!=0);
    for(i=1;i<=u-2;i++){
		printf("%d\n",g[i]);
	}
    
	return 0;
}