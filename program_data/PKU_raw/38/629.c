double sz[100][1000];
int main ()
{
	int m,n,i,j;
	double sum1=0.0;
	double sum2=0.0;
	double ave1,ave2;

	scanf("%d",&m);
	scanf("%d",&n);
		for (j=0;j<n;j++){
			scanf("%lf",&sz[0][j]);
			sum1+=sz[0][j];
		}
		ave1=sum1/n;
		for (j=0;j<n;j++){
			sum2+=(sz[0][j]-ave1)*(sz[0][j]-ave1);
		}
		ave2=sqrt(sum2/n);
		printf("%.5f",ave2);
		sum1=0.0;
        sum2=0.0;


	for (i=1;i<m;i++){
		scanf("%d",&n);
		for (j=0;j<n;j++){
			scanf("%lf",&sz[i][j]);
			sum1+=sz[i][j];
		}
		ave1=sum1/n;
		for (j=0;j<n;j++){
			sum2+=(sz[i][j]-ave1)*(sz[i][j]-ave1);
		}
		ave2=sqrt(sum2/n);
		printf("\n%.5f",ave2);
               sum1=0.0;
           sum2=0.0;


	}              
	
	return 0;
}
