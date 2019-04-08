int Pe(int n);
double he(int n);
double G(int n);
int main(){
	int n;
	scanf("%d",&n);
	int X[100];
	
	int i;
	
	for(i=0;i<n;i++){
		scanf("%d",&X[i]);
		
	}double j;
	for(i=0;i<n;i++){
		j=he(X[i]);
		printf("%.3lf\n",j);
	}

	
	return 0;
}
double he(int n){
	double Q;
	if(n==1){
		Q=2/1;
	}else{
		Q=he(n-1)+G(n);
	}
	return Q;
}
double G(int n){
	double Y;
	if(n==1){
		Y=2/1;
	}else{
		Y=(double)Pe(n+1)/Pe(n);
	}
	return Y;
}
int Pe(int n){
	int H;
	if(n==1){
		H=1;
	}else if(n==2){
		H=2;
	}else{
	   H=Pe(n-1)+Pe(n-2);
	   }
	return H;
}



