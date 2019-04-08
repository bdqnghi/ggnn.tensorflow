int main(){
	int zs[300],js[300];
	int i,n,m,j,p,x,y,k;
	scanf("%d %d",&n,&m);
	zs[0]=n;
	js[0]=m;
	i=1;
	while((n!=0)||(m!=0)){
		scanf("%d %d",&n,&m);
		zs[i]=n;
		js[i]=m;
		i++;
	}
	for(j=0;j<i-1;j++){
		int a[300],b[300];
		for(k=0;k<zs[j];k++){
			a[k]=k+1;
		}
		y=zs[j];
		for(k=0;k<zs[j]-1;k++){
			p=js[j]%y;
			for(x=0;x<y-1;x++){
				if(x<y-p){
					b[x]=a[p+x];
				}else{
					b[x]=a[x-y+p];
				}
			}
			for(x=0;x<y-1;x++){
				a[x]=b[x];
			}
			y--;
		}
		printf("%d\n",a[0]);
	}
	return 0;
}