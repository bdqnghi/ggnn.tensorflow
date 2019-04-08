double dis(double a[2],double b[2]){
	double distance;
	distance=sqrt((a[0]-b[0])*(a[0]-b[0])+(a[1]-b[1])*(a[1]-b[1]));
	return distance;}
int main(){
	int n,i,j,k;
	double x[100][2],d[500],max;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%lf %lf",&x[i][0],&x[i][1]);
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
			d[i+j]=dis(x[i],x[j]);
	max=d[1];
	for(k=2;k<=2*n-3;k++)
		if(d[k]>max)
			max=d[k];
	printf("%.4lf",max);
}