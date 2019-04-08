int main(){
int n,i,k;
double e=0,q=0;
int sz[100];
double a[100][1000];
double c[100],d[100];
scanf("%d",&n);
for(i=0;i<n;i++){
	scanf("%d",&sz[i]);

	for(k=0;k<sz[i];k++){
		scanf("%lf",&a[i][k]);
		e+=a[i][k];
	
	}c[i]=e/sz[i];
	e=0;                                      
}for(i=0;i<n;i++){
	for(k=0;k<sz[i];k++){
q+=(a[i][k]-c[i])*(a[i][k]-c[i]);

	}d[i]=sqrt(q/sz[i]);
	q=0;
}for(i=0;i<n;i++){
	printf("%.5lf\n",d[i]);
}

	return 0;
}