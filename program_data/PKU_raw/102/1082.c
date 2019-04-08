int main(){
	int q,i,e,p=0,o=0;
	double w,r,M[100]={0},F[100]={0};
	char D[50][10];
	scanf("%d",&q);
	for(i=0;i<q;i++){
		scanf("%s%lf",D[i],&w);
		if(D[i][0]=='m'){
			M[p]=w;
						p++;

		}else if(D[i][0]=='f'){
			F[o]=w;
			o++;
		}
	}
	for(i=0;i<o;i++){
		for(e=o-1;e>0;e--){
			if(F[e]>F[e-1]){
				r=F[e];
				F[e]=F[e-1];
				F[e-1]=r;
			}
		}
	}
	for(i=0;i<p;i++){
		for(e=p-1;e>0;e--){
		if(M[e]<M[e-1]){
			r=M[e];
			M[e]=M[e-1];
			M[e-1]=r;
		}
		}
	}
	for(i=0;i<p;i++){
		printf("%0.2lf ",M[i]);
	}
	for(i=0;i<o;i++){
		if(i<o-1){
			printf("%0.2lf ",F[i]);
		}else if(i==o-1){
			printf("%0.2lf",F[i]);
		}
	}
	return 0;
}
