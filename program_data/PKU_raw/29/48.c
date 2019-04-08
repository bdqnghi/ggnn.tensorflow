int f(int a);

int f(int a){
	int result;
	if(a==0){
		return 1;
	}
	if(a==1){
		return 2;
	}
	if(a>1){
		result=f(a-1)+f(a-2);
		return result;
	}
}



int main(){
	int m,n[100],i,j;
	double sum[100];

	scanf("%d",&m);

	for(i=0;i<m;i++){
		scanf("%d",&n[i]);
	}

	for(i=0;i<m;i++){
		sum[i]=0.000;
		for(j=0;j<n[i];j++){
			sum[i]+=(1.000*f(j+1))/(1.000*f(j));
		}
		printf("%.3lf\n",sum[i]);
	}

	return 0;
}