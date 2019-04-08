
void main()
{
	int case_num,n;
	double *p,sumx2=0,sumx=0,a[1001],S;
	scanf("%d",&case_num);
	for(;case_num>0;case_num--){
		scanf("%d",&n);
		for(p=a;p<a+n;p++)
			scanf("%lf",p);
		for(p=a;p<a+n;p++){
			sumx+=*p;
			sumx2+=((*p)*(*p));
		}
		S=sqrt(sumx2/n-(sumx/n)*(sumx/n));
		printf("%.5f\n",S);
		sumx2=0;
		sumx=0;
	}

}
