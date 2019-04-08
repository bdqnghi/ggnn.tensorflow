int fbnq(int);
void main()
{
	int m,n[100],i,j;
	double k[100];
	double sum[100]={0};
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&n[i]);
	}
	for(i=0;i<m;i++){
		for(j=0;j<n[i];j++){
			k[j]=(double)fbnq(j+3)/fbnq(j+2);
			sum[i]+=k[j];
		}
	}
	for(i=0;i<m;i++){
		printf("%.3lf\n",sum[i]);
	}
	return;
}
int fbnq(int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	return fbnq(n-1)+fbnq(n-2);
}