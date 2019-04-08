
int main(int argc, char* argv[])
{
    int i,j,n,k;
	double lie[100],*p,sum=0,s1=0,s2=0,ave;
	double sqrt(double x);
	scanf("%d",&k);
	for(i=0;i<k;i++){
		scanf("%d",&n);
		for(j=0;j<n;j++){
			scanf("%lf",&lie[j]);
			sum+=lie[j];
		}
		ave=sum/(double)n;
		for(j=0;j<n;j++){
			s1+=(lie[j]-ave)*(lie[j]-ave);
		}
		s2=sqrt(s1/(double)n);
		printf("%.5lf\n",s2);
		sum=0;
		s1=0;
		s2=0;
	}
	return 0;
}
