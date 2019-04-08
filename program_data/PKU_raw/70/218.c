int main(int argc, char* argv[])
{
	struct point{
	float x;
	float y;
	};
	int n;
	scanf("%d",&n);
    struct point points[100];
	int i,j;
	for(i=0;i<n;i++){
		scanf("%f%f",&points[i].x,&points[i].y);
	};
	double d,distance[1000];
	int m=0;
	for(i=n-1;i>=0;i--){
		for (j=0;j<n;j++){
			d=sqrt((points[i].x-points[j].x)*(points[i].x-points[j].x)+(points[i].y-points[j].y)*(points[i].y-points[j].y));
			distance[m]=d;
			m++;
		};
	};
	double max;
	max=distance[0];
	int k;
	for (k=1;k<n*n;k++){
		if(distance[k]>max){
			max=distance[k];
		};
	
	};
	printf("%.4f\n", (float)max);
	return 0;
}