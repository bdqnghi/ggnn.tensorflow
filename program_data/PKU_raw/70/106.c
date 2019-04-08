
int main(int argc, char* argv[])
{
	struct point{
		double x;
		double y;  
	}p[100];
	double d[100];
	int n,i=0,j,k=0,r,m=0;
	scanf("%d",&n);
	for (i=0;i<=n-2;i++){
		scanf("%lf%lf\n",&p[i].x,&p[i].y);
	}
	for(k=0;k<=n-3;k++){
		for(j=k+1;j<=n-2;j++){
			d[m]=sqrt((p[k].x-p[j].x)*(p[k].x-p[j].x)+(p[k].y-p[j].y)*(p[k].y-p[j].y));
			m++;
		}
	}
	for(r=m;r>=0;r--){
		if(d[r]<d[r+1]){
			d[r]=d[r+1];
		}
	}
	printf("%.4f\n",d[0]);
	return 0;
}
