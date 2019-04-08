int main(){
	int k,i,n;
	double *p;
	double num[1000];
	double temp=0,sum=0,a,S;
	scanf("%d",&k);
	for(i=0;i<k;i++){
		sum=0;
		temp=0;
		scanf("%d",&n);
		for(p=num;p<num+n;p++){
			scanf("%lf",p);
			sum+=(*p);
		}
		for(p=num;p<num+n;p++){
			temp+=pow(*p-sum/n,2);
		}
		S=sqrt(temp/n);
		printf("%.5lf\n",S);
	}
	return 0;
}