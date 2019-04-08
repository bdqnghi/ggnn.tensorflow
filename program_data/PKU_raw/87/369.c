int main(){
	int i;
	int n=0;
	int a[12],b[60],c[60],d[12],e[60],f[60];
	int s[100];
	for(i=0;i<100;i++){
		scanf("%d %d %d %d %d %d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
		n +=1;
		if((a[i]==0)&&(b[i]==0)&&(c[i]==0)&&(d[i]==0)&&(e[i]==0)&&(f[i]==0)){
			break;
		}
	}
	for(i=0;i<n-1;i++){
		s[i]=(d[i]+12)*3600+e[i]*60+f[i]-a[i]*3600-b[i]*60-c[i];
	}
	for(i=0;i<n-1;i++){
		printf("%d\n", s[i]);
	}
	return 0;
}