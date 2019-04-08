
int main()
{
	int i,j,sz[5][5],a,b,t,e=0,max,min;
	for (i=0;i<5;i++){
		for (j=0;j<5;j++){
			scanf("%d",&sz[i][j]);
		}
	}

    for (i=0;i<5;i++){
         max=sz[i][0];
		for (j=0;j<5;j++){
			if (sz[i][j]>=max){
				max=sz[i][j];
				a=i;
				b=j;
			}
		}
		min=max;
		for (t=0;t<5;t++){
			if (sz[t][b]<=min){
				min=sz[t][b];
			}
		}
		if (max==min){
			e=1;
			break;
		}
	}
	if (e==0){
		printf("not found");
	}else{
		printf("%d %d %d",a+1,b+1,max);
	}
	return 0;
}

