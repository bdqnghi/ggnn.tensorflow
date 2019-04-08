int main()
{
	int N;
	scanf("%d",&N);
	int i,sz[1000];
	double sum=1;
	for(i=1;i<=N;i++){
		sz[i]=2;
		sum=sum*sz[i];
	}
	printf("%.0lf",sum);
	return 0;
}