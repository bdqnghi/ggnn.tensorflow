int main(){
	int m=0,a[999],b[999],c[999],d[999],e[999],f[999],i,g[999];
	for(i=1;1;i++){
		scanf("%d %d %d %d %d %d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
		if(a[i]==0){
			break;
		}
		g[i]=(d[i]+12)*3600+e[i]*60+f[i]-a[i]*3600-b[i]*60-c[i];
		m++;
	}
	for(i=1;i<=m;i++){
		printf("%d\n",g[i]);
	}
	return 0;
}