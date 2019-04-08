int main(){
	int a[100],b[100],c[100],d[100],e[100],f[100],total,time1,time2,i=0;
	while(1){
		scanf("%d%d%d%d%d%d",&(a[i]),&(b[i]),&(c[i]),&(d[i]),&(e[i]),&(f[i]));
		if(a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&e[i]==0&&f[i]==0){
			return 0;
		}
		time1=a[i]*3600+b[i]*60+c[i];
		time2=(d[i]+12)*3600+e[i]*60+f[i];
		total=time2-time1;
		printf("%d\n",total);
		i++;
	}
}