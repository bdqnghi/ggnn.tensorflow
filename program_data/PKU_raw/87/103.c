
int main(){
	int a[100],b[100],c[100],d[100],e[100],f[100];
	int i,j;
	for(i=0;i<100;i++){
		scanf("%d %d %d %d %d %d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
		if(a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&e[i]==0&&f[i]==0){
		j=i;
		break;}
	}     
	int k[100],m[100],n[100],result[100];
	for(i=0;i<j;i++){
		k[i]=d[i]+12;
		m[i]=a[i]*3600+b[i]*60+c[i];
		n[i]=k[i]*3600+e[i]*60+f[i];
		result[i]=n[i]-m[i];
		printf("%d\n",result[i]);
	}
	return 0;
}
