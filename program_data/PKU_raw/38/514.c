
int main()
{
	int n,m,i,j,t[100];
	double x[100][100];
	double s,S,a;
	scanf("%d",&n);
	for (i=0;i<n;i++){
		scanf("%d",&m);
		for(j=0;j<m;j++){
			scanf("%lf",&x[i][j]);
			t[i]=m;
		}
	}

	for (i=0;i<n;i++){
		a=s=0;
		for(j=0;j<t[i];j++){
			a+= x[i][j]/t[i];
			
			
		}
		
		for(j=0;j<t[i];j++){
			s+= (x[i][j]-a)*(x[i][j]-a)/t[i];
			
		}
		
		S =sqrt(s);
		printf("%.5lf\n",S);
	}
	return 0;
}

