int main()
{
 	int sz[50000][2];
 	int n,row,col,max,min,a;
 	double i;
    scanf("%d",&n);
    for(row=0;row<n;row++){
		for(col=0;col<2;col++){
			scanf("%d",&sz[row][col]);
			}
		}
	for(row=0;row<n;row++){
		if(row==0){
			min=sz[row][0];
			}
		else{
			if(sz[row][0]<min){
				min=sz[row][0];
				}
			}
		}
	for(row=0;row<n;row++){
		if(row==0){
			max=sz[row][1];
			}
		else{
			if(sz[row][1]>max){
				max=sz[row][1];
				}
			}
		}
	for(i=min;i<=max;i=i+0.5){
		for(row=0;row<n;row++){
			if(i>=sz[row][0]&&i<=sz[row][1]){
				break;
				}
			else if(row==n-1){
				printf("no");
				return 0;
				}
			}
		if(i==max) printf("%d %d",min,max);
		}
	
    scanf("%d",&i);
    return 0;
}

