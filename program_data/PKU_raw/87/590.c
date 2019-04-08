int main()
{
	int a[100],b[100],c[100],d[100],e[100],f[100],n,h[100],s[100],m[100],z[100],i,x=0;
	for(i=0;i<100;i++){
		scanf("%d %d %d %d %d %d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
		x++;
		if(a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&e[i]==0&&f[i]==0) break;
	}
	for(i=0;i<x-1;i++){
		d[i]=12+d[i];
	h[i]=d[i]-(a[i]+1);
	m[i]=60-(b[i]+1)+e[i];
	s[i]=60-c[i]+f[i];
	z[i]=3600*h[i]+60*m[i]+s[i];
	printf("%d\n",z[i]);}
	return 0;
}