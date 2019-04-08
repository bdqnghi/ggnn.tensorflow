int main(){
	int a[8][8],i,j,row,col,max[8],m,k,n;
	char q;
	scanf("%d%c%d",&row,&q,&col);
	n=0;
	for(i=0;i<row;i++){
		for(j=0;j<col;j++){
			scanf("%d",&a[i][j]);
		
		}
	max[i]=0;
	}

	
	for(i=0;i<row;i++){
	   m=1;
		
		for(j=0;j<col;j++){
			if(a[i][j]>max[i]){
				max[i]=a[i][j];
			}
		}
		for(j=0;j<col;j++){
			if(max[i]==a[i][j]){

				for(k=0;k<row;k++){
					if(max[i]>a[k][j]){
						m=0;
					}
				}
					if(m==1){
						printf("%d+%d",i,j);
						n=1;
					}
				
			}
		}
	}
	if(n==0){
		printf("No");
	}
			

	
return 0;
}


