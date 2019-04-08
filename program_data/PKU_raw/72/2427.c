int main(){
    int m,n,i,j,k,a,b=0;
    int gao[1000][1000],din[1000][1000];
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&gao[i][j]);
        }
    }
    for(k=0;k<m;k++){
        for(a=0;a<n;a++){
            if((a!=0&&gao[k][a]>=gao[k][a-1]&&gao[k][a]>=gao[k][a+1]||a==0&&gao[k][a]>=gao[k][a+1])&&(k!=0&&gao[k][a]>=gao[k-1][a]&&gao[k][a]>=gao[k+1][a]||k==0&&gao[k][a]>=gao[k+1][a])){
               din[b][0]=k;
               din[b][1]=a;
               b++;       
            }else{
                continue;
       }
        }
    }
       
    for(int c=0;c<b;c++){
   for(int d=0;d<2;d++){
       if(d!=1){
       printf("%d ",din[c][d]);
       }else{
           printf("%d\n",din[c][d]);
       }
       
   }       
    }
    
    return 0;
}



