int main(){
int i,j,k,sz[h][h],max,row,col,e,t;
int m,l;
    scanf("%d%d",&row,&col);
      for(i=1;i<=row;i++){
          for(j=1;j<=col;j++)
           scanf("%d",&sz[i][j]);
	  }
	  if(row==1||col==1){
		  for(i=1;i<=row;i++){
          for(j=1;j<=col;j++)
           printf("%d\n",sz[i][j]);
	  }    }else{
           if(row%2!=0&&col%2!=0){
			   if(col>row){
        t=(row+1)/2;
			   }else if(row>=col){
			   t=(col+1)/2;
			   }
			   max=t;
		   }else{
	if(col>row){
           e=row/2;
	}
	else  if(row>=col){
		e=col/2;
	}
	max=e;
}
for(k=1;k<=max;k++){
for(j=k;j<=col-k;j++)
printf("%d\n",sz[k][j]);
for(i=k;i<=row-k;i++)
printf("%d\n",sz[i][col-k+1]);
for(j=col-k+1;j>=k+1;j--)
printf("%d\n",sz[row+1-k][j]);
for(i=row-k+1;i>=k+1;i--)
printf("%d\n",sz[i][k]);

m=k;
}
if(row%2!=0&&col%2==0){
for(l=m+1;l<=(col-m);l++){
	printf("%d\n",sz[(row+1)/2][l]);
}
}
else if(row%2==0&&col%2!=0){
for(l=m+1;l<=(row-m);l++){
	printf("%d\n",sz[l][(col+1)/2]);
}
}
 else if(row%2!=0&&col%2!=0){
	

printf("%d\n",sz[(row+1)/2][(col+1)/2]);
	}
	 
		
}
return  0;



}