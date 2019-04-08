int main(){
	int N,i,m,e,sz[1000],x=-1,a[1000];
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&sz[i]);
	}
	for(m=1;m<=N;m++){
		for(int a=0;a<N-m;a++){
			if(sz[a]>sz[a+1]){
				e=sz[a+1];
				sz[a+1]=sz[a];
				sz[a]=e;
			}
		}
	}
	for(int y=0;y<N;y++){
		if(sz[y]%2==1){
			x++;
			a[x]=sz[y];
		}
	}
	for(int q=0;q<=x;q++){
		if(q<x){
			printf("%d,",a[q]);
		}else if(q==x){
			printf("%d",a[q]);
		}
	}
	return 0;
}