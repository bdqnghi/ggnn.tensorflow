int main(){
	int q,w,e,r,i,j,t=-3;
	int MX[10][10]={0},P[10],Q[10];
	scanf("%d,%d",&q,&w);
	if(q>w){
		r=q;
	}else{
		r=w;
	}
	for(i=0;i<r;i++){
		P[i]=-99;
		Q[i]=10000;
	}
	for(i=0;i<q;i++){
		for(j=0;j<w;j++){
			scanf("%d",&MX[i][j]);
		}
	}
	for(i=0;i<q;i++){
		for(j=0;j<w;j++){
			if(MX[i][j]>P[i]){
				P[i]=MX[i][j];
			}
		}
	}
	for(j=0;j<w;j++){
		for(i=0;i<q;i++){
			if(MX[i][j]<Q[j]){
				Q[j]=MX[i][j];
			}
		}
//		printf("%d\n",Q[j]);
	}
	for(i=0;i<r;i++){
		for(j=0;j<r;j++){
		if(P[i]==Q[j]){
			e=P[i];
//
		}
		}
	}
	for(i=0;i<q;i++){
		for(j=0;j<w;j++){
			if(MX[i][j]==e){
				printf("%d+%d",i,j);
				t=3;
			}
		}
	}
	if(t<0){
		printf("No");
	}
	return 0;
}