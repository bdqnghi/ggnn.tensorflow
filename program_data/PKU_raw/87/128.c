int main(){
	int a[20],b[20],c[20],d[20],e[20],f[20],i,s,n;
	for(i=0;i<20;i++){
		scanf("%d%d%d%d%d%d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
		if(a[i]==0 && b[i]==0 && c[i]==0 && d[i]==0 && e[i]==0 && f[i]==0){
			n=i;
			break;
		}
	} 
	for(i=0;i<n;i++){
		s=3600*(12-a[i]+d[i])-60*b[i]-c[i]+60*e[i]+f[i];
		printf("%d\n",s);
	}
	return 0;
}