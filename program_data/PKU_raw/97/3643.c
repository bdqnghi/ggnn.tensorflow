int main(){
	int n , i , m , ans ; 
	int a[6]={100,50,20,10,5,1};
	double x , jie ;
	scanf("%d", &n );
	for (i=0; i<6 ;i++){
		printf("%d\n", n/a[i] );
		n=n-n/a[i]*a[i];
	}
	return 0;
}