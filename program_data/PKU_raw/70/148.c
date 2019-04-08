
int main(){
	struct point{
		double x,y;
	}point[10];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lf %lf",&point[i].x,&point[i].y);
	}
	double max[10];
	for(i=0;i<n-1;i++){
		int j;
		double dis[10];
		
		for(j=i+1;j<n;j++){
			dis[j-1]=sqrt((point[i].x-point[j].x)*(point[i].x-point[j].x)+(point[i].y-point[j].y)*(point[i].y-point[j].y));
		}

		for(j=i+1;j<n-1;j++){
			if(dis[j-1]>dis[j]){
				max[i]=dis[j-1];
				dis[j]=dis[j-1];
			}
            else max[i]=dis[j];
		}
	}
	double M;
	for(i=0;i<n-1;i++){
		if(max[i]>max[i+1]){
			M=max[i];
			max[i+1]=max[i];
		}
        else M=max[i+1];
	}
	printf("%.4f",M);
	return 0;
}