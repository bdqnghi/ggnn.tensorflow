int main(){
	int a[100],b[100],c[100],d[100],e[100],f[100],n[100],m[100],k[100];
	for(int i=0;i<=100;i++){
	scanf("%d %d %d %d %d %d\n",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
	if(a[i]==0&&b[i]==0&&c[i]==0){break;
	}
	m[i]=a[i]*3600+b[i]*60+c[i];
	n[i]=d[i]*3600+e[i]*60+f[i]+12*3600;
	k[i]=n[i]-m[i];
	printf("%d\n",k[i]);
	}
	return 0;
}