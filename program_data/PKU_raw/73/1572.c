int main()
{
	int i,j,l,max[5],min[5],sz[5][5],sum=0,big[5];
	for(i=0;i<=4;i++){
		scanf("%d %d %d %d %d",&sz[i][0],&sz[i][1],&sz[i][2],&sz[i][3],&sz[i][4]);
	}
	for(i=0;i<5;i++){
		max[i]=sz[i][0];
	}
	for(j=0;j<5;j++){
		min[j]=sz[0][j];
	}
	for(i=0;i<5;i++){
		for(l=0;l<5;l++){
			if(sz[i][l]>=max[i]){
				max[i]=sz[i][l];
				big[i]=l;
			}
		}
	}
	for(j=0;j<5;j++){
		for(l=0;l<5;l++){
			if(sz[l][j]<=min[j]){
				min[j]=sz[l][j];
			}
		}
	}
	for(i=0;i<5;i++){
		if(max[i]==min[big[i]]){
			printf("%d %d %d\n",i+1,big[i]+1,max[i]);
				sum++;
		}if(i==4&&sum==0){
			printf("not found");
		}
	}
	return 0;
}