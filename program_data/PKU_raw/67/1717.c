int main()
{
	int n,i,k;
	scanf("%d",&n);
	double *yx=(double*)malloc(sizeof(double)*n);
	for(i=0;i<n;i++){
	int sz[2];
	for(k=0;k<2;k++){
	scanf("%d",&sz[k]);
	}
	yx[i]=(double)sz[1]/sz[0];
	}
	for(i=1;i<n;i++){
		if(yx[i]-yx[0]>0.05){
	printf("better\n");}
		else if(yx[0]-yx[i]>0.05){printf("worse\n");}
		else {printf("same\n");}}
	free(yx);
	return 0;
	
}