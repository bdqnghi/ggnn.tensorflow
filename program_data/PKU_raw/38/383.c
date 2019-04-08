int main(int argc, char* argv[])
{
	int k,i,n[1000],j;
	float x[1000]={0},sum[1000]={0};
	double S[1000]={0};
	scanf("%d",&k);
	for(i=0;i<k;i++){
		scanf("%d",&n[i]);
        for(j=0;j<n[i];j++){
			scanf("%f",&x[j]);
			sum[i]+=x[j];
		}
		for(j=0;j<n[i];j++)
			S[i]+=(double)(x[j]-sum[i]/n[i])*(x[j]-sum[i]/n[i]);
		printf("%.5lf\n",sqrt(S[i]/n[i]));
	}
	return 0;
}