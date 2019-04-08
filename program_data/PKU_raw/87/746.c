int main(){
	int a[10000],b[10000],c[10000],d[10000],e[10000],f[10000],g[10000],i;
	for(i=0;i<10000;i++){
	scanf("%d %d %d %d %d %d",&(a[i]),&(b[i]),&(c[i]),&(d[i]),&(e[i]),&(f[i]));
	if(a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&e[i]==0&&f[i]==0){
		break;
	}else{
	    g[i]=(d[i]+12)*3600+e[i]*60+f[i]-a[i]*3600-b[i]*60-c[i];
	    printf("%d\n",g[i]);
	}}
	return 0;
}