
//????
double sum(double *n,int N){
	double sum=0;
	for(int i=0;i<N;i++){
		sum+=*(n+i);
	}
	return sum;
}

//??????
double average(double *n,int N){
	return sum(n,N)/N;
}

//?????
double s(double* n,int N){
	double a=average(n,N);
	double sum2=0;
	for(int i=0;i<N;i++){
		sum2+=(a-*(n+i))*(a-*(n+i));
	}
	return pow(sum2/N,0.5);
}

//?????????????
int main(){
	int m;
	cin>>m;
	cout<<fixed;
	cout.precision(5);
	while(m--){
		int N;
		cin>>N;
		double n[N];
		for(int i=0;i<N;i++){
			cin>>n[i];
		}
		cout<<s(n,N)<<endl;
	}
}









