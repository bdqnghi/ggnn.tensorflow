int main(){
	int a[100],b[100],c[100],d[100],e[100],f[100],i=0;
	int s=0;
	scanf("%d%d%d%d%d%d",&a[0],&b[0],&c[0],&d[0],&e[0],&f[0]);
	while(a[i]){
		s+=(d[i]-a[i]+12)*3600+(e[i]-b[i])*60+f[i]-c[i];
		printf("%d\n",s);
		s=0;
		i++;
		scanf("%d%d%d%d%d%d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
	}
	return 0;
}

