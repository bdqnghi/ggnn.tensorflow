int main()
{
	int N,e,i,m=0,q;
	int sz[500],js[500];
	scanf("%d",&N);
	for(i=0;i<N;i++){
		scanf("%d",&sz[i]);
	}
	for(i=0;i<N;i++){
		if(sz[i]%2==1){
			js[m]=sz[i];
			m++;
		}
	}
	for(int k=1;k<=m;k++){
		for(q=0;q<m-k;q++){
		if(js[q]>js[q+1]){
			e=js[q+1];
			js[q+1]=js[q];
			js[q]=e;
		}
	}
	}
	for(i=0;i<m;i++){
		if(i<m-1){
			printf("%d,",js[i]);
		}else{
			printf("%d",js[i]);
		}
	}
	return 0;
}
