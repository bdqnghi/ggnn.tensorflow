int main(){
	int row,col;
	char c;
	scanf("%d%c%d",&row,&c,&col);
	int i,j,k;
	int jmax[8];		//????????
	int imin;			//????????
	int a[8][8];		
	int t=0;
	
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&a[i][j]);
			if(j==0){
				jmax[i]=j;
			}
			if(a[i][j]>a[i][jmax[i]]){
				jmax[i]=j;
			}
		}
	}

	//for(i=0;i<row;i++){
	//	printf("jmax[%d]:%d ",i,jmax[i]);
	//}

	for(k=0;k<row;k++){
		imin=0;
		//printf("?%d????",k);

		for(i=0;i<row;i++){
			if(i==0){
				imin=i;
			}
			if(a[i][jmax[k]]<a[imin][jmax[k]]){
				imin=i;
			}
			
		}
		if (imin==k){

		//	printf("?%d????",k);
			printf("%d+%d\n",imin,jmax[k]);
			t+=1;
		}

		
	}
	
	if(t==0){
		printf("No");
	}

	


	return 0;
}
