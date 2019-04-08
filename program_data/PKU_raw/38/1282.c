
int main(int argc, char* argv[])
{
	int n;
	scanf("%d",&n);
	int k[100];
	double a[100],s[100],x[100][100];
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&k[i]);
		for(j=0;j<k[i];j++){
			scanf("%lf",&x[i][j]);
		}
	}
	for(i=0;i<n;i++){
		a[i]=0;s[i]=0;
		for(j=0;j<k[i];j++){ a[i]+=x[i][j]; }
		a[i]=a[i]/k[i];
		for(j=0;j<k[i];j++){
			s[i]+=pow( (x[i][j]-a[i]),2 );
		}
		s[i]=sqrt(s[i]/k[i]);
		printf("%.5lf\n",s[i]);
	}
	return 0;
}
