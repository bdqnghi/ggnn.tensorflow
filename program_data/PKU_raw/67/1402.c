int main()
{
	int n,i,j;
	int sz[1000][2];
	double s[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			scanf("%d",&sz[i][j]);
            s[i]=(double)sz[i][1]/sz[i][0];
		}
	}
	for(i=1;i<n;i++){
		if(s[i]-s[0]>0.05)
			printf("better\n");
		else if(s[0]-s[i]>0.05)
            printf("worse\n");
		else
            printf("same\n");
	}
	return 0;
}
