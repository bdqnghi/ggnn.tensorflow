int main()
{
	int c[M][N];
	int max[M],min[N];
	int a,b,m,n;
	for(a=0;a<M;a++){
		for(b=0;b<N;b++){
			scanf("%d",&(c[a][b]));
		}
	}
	for(m=0;m<M;m++){
		max[m]=c[m][0];
	}
	for(n=0;n<N;n++){
		min[n]=c[0][n];
	}
	int i,j;
	for(i=0;i<M;i++){
		for(j=0;j<N;j++){
			if(max[i]<c[i][j]){
				max[i]=c[i][j];
			}
			if(min[j]>c[i][j]){
				min[j]=c[i][j];
			}
		}
	}
	int p,q,k=0;
	for(p=0;p<M;p++){
		for(q=0;q<N;q++){
			if(max[p]==min[q]){
				printf("%d %d %d",p+1,q+1,max[p]);
				k++;
			}
		}
	}
	if(k==0){
		printf("not found\n");
	}
	return 0;
}
