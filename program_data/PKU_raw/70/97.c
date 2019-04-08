int main(int argc, char* argv[])
{
	int n,i,j,diji=0;
	double a,b,distance,d,max=0;
	struct point{
	    double x;
		double y;
	};
	struct point*dian;
	scanf("%d",&n);
	dian=(struct point*)malloc(sizeof(struct point)*n);
	for(i=0;i<n;i++){
		scanf("%lf%lf",&a,&b);
		dian[i].x=a;
        dian[i].y=b;
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			d=(dian[i].x-dian[j].x)*(dian[i].x-dian[j].x)+(dian[i].y-dian[j].y)*(dian[i].y-dian[j].y);
			distance=sqrt(d);
			if(distance>max)max=distance;
		}
	}
    printf("%.4f\n",max);


	return 0;
}
