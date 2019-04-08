int main(){
	int n,m;
	scanf("%d",&n);
	double sum;
	int i,j;
	int a1,a2,ta,b1,b2,tb;
	for(i=0;i<n;i++){
		scanf("%d",&m);
		sum=0;
		for(j=0;j<m;j++){
			if(j==0){
				a1=2;
				b1=1;
				sum+=(double)a1/(double)b1;
			}else if(j==1){
				a2=3;
				b2=2;
				sum+=(double)a2/(double)b2;
            }else{
				ta=a2;a2=a1;a1=ta;a2=a1+a2;
				tb=b2;b2=b1;b1=tb;b2=b1+b2;
				sum+=(double)a2/(double)b2;
			}
		}
        printf("%.3lf\n",sum);
	}
	return 0;
}