int main(){
	int a[999],b[999],c[999],d[999],e[999],f[999],z[999],i;
	for(i=0;;i++){
		scanf("%d %d %d %d %d %d",&(a[i]),&(b[i]),&(c[i]),&(d[i]),&(e[i]),&(f[i]));
		if(a[i]==0){
			break;
		}
	}
	for(i=0;;i++){
		z[i]=3600*d[i]+60*e[i]+f[i]+3600*(12-a[i])-60*b[i]-c[i];
		if(a[i]==0){
			break;
		}
		printf("%d\n",z[i]);
	}
	return 0;
}