int main(){
	int a[100],b[100],c[100],d[100],e[100],f[100];
	int i;
	for(i=0;i<100;i++){
		if(scanf("0 0 0 0 0 0")){
			break;
		}else{
			scanf("%d %d %d %d %d %d", &a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
		}
	}
	int t;
	t=i-3;
	int second[100];
	for(i=0;i<=t;i++){
		second[i]=(60-c[i])+(60-(b[i]+1))*60+f[i]+e[i]*60+(d[i]+12-a[i]-1)*3600;
		printf("%d\n", second[i]);
	}
	return 0;
}
