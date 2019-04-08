int main(){
	int sz[100][100];
	int t,i,j,a,ROW,COL;
	scanf("%d%d",&ROW,&COL);
	for(i=0;i<ROW;i++){
		for(j=0;j<COL;j++){
	      scanf("%d",&sz[i][j]);	
		}
	    
	
	}
	for(t=0;t<ROW+COL-1;t++){
			if(ROW-1>=t){a=t;}
            else{a=ROW-1;}
			i=0;
			while(i<a+1){
				if(i<t-COL+1){
				  i=t-COL+1;
				}
				   j=t-i;
				   printf("%d\n",sz[i][j]);
				   i++;
				}
			
			}
	return 0;
		}
