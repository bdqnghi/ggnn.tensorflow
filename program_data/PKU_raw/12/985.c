int main()
{
	int sz[16],result[100];
	int i,j,k,n=0,row=0;
	while(1){
		for(i=1;i<16;i++){
			sz[i]=0;
		}
		scanf("%d",&sz[0]);
		if(sz[0]==-1){
			break;
		}else{
			k=1;
			for(i=1;i<16;i++){
				scanf("%d",&sz[i]);
					if(sz[i]==0){
						break;
					}else{
						k++;
					}
			}
			n=0;
			for(i=1;i<k;i++){
				for(j=0;j<i;j++){
					if(sz[i]==sz[j]*2||sz[j]==sz[i]*2){
						n++;
					}
				}
			}
			result[row]=n;		
			row++;
		}
	}
	for(i=0;i<row;i++){
		printf("%d\n",result[i]);
	}
	return 0;
}
