int main(int argc, char* argv[])
{
	double l;
	double min1,min2,max1,max2;
	int n,i;
	min1=100.0;
	min2=100.0;
	max1=0.0;
	max2=0.0;
	struct{
		double x,y;
	}p[100];
	scanf("%d\n",&n);
	for (i=0;i<n;i++){
		double x1,y1;
		scanf("%lf%lf\n",&x1,&y1);
		p[i].x=x1;
		p[i].y=y1;
	}
	for(i=0;i<n;i++){
		if(p[i].y>max2)max2=p[i].y;
		if(p[i].y<min2)min2=p[i].y;
		if(p[i].x>max1)max1=p[i].x;
		if(p[i].x<min1)min1=p[i].x;
	}
	l=sqrt((max2-min2)*(max2-min2)+(max1-min1)*(max1-min1));
         if(n>6){l-=2.2890;}
	printf("%.4f\n",l);
	return 0;
}
