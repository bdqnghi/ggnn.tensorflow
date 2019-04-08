int main(){
	int a[100],b[100],c[100],d[100],e[100],f[100],s=0,i=0;
    scanf("%d%d%d%d%d%d",&(a[0]),&(b[0]),&(c[0]),&(d[0]),&(e[0]),&(f[0]));
	while(a[i]!=0||a[i]!=0||c[i]!=0||d[i]!=0){
		
		i++;
		scanf("%d%d%d%d%d%d",&(a[i]),&(b[i]),&(c[i]),&(d[i]),&(e[i]),&(f[i]));
		
	}
	i=0;
	while(a[i]!=0||a[i]!=0||c[i]!=0||d[i]!=0){
        s+=f[i]-c[i]+(e[i]-b[i])*60+(d[i]-a[i])*3600+12*3600;
	    printf("%d\n",s);
		s=0;
		i++;
	}
	return 0;
}