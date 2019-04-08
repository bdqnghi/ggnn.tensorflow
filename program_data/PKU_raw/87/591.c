int main()
{
	int a[100],b[100],c[100],d[100],e[100],f[100],n[100],p[100],q[100];
     int i;
	for(i=0;i<100;i++){
		scanf("%d %d %d %d %d %d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
		if(a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&e[i]==0&&f[i]==0){
			return 0;
		}else{
        p[i]=a[i]*60*60+b[i]*60+c[i];
	    q[i]=d[i]*60*60+e[i]*60+f[i]+12*60*60;
	    n[i]=q[i]-p[i];
		printf("%d\n",n[i]);
		}
	}
	return 0;
}