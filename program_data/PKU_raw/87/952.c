int main(){
	int m,i,a[20],b[64],c[66],d[66],e[66],f[66],s[66];
    for(i=1;;i++){
	    scanf("%d%d%d%d%d%d", &a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
		if(a[i]==0&&b[i]==0&&c[i]==0){
			break;
		}
		d[i]=12+d[i];
		if(f[i]<c[i]){
			f[i]=f[i]+60;
			e[i]=e[i]-1;
		}
		if(e[i]<b[i]){
			e[i]=e[i]+60;
			d[i]=d[i]-1;
		}
		s[i]=(f[i]-c[i])+(e[i]-b[i])*60+(d[i]-a[i])*3600;
		m=i;
	}
	for(i=1;i<=m;i++){
		printf("%d\n", s[i]);
	}
    return 0;
}
