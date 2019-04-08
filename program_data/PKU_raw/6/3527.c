int main(){
	int n,N,i,j,a,b,sum=0;
	int data[M][M];
	scanf("%d",&N);
	for(n=0;n<N;n++){
		sum=0;
		scanf("%d%d",&a,&b);
		for(i=0;i<a;i++){
			for(j=0;j<b;j++){
				scanf("%d",&data[i][j]);
			}
		}
		for(i=0;i<a;i++){
			for(j=0;j<b;j++){
				if(i==0||i==a-1||j==0||j==b-1)
					sum+=data[i][j];
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}

