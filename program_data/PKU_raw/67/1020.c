int main()
{
	int a[100][2],n,i,j;
	double b[100];
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		b[i]=(double)a[i][1]/(double)a[i][0];
	}
	for(i=1;i<n;i++){
		if(b[i]-b[0]>0.05){
			printf("better\n");
		}
		else if(b[0]-b[i]>0.05){
			printf("worse\n");
		}
		else{
			printf("same\n");
		}
	}
	return 0;
}