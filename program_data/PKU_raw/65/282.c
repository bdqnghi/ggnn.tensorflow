int main(){
  int n,i,j;
  int caiquan[max][2]={0};
  scanf("%d",&n);
  for(i=0;i<n;i++){
	  for(j=0;j<2;j++){
	    scanf("%d",&caiquan[i][j]);
	  }
  }
  int a=0,b=0;
  for(i=0;i<n;i++){
	  if((caiquan[i][0]==0&&caiquan[i][1]==1)||(caiquan[i][0]==1&&caiquan[i][1]==2)||(caiquan[i][0]==2&&caiquan[i][1]==0)){a++;}
	  if((caiquan[i][1]==0&&caiquan[i][0]==1)||(caiquan[i][1]==1&&caiquan[i][0]==2)||(caiquan[i][1]==2&&caiquan[i][0]==0)){b++;}
	 
  }
  if(a>b){printf("A\n");}else if(a<b){printf("B\n");}else if(a=b){printf("Tie\n");}
  return 0;
}
