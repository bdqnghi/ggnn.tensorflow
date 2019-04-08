int main(){
    int a[100],b[100],c[100],d[100],e[100],f[100];
	int i,n,s;
	for(i=0;i<100;i++){
		scanf("%d%d%d%d%d%d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
		if(a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&e[i]==0&&f[i]==0){
			n=i;
			break;
		}
	}
	for(i=0;i<n;i++){
		s=3600*(12-a[i]-1+d[i])+60*(60-b[i]-1+e[i])+(60-c[i]+f[i]);
		printf("%d\n",s);
	}
	return 0;
}