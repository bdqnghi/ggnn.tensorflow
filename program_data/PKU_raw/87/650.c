int main()
{
    int i,j,a[100],b[100],c[100],d[100],e[100],f[100],sum[100],m,n;
	for(i=0;i<=100;i++){
		scanf("%d %d %d %d %d %d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
		if(a[i]==0){
			break;
		}
	}
	j=i;
    for(i=0;i<j;i++){
		m=a[i]*3600+b[i]*60+c[i];
		n=(d[i]+12)*3600+e[i]*60+f[i];
		sum[i]=n-m;
	}
	for(i=0;i<j;i++){
		printf("%d\n",sum[i]);
	}
	return 0;
}