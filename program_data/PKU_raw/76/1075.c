int main(){
	int n,a[5001],b[5001],num[10001]={0};
	scanf("%d",&n);
	for(int x=0;x<n;x++){
		scanf("%d %d",&a[x],&b[x]);
		for(int y=a[x];y<=b[x];y++){
			num[y]=1;
		}
	}
	int e;
	for(int k1=1;k1<=n;k1++){
		for(int i1=0;i1<n-k1;i1++){
			if(a[i1]>a[i1+1]){
				e=a[i1+1];
				a[i1+1]=a[i1];
				a[i1]=e;
			}
		}
	}
    for(int k2=1;k2<=n;k2++){
		for(int i2=0;i2<n-k2;i2++){
			if(b[i2]>b[i2+1]){
				e=b[i2+1];
				b[i2+1]=b[i2];
				b[i2]=e;
			}
		}
	}
	for(int m=0;m<n-1;m++){
		if(b[m]==(a[m+1]-1)){
			printf("no\n");
			return 0;
		}
	}
	for(int z=a[0];z<=b[n-1];z++){
		if(num[z]==0){
			printf("no\n");
			break;
		}else {
            if(z==b[0]){
			  printf("%d %d",a[0],b[n-1]);
			}
		}

	}



	return 0;
}