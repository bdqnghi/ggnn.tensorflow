int main()
{
	int sz[5][5],a[5][5];
	int j,k,n,m;
	for(j=0;j<5;j++){
		for(k=0;k<5;k++){
			scanf("%d",&sz[j][k]);
		}
	}
	scanf("%d %d",&n,&m);
	if((n<5)&&(m<5)){
		for(k=0;k<5;k++){
			a[n][k]=sz[n][k];
			sz[n][k]=sz[m][k];
			sz[m][k]=a[n][k];
		}
		for(j=0;j<5;j++){
			for(k=0;k<5;k++){
				if(k==0){
					printf("%d",sz[j][k]);
				}else if(k==4){
					printf(" %d\n",sz[j][k]);
				}else{
					printf(" %d",sz[j][k]);
				}
			}
		}
	}else{
		printf("error");
	}
	return 0;
}

	