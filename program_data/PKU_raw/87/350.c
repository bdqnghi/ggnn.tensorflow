int main(){
	int a[100],b[100],c[100],d[100],e[100],f[100],x[100],y[100],i;
	int result[100];
	for(i=0;i<100;i++){
	scanf("%d%d%d%d%d%d\n",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
	if(a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&e[i]==0&&f[i]==0){
		break;}
	x[i]=a[i]*60*60+b[i]*60+c[i];
	y[i]=(d[i]+12)*60*60+e[i]*60+f[i];
	result[i]=y[i]-x[i];
	printf("%d\n",result[i]);
	}
	return 0;
}
