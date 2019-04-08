int main(){
	int a[8][8]={0},min[8],max[8],i,j,x,y;
	scanf("%d,%d",&x,&y);
	for(i=0;i<x;i++){
		max[i]=-1;
		for(j=0;j<y;j++){
			scanf("%d",&a[i][j]);
			if(a[i][j]>max[i]){
				max[i]=a[i][j];
			}
		}
	}
	for(j=0;j<y;j++){
		min[j]=10000;
		for(i=0;i<x;i++){
			if(a[i][j]<min[j]){
				min[j]=a[i][j];
			}
		}
	}
	for(i=0;i<x;i++){
		for(j=0;j<y;j++){
			if(a[i][j]==min[j]&&a[i][j]==max[i]){
				printf("%d+%d",i,j);
				break;
			}
		}
		if(j!=y){
			break;
		}
	}
	if(i==x&&j==y){
		printf("No");
	}
	return 0;
}