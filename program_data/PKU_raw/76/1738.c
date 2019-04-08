int main(){
	int n,i,j,zx,zd,t,k=1;
	int a[asd],b[asd],z[zxc];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
	}
	for(i=0,zx=a[0];i<n;i++){
		if(a[i]<zx){
			zx=a[i];
		}
	}
	for(i=0,zd=b[0];i<n;i++){
		if(zd<b[i]){
			zd=b[i];
		}
	}
	for(i=0;i<=zd;i++){
		z[i]=1;
	}
	for(i=0;i<n;i++){
		for(j=0;j<=zd;j++){
			if(j>=a[i]&&j<b[i]){
				z[j]=0;
			}
		}
	}
	z[zd]=0;

	for(i=zx;i<=zd;i++){
		if(z[i]==1){
			k=k*0;
		}else{
			k=k*1;
	}
	}
	if(k==0){
		printf("no");
	}else{
		printf("%d %d",zx,zd);
	}
	return 0;
}

