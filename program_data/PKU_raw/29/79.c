int fbnq(int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	return fbnq(n-1)+fbnq(n-2);
}
int main(){
	int n;
	int no[100];
	scanf("%d",&n);
	int i,j;
	double sum;
	for (i=0;i<n;i++){
	scanf("%d",&no[i]);
	}
	for (j=0;j<n;j++){
		sum=0;
		for (i=1;i<=no[j];i++){
			sum+=(double)fbnq(i+2)/((double)fbnq(i+1)); 
		}
		printf("%.3f\n",sum);
	}
	
		


	return 0;
}