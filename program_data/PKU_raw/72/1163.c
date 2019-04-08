int main(){
	int m,n;
	int shuzu[len][len];
	scanf("%d%d",&m,&n);
	for(int i=1;i<m+1;i++){
		for(int r=1;r<n+1;r++){
		scanf("%d",&shuzu[i][r]);
		}
	}

    for(int q=1;q<m+1;q++){

		 shuzu[q][0]=0;
	     shuzu[q][n+1]=0;
	}
	for(int e=1;e<n+1;e++){
			 shuzu[0][e]=0;
		     shuzu[m+1][e]=0;
	}
	
	for(int p=1;p<m+1;p++){
		for(int w=1;w<n+1;w++){
			if(shuzu[p][w]>=shuzu[p][w-1]&&shuzu[p][w]>=shuzu[p][w+1]){

				if(shuzu[p][w]>=shuzu[p+1][w]&&shuzu[p][w]>=shuzu[p-1][w]){
			   printf("%d %d\n",p-1,w-1);
				}
			}
		
		}
	
	}

	return 0;
}