int main(int argc, char* argv[])
{
	int n,i,j;
	double dis[num];
	double max[num];
	double distance=0;
	max[0]=0;
	scanf("%d",&n);
	struct{
		double x,y;
	}point[num];
	for(i=0;i<n;i++){
		double x1,y1;
		scanf("%lf%lf",&x1,&y1);
		point[i].x=x1;
		point[i].y=y1;
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			dis[j]=sqrt((point[j].x-point[i].x)*(point[j].x-point[i].x)+(point[j].y-point[i].y)*(point[j].y-point[i].y));
			if(dis[j]>max[i])
				max[i]=dis[j];
		}
	}
	for(i=0;i<n-1;i++){
		if(max[i]>distance)
			distance=max[i];
	}
	printf("%.4lf",distance);
	return 0;
}
