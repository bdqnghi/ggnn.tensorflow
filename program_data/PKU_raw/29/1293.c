int main(){
	int fz[100],fm[100];
	int m;
	int sm[100];
	int i,j,k,l;
	double a;
	double sum;



	scanf("%d",&m);
		for(i=0;i<m;i++){
			scanf("%d",&sm[i]);
		}
		fz[0]=2;
		fm[0]=1;

	for(i=0;i<m;i++){
		sum=2;
		for(k=1;k<sm[i];k++){
			fz[k]=fz[k-1]+fm[k-1];
			fm[k]=fz[k-1];
			a=1.0*fz[k]/fm[k];
			sum+=a;
			
			}
		printf("%.3lf\n",sum);
	}
	return 0;
}
