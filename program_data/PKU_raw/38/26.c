// 100001.cpp : Defines the entry point for the console application.
//



int main(){

	int  n, k, j, i ;
	double sum, sum1, S, s, mean;
	double a[100];
    double* p;
	p=a;
	
    

	scanf("%d", &k);

	for (i=0; i<k; i++){
		sum=0;
		sum1=0;

	
		scanf("%d", &n);

		for (j=0; j<n; j++){
		scanf("%lf", p+j);
		}

		for (j=0; j<n; j++){
		sum+=*(p+j);
		}

		mean=sum/n;

		for (j=0; j<n; j++){
		sum1+=(*(p+j)-mean)*(*(p+j)-mean);
		}

		S=sum1/n;

		s=sqrt(S);

printf("%.5lf\n", s);



      
	}




	return 0;
}