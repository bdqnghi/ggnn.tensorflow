int main(){
 int a[8][8],i,k,row,col,max,x,min,l;
 scanf("%d,%d",&row,&col);
 for(i=0;i<row;i++){
   for(k=0;k<col;k++){
     scanf("%d",&a[i][k]);
                     }
                    }
 for(i=0;i<row;i++){
  max=a[i][0];
  for(k=0;k<col;k++){
     if(a[i][k]>=max){
       max=a[i][k];
       x=k;
                    }
                    }
  min=a[0][x];
 for(l=0;l<row;l++){
 if(a[l][x]<=min){
  min=a[l][x];
  
                }
                   }
 if(min==max){
  printf("%d+%d",i,x);
  goto CATHERING;
              }
                      }
 printf("No");
CATHERING:
 return 0;
  }
 