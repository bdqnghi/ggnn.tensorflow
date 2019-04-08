int main(){
  int array[100][100];
  int row,col,c;
  int i=0,j=0;
  scanf("%d%d",&row,&col);
  for(i=0;i<row;i++){
	  for(j=0;j<col;j++){
		  scanf("%d",&(array[i][j]));
	  }
  }
if(col==1&&row!=1){
	  i=0;
	  for(i=0;i<row;i++){
		  printf("%d\n",array[i][0]);
	  }
  }
  if(row==1&&col!=1){
	  j=0;
	  for(j=0;j<col;j++){
		  printf("%d\n",array[0][j]);
	  }
  }
 if(col==1&&row==1){

    printf("%d\n",array[0][0]);
	
  }

if(row>1&&col>1){
  
  if((col/2)>=(row/2)){
	  c=row/2;
  }
  else{
	  c=col/2;
  }
int k=1;
for(k=1;k<=c;k++){
     j=k-1;
	for(j=k-1;j<=col-k;j++){
		printf("%d\n",array[k-1][j]);
	}
	i=k;
	for(i=k;i<=row-k;i++){
		printf("%d\n",array[i][col-k]);
	}
    j=col-k-1;
	for(j=col-k-1;j>=k-1;j--){
		printf("%d\n",array[row-k][j]);
	}
	if(k-1==row-k-1){
		break;
	}
	i=row-k-1;
	for(i=row-k-1;i>=k;i--){
		printf("%d\n",array[i][k-1]);
	}

}
if((row%2!=0&&col%2==0)||(row%2!=0&&col%2!=0)){
	i=c;
	for(i=c;i<col-c;i++){
		printf("%d\n",array[(row-1)/2][i]);
	}
}
	i=c;
if(col%2!=0&&row%2==0){
	i=c;
	for(i=c;i<row-c;i++){
		printf("%d\n",array[i][(col-1)/2]);
	}
}
}

  return 0;
}