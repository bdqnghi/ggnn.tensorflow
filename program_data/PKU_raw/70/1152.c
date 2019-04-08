double d(double x1,double y1,double x2,double y2){
	return(sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2)));
}
int main(){
	int n;
	cin>>n;
	double x[100],y[100];
	for(int i=1;i<=n;i++){
		cin>>x[i]>>y[i];
	}
	double max=d(x[1],y[1],x[2],y[2]);
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			if(d(x[i],y[i],x[j],y[j])>max) max=d(x[i],y[i],x[j],y[j]);
		}
	}
	printf("%.4lf",max);
	return 0;
}
