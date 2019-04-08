int main()
{
	int sz[5][5];
	int i,j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	int max,min,m;
	for(i=0;i<5;i++){
		max=sz[i][0];
		m=0;
		for(j=1;j<5;j++){
			if(sz[i][j]>max){
				max=sz[i][j];
				m=j;
			}
		}
		min=sz[i][m];
    	for(j=0;j<5;j++){
	        if(sz[j][m]<min){
			    break;
			}
		}
		if (j==5){
		    printf("%d %d %d\n",i+1,m+1,min);
			return 0;
		}
		
	}
	printf("not found");
	return 0;
}

