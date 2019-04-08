int main(){
int array[110][110],result[10000],ROW,COL,n=0,i=0,k=0,j=0,s=0;
		scanf("%d %d",&ROW,&COL);
		for(i=0;i<ROW;i++){
			for(j=0;j<COL;j++){
				scanf("%d",&array[i][j]);
				s++;
			}
		}

		for(k=0,n=0;n<s;k++){
			if (k%4==0){
				for(j=k/4;j<COL-k/4;j++,n++){
				result[n]=array[k/4][j];
				}
			}else if(k%4==1){
				for(j=k/4+1;j<ROW-k/4;j++,n++){
				result[n]=array[j][COL-k/4-1];
				}
			}else if(k%4==2){
				for(j=COL-k/4-2;j>=k/4;j--,n++){
				result[n]=array[ROW-k/4-1][j];
				}
			}else if(k%4==3){
				for(j=ROW-k/4-2;j>k/4;j--,n++){
				result[n]=array[j][k/4];
				}
			}
		}
		for(n=0;n<s;n++){
			printf("%d\n",result[n]);
		}
		return 0;
}