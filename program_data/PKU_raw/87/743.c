int main(){
	int a[10000],b[10000],c[10000],d[10000],e[10000],f[10000];
	int s,h,m,z,j=0;
	int n=10000;
	for(int i=0;i<n;i++){
	scanf("%d %d %d %d %d %d", &a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
	j++;
	if(a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&e[i]==0&&f[i]==0)break;
	}
    for(int k=0;k<(j-1);k++){
	h=((d[k]-a[k])+12)*3600;
	m=(e[k]-b[k])*60;
	s=f[k]-c[k];
	z=h+m+s;
	printf("%d\n",z);
	}
	return 0;
}