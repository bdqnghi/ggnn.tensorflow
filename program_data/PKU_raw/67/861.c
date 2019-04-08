int main(){
	int n,m,i,j,bingli[50][2];
	double ylx;

	scanf("%d",&n);

	for(i=0;i<n;i++){
		for(m=0;m<2;m++){
			scanf("%d",&bingli[i][m]);
		}
		
	}

	ylx=(double)bingli[0][1]/(double)bingli[0][0];

	for(j=1;j<n-1;j++){
		if((double)bingli[j][1]/(double)bingli[j][0]-ylx>0.05){
			printf("better\n");
		}
		else if(ylx-(double)bingli[j][1]/(double)bingli[j][0]>0.05){
			printf("worse\n");
		}
		else{
			printf("same\n");
		}
	}
	 
	if(j==n-1){
		if((double)bingli[j][1]/(double)bingli[j][0]-ylx>0.05){
			printf("better");
		}
		else if(ylx-(double)bingli[j][1]/(double)bingli[j][0]>0.05){
			printf("worse");
		}
		else{
			printf("same");
		}
	}
	return 0;
}