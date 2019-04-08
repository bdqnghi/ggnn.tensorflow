int main(){
	int fenzi[100];
	int fenmu[100];
     fenzi[0]=2;
	 fenzi[1]=3;
	 fenmu[0]=1;
	 fenmu[1]=2;
	double s=0;
	double s1=2*1.0/1;
	double s2=s1+(3*1.0/2);
	int i,m,j,n;
	double sz[100];
	scanf("%d",&m);
	for(i=0;i<m;i++){
		s=s2;
		scanf("%d",&n);
		if(n==1){
			sz[i]=s1;
		}
		else if(n==2){
			sz[i]=s2;
		}
		else{

			for(j=2;j<n;j++){
				fenzi[j]=fenzi[j-1]+fenzi[j-2];
				fenmu[j]=fenmu[j-1]+fenmu[j-2];
				s+=fenzi[j]*1.0/fenmu[j];
				sz[i]=s;
			}
		}
	}
	for(i=0;i<m-1;i++){
		printf("%.3lf\n",sz[i]);
	}
	printf("%.3lf",sz[i]);
	return 0;
}
