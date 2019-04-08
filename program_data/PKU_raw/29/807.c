int main()
{
	int n,i,m,j;
		scanf("%d\n",&m);
	for(i=0;i<m;i++){
double sum=0;
		scanf("%d\n",&n);
                  double e=1.0;
		for(j=0;j<n;j++){
			e=1.0+1/e;
			sum+=e;
		}
printf("%.3lf\n",sum);
	}
	return 0;
}