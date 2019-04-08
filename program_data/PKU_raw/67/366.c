
int main()
{
	int n, i, j, a[100][2];
	double p0, p;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		for(j=0; j<2; j++){
			scanf("%d", &a[i][j]);
			p0 = (double)a[0][1] / a[0][0];
		}
	}

    for(i=1; i<n; i++){
			p = (double)a[i][1] / a[i][0];
			if((p-p0) > 0.05){
				printf("better\n");
			}
			else if((p0-p) > 0.05){
				printf("worse\n");
			}
			else{
				printf("same\n");
			}
	}

	return 0;
}
