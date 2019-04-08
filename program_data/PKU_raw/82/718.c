int main(){
	int n,a,b,i,j=0,k=0,l;
	int sz[100];
	scanf("%d",&n);
	for(i=1;i<100;i++){
		sz[i]=0;
	}
	for(i=1;i<=n+1;i++){
		if(i<=n){
			scanf("%d %d",&a,&b);
		}
		if(i==n+1){
			a=1;
			b=1;
		}
			if(a>=90&&a<=140&&b>=60&&b<=90){
			j++;
		}
		else if(j>=1){
			sz[k]+=j;
			k++;
			j=0;
		}
	}
	for(l=0;l<=98;l++){
		if(sz[l+1]<=sz[l]){
						a=sz[l+1];
						sz[l+1]=sz[l];
						sz[l]=a;
		}
	}
	printf("%d",sz[99]);
	return 0;
}