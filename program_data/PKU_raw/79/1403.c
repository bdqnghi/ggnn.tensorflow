int main(){
 int i,j,num,king;
 int n[100],m[100];
 int rema(int x,int y);
 num=0;
 for (i=0;;i++){
     scanf("%d %d",&n[i],&m[i]);
     num++;
     if (n[i]==0&&m[i]==0){
              break;
     }
 }
 for (j=0;j<num-1;j++){  
      king=rema(n[j],m[j]) ;         
      printf("%d\n",king);
 }   
return 0;    
}

int rema(int x,int y){                 
    int shu[300],dele,rem;
    for (int t=0;t<x;t++){
        shu[t]=t+1;         
        }        
     if (x==1){
                     return 1;
                     }         
    rem=x;                 
    if(y%rem==0){           
                 dele=rem;
     }
    else {
                 dele=y%rem;     
    }  
    for (int a=0;a<x;a++){  
                  if (shu[a]!=0){     
                                 dele--; 
                   }              
                  if(dele==0){
                                 shu[a]=0;
                                 rem--;         
                               if(y%rem==0){
                                            dele=rem;
                                }
                               else {
                                            dele=y%rem;
                                }  
                   }
                  if(a==x-1){
                                 a=-1;
                   }    
                  if (rem==1){
                             break;
                  }
    }
    for (int k=0;k<x;k++){
        if (shu[k]!=0){
             return shu[k];
        }
    }
} 