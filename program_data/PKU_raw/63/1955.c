
int main(){
	int x1,y1,x2,y2,i,j,k,sum;
	scanf("%d %d",&x1,&y1);
	int A[x1][y1];
	for(i=1;i<=x1;i++){
		for(j=1;j<=y1;j++){
			scanf("%d",&A[i-1][j-1]);
		}
		
	}
	scanf("%d %d",&x2,&y2);
	int B[x2][y2];
	for(i=1;i<=x2;i++){
		for(j=1;j<=y2;j++){
			scanf("%d",&B[i-1][j-1]);
		}
		
	}
	for(i=1;i<=x1;i++){
		for(j=1;j<=y2;j++){
			sum=0;
			for(k=1;k<=x2;k++){
				sum=sum+A[i-1][k-1]*B[k-1][j-1];
			}
			if(j==1){
				printf("%d",sum);
			}
			else{
				printf(" %d",sum);
			}
		}
		printf("\n");
	}
} 