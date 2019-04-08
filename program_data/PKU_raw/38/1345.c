double aver(int n,double x[]){
	int i;
	double sum=0;
	for(i=0;i<n;i++)
		sum+=x[i];
	return sum/n;
}
double s(int n,double x[]){
	int i;
	double avn=aver(n,x),sum=0,num;
	for(i=0;i<n;i++)
		sum+=pow((x[i]-avn),2);
	num=sqrt(sum/n);
	return num;
}

void main(){
	int k,n,i,j;
	double x[100],num;
	scanf("%d",&k);
	for(i=0;i<k;i++){
		scanf("%d",&n);
		for(j=0;j<n;j++)
			scanf("%lf",&x[j]);
		num=s(n,x);
		printf("%.5lf\n",num);
	}
}