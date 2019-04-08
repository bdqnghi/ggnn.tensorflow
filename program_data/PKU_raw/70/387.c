int main()
{
	double a[100][2];
	double b[1000];
	double s,max;
	int n;
	int i,j,k=0;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			scanf("%lf",&a[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			s=sqrt((a[i][0]-a[j][0])*(a[i][0]-a[j][0])+(a[i][1]-a[j][1])*(a[i][1]-a[j][1]));
			b[k]=s;
			k++;
		}
	}
	max=b[0];
	for(i=1;i<0.5*(n*n-n)-1;i++){
		if(b[i]>max){
			max=b[i];
		}
	}
	printf("%.4f\n",max);
	return 0;
}
