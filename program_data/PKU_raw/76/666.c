int main(){
	int i,n,k;
	scanf("%d",&n);
	int sz[20001];
	int ddz[500000];
	int ddy[500000];
	for(i=0;i<20001;i++){
		sz[i]=1;
	}

	for(i=0;i<n;i++){
		scanf("%d %d",&ddz[i],&ddy[i]);
	}
	for(i=0;i<n;i++){
		for(k=2*ddz[i];k<2*ddy[i]+1;k++){
			sz[k]=0;
		}
	}
    int a;
	for(i=0;i<n;i++){
		for(k=0;k<n-1;k++){
			if(ddz[k]>ddz[k+1]){
				a=ddz[k+1];
				ddz[k+1]=ddz[k];
				ddz[k]=a;
			}
		}
	}
	for(i=0;i<n;i++){
		for(k=0;k<n-1;k++){
			if(ddy[k]>ddy[k+1]){
				a=ddy[k+1];
				ddy[k+1]=ddy[k];
				ddy[k]=a;
			}
		}
	}
	a=0;
	for(i=2*ddz[0];i<=2*ddy[n-1];i++){
		if(sz[i]!=0){
			a++;
		}
	}
	
	if(a>0){
		printf("no");
	}else{
		printf("%d %d",ddz[0],ddy[n-1]);
	}
	return 0;
}



