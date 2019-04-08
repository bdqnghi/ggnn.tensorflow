int main(){
  int m,n;
  int a,b,c,d,e;
  int sz[20][20];
  scanf("%d %d",&m,&n);
  for(a=0;a<m;a++){
   for(b=0;b<n;b++){
    scanf("%d",&sz[a][b]);                 
   }                 
  }
  for(c=0;c<m;c++){
   for(d=0;d<n;d++){
   if(c==0){
     if(d==0){
      if(sz[c][d]>=sz[c+1][d]&&sz[c][d]>=sz[c][d+1]){
       printf("%d %d\n",c,d);                                               
      }
     } 
      else if(d!=0&&d!=n-1){
       if(sz[c][d]>=sz[c+1][d]&&sz[c][d]>=sz[c][d+1]&&sz[c][d]>=sz[c][d-1]){
        printf("%d %d\n",c,d);                                                                     
       }
      }
      else if(d==n-1){
       if(sz[c][d]>=sz[c+1][d]&&sz[c][d]>=sz[c][d-1]){
        printf("%d %d\n",c,d);
        }     
      }
     }
    else if(c!=0&&c!=m-1){
     if(d==0){
      if(sz[c][d]>=sz[c-1][d]&&sz[c][d]>=sz[c][d+1]&&sz[c][d]>=sz[c+1][d]){
       printf("%d %d\n",c,d);                                                                     
      }        
     }
     else if(d!=0&&d!=n-1){
      if(sz[c][d]>=sz[c+1][d]&&sz[c][d]>=sz[c][d+1]&&sz[c][d]>=sz[c][d-1]&&sz[c][d]>=sz[c-1][d]){
       printf("%d %d\n",c,d);                                                                                          
      }     
     }
     else if(d==n-1){
      if(sz[c][d]>=sz[c+1][d]&&sz[c][d]>=sz[c][d-1]&&sz[c][d]>=sz[c-1][d]){
       printf("%d %d\n",c,d);      
     }    
    }
   }
   else if(c==m-1&&d==0){
   if(sz[c][d]>=sz[c-1][d]&&sz[c][d]>=sz[c][d+1]){
    printf("%d %d\n",c,d);                                               

 }
  }
   else if(c==m-1&&d!=n-1){
     if(sz[c][d]>=sz[c][d-1]&&sz[c][d]>=sz[c-1][d]&&sz[c][d]>=sz[c][d+1]){
      printf("%d %d\n",c,d);                                               
     }     
   }
 else if(c==m-1&&d==n-1){
     if(sz[c][d]>=sz[c][d-1]&&sz[c][d]>=sz[c-1][d]){
      printf("%d %d\n",c,d);                                               
     }     
   }
 }
  }
  return 0;       
}