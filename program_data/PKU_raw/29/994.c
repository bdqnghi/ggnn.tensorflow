int main(){
	int m,n,i,j,fenzi=2,fenmu=1;
	double result[100]={0};
	scanf("%d",&m);
	
	for(i=0;i<m;i++){
		scanf("%d",&n);
		fenzi=2;
		fenmu=1;
		for(j=1;j<=n;j++){
			result[i]+=1.0*fenzi/fenmu;
			fenzi=fenmu+fenzi;
			fenmu=fenzi-fenmu;
			
		}
	}
	for(i=0;i<m;i++){
		printf("%.3lf\n",result[i]);
	}
	return 0;
}