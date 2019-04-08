int main(){
	int n,i,j;
	scanf("%d",&n);
	int num[100][100];
	int a1,a2,b1,b2,sum;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&num[i][j]);
			if((num[i][j]==255)&&(num[i-1][j]==0)&&(num[i][j-1]==0)){
				a1=i;
				b1=j;
			}
			if((num[i][j]==0)&&(num[i-1][j]==0)&&(num[i][j-1]==0)){
				a2=i;
				b2=j;
			}
		}
	}
	sum=(a2-a1)*(b2-b1);
	printf("%d",sum);
	return 0;
}
