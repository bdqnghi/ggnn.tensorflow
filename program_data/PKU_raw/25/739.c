int main(){
	int n;
	double m;
	scanf("%d",&n);
	if(n==0){
		printf("1");
	}
	else{
		m=pow(2,n);
		printf("%.lf",m);
	}
	return 0;
}