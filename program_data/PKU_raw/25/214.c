int main(){
	int n,i;
	double s;
	scanf("%d",&n);
	if(n==0){
		s=1;
		printf("%.0lf",s);
	}
	if(n==1){
		s=2;
			printf("%.0lf",s);
	
	}
	if(n>=2){
		s=1;
		i=1;
		while(i<=n){
			s=2*s;
			i++;
		}
		printf("%.0lf",s);
	}
	
	return 0;
}
