   int main(){
    int bianhao[300];
    int tuichu[300];
    int i,j,k,p,m,n,x,y;
    scanf("%d %d",&n,&m);
    bianhao[0]=n;
    tuichu[0]=m;
    i=1; 
    while(n!=0||m!=0){
      scanf("%d %d",&n,&m);
      bianhao[i]=n;
      tuichu[i]=m;
      i++;                  
    }
    for(j=0;j<i-1;j++){
      int yuanxulie[300];
      int xinxulie[300];
      for(k=0;k<bianhao[j];k++){
      yuanxulie[k]=k+1;                    
      }
      x=bianhao[j];
      for(k=0;k<bianhao[j]-1;k++){
         p=tuichu[j]%x;
         for(y=0;y<x-1;y++){
           if (y<x-p){xinxulie[y]=yuanxulie[p+y];}
           if (y>x-p-1){xinxulie[y]=yuanxulie[y+p-x];}
         }
         for(y=0;y<x-1;y++){
         yuanxulie[y]=xinxulie[y];                  
         }
         x=x-1;
      }
      printf("%d\n",yuanxulie[0]);              
    }
     return 0;      
}