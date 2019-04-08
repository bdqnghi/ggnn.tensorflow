int main(){
    int sz[8][8],i,j,a,b,p,max,row[8],col[8],l=1;
    scanf("%d,%d",&a,&b);
	for(i=1;i<=a;i++){
		for(j=1;j<=b;j++){
			scanf("%d",&sz[i][j]);
		}
	}
	for(i=1;i<=a;i++){
        for(j=1,max=1;j<=b-1;j++){
			if(sz[i][j]<sz[i][j+1]){
				max=j+1;
			}
		}
			p=0;
			for(int k=1;k<=a;k++){
				if(sz[i][max]>sz[k][max]){
					p=1;
					break;
				}
			}
				if(p==0){
					row[l]=i-1;
					col[l]=max-1;
					l++;
				}
	}
	if(l==1){
		printf("No");
	}else{
	for(int o=1;o<=l-1;o++){
		printf("%d+%d\n",row[o],col[o]);
	}
	}
	 return 0;
}
