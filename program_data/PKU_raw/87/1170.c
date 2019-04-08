int main(){
	int a[100],b[100],c[100],d[100],e[100],f[100],k[100];
	int i,j;
	for(i=0;i<100;i++){
		scanf("%d%d%d%d%d%d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
		if(a[i]==0){
			j=i;
			break;
		}
	}
	for(i=0;i<j;i++){
		if(c[i]<=f[i]&&b[i]<e[i])
			k[i]=f[i]-c[i]+60*(e[i]-b[i])+3600*(d[i]+12-a[i]);
		else if(c[i]<=f[i]&&b[i]>=e[i])
			k[i]=f[i]-c[i]+60*(e[i]+60-b[i])+3600*(d[i]+11-a[i]);
		else if(c[i]>f[i]&&b[i]<e[i])
			k[i]=f[i]+60-c[i]+60*(e[i]-1-b[i])+3600*(d[i]+12-a[i]);
		else if(c[i]>f[i]&&b[i]>=e[i])
			k[i]=f[i]+60-c[i]+60*(e[i]+59-b[i])+3600*(d[i]+11-a[i]);
	}
	for(i=0;i<j;i++)
		printf("%d\n",k[i]);
	return 0;
}
