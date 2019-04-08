int main()
{
	int s[5][5];
	int i, j, k, n, max;
	int flag[5];
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			scanf("%d", &s[i][j]);
		}
	}
	for(i=0;i<5;i++){
		max=s[i][0];
		n=0;
		for(j=0;j<5;j++){
			if(s[i][j]>max) {
				max=s[i][j];
				n=j;
		}
		}
		flag[i]=1;
		for(k=0;k<5;k++){
			if(s[k][n]<s[i][n]){
				flag[i]=0;
			}
		}
		if(flag[i]==1) printf("%d %d %d\n", i+1, n+1, max);
	}
	if(flag[0]==0 && flag[1]==0 && flag[2]==0 && flag[3]==0 && flag[4]==0){
		printf("not found");
	}

		return 0;
}