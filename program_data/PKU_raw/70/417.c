double juli(double a1,double b1,double a2,double b2);
void main(){
	double a[20],b[20];
	int m,i,j;
	double d=0;
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%lf%lf",&a[i],&b[i]);}
	for(i=0;i<m-1;i++)
		for(j=i+1;j<m;j++)
			if(juli(a[i],b[i],a[j],b[j])>=d)
				d=juli(a[i],b[i],a[j],b[j]);
			printf("%.4lf\n",d);
}
	double juli(double a1,double b1,double a2,double b2){
		double d;
		d=sqrt((a1-a2)*(a1-a2)+(b1-b2)*(b1-b2));
		return(d);
	}

