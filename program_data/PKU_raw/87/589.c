int main(){
	int a[100],b[100],c[100],d[100],e[100],f[100],n[100];
	int i;
	for(i=0;i<100;i++){
	scanf("%d %d %d %d %d %d\n",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
	if(a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&f[i]==0&&e[i]==0){
		break;
	}
	}
	for(i=0;i<100;i++){
		if(a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&f[i]==0&&e[i]==0){
		break;
		}
		n[i]=(60-c[i])+60*(60-b[i]-1)+3600*(12+d[i]-a[i]-1)+60*e[i]+f[i];
		printf("%d\n",n[i]);
	}
	return 0;
}