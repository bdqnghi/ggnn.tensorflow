int main(){
	int a[1000],b[1000],c[1000],d[1000],e[1000],f[1000],r[1000],k=0,i;
	for(i=0;i<1000;i++){
		k+=1;
	scanf("%d %d %d %d %d %d",&a[i],&b[i],&c[i],&d[i],&e[i],&f[i]);
	if(a[i]==0&&b[i]==0&&c[i]==0&&d[i]==0&&e[i]==0&&f[i]==0){
		break;
	}
	}
	for(i=0;i<k-1;i++){
		r[i]=3600*(11-a[i]+d[i])+60*(59-b[i]+e[i])+60-c[i]+f[i];
		printf("%d\n",r[i]);
	}
	return 0;
}
