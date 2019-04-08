int main(){
	int a[100],b[100],c[100],d[100],e[100],f[100],fz[100],s[100],m[100],i,zsj[100];
	for(i=0;;i++){
		scanf("%d%d%d%d%d%d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
		if(a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&e[i]==0&&f[i]==0){
			break;
		}
	}
	for(i=0;;i++){
		if(a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&e[i]==0&&f[i]==0){
			break;
		}
		if(f[i]<c[i]){
			f[i]=f[i]+60;
			e[i]--;
		}
		m[i]=f[i]-c[i];
		if(e[i]<b[i]){
			e[i]=e[i]+60;
			d[i]--;
		}
		fz[i]=e[i]-b[i];
		s[i]=d[i]+12-a[i];
		zsj[i]=3600*s[i]+60*fz[i]+m[i];
		printf("%d\n",zsj[i]);
	}
	return 0;
}