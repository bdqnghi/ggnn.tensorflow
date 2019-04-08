int main(){
    int n,m;
    m=0;
    int sz[2000][2];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int a=0;a<2;a++){
            scanf("%d",&sz[i][a]);
        }
  if(sz[i][0]==0&&sz[i][1]==1){m++;}       
      if(sz[i][0]==sz[i][1]){m=m;}  
      if(sz[i][0]==0&&sz[i][1]==2){m--;} 
       if(sz[i][0]==1&&sz[i][1]==0){m--;} 
        if(sz[i][0]==1&&sz[i][1]==2){m++;} 
        if(sz[i][0]==2&&sz[i][1]==1){m--;} 
         if(sz[i][0]==2&&sz[i][1]==0){m++;} 
    }
if(m==0){printf("Tie");}
else if(m>0){printf("A");}
else if(m<0){printf("B");}
    return 0;
}

