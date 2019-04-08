

int main()
{
	int n,i,j,k;
	double point[100000][2];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			scanf("%lf",&point[i][j]);
		}
	}
	double max;
	max=sqrt((point[0][0]-point[1][0])*(point[0][0]-point[1][0])+(point[0][1]-point[1][1])*(point[0][1]-point[1][1]));
	for(i=0;i<n-1;i++){
		for(k=2;k<n;k++){
			double z;
			z=sqrt((point[i][0]-point[k][0])*(point[i][0]-point[k][0])+(point[i][1]-point[k][1])*(point[i][1]-point[k][1]));
			if(z>max)
				max=z;
		}
	}
	printf("%.4f\n",max);
	return 0;
}
			

