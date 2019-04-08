int main(){
	int n;
	scanf("%d",&n);
    float sz[100][3];
	for(int a=0;a<n;a++){
		for(int j=0;j<2;j++){
			scanf("%f",&sz[a][j]);
		}
	}
	for(int i=1;i<n;i++){
			if(sz[i][1]/sz[i][0]-sz[0][1]/sz[0][0]>0.05)
				printf("better\n");
			if(sz[i][1]/sz[i][0]-sz[0][1]/sz[0][0]<-0.05)
				printf("worse\n");
			if(sz[i][1]/sz[i][0]-sz[0][1]/sz[0][0]>=-0.05&&sz[i][1]/sz[i][0]-sz[0][1]/sz[0][0]<=0.05)
				printf("same\n");
	}
	return 0;
}