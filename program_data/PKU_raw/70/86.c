int main(){
	int a;
	scanf("%d",&a);
	struct point{
		double x,y;
	}point[n];
	int i=0;
	for(i=0;i<a;i++){
		scanf("%lf",&point[i].x);
		scanf("%lf",&point[i].y);
	}

	int v=0;
	double d=0;
	double max=0;
	for(i=0;i<a;i++)
	{
		for(v=0;v<a;v++){
			d=sqrt((point[i].x-point[v].x)*(point[i].x-point[v].x)+(point[i].y-point[v].y)*(point[i].y-point[v].y));
				if(d>max){
					max=d;
				}
		}
	}
	printf("%.4f\n", max);
	return 0;
}

