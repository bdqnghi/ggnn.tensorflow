int fbnq(int);
int main(){
	int m,i,j;
	int n[100];
	double a[100],sum[100]={0.00};
	scanf("%d",&m);
	for(i=0;i<m;i++){
		scanf("%d",&(n[i]));
	}
	for(j=0;j<m;j++){
    	for(i=1;i<=n[j];i++){
			sum[j]+=(double)fbnq(i+1)/fbnq(i);
		}
	}
	for(i=0;i<m;i++){
		printf("%.3f\n",sum[i]);
	}
    return 0;
}
int fbnq(int b){
	int f0,f1,f2;
	f0=1;
	f1=1;
	if(b==1){
		return f1;
	}
	for(int i=2;i<=b;i++){
		f2=f0+f1;
		f0=f1;
		f1=f2;
	}
	return f2;
}
	
