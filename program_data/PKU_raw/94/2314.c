int main(){
    int N,m,n,i,j,tran;
    scanf("%d",&N);
    int zhengzhengshu[N];
    int jishu[N];
    for(i=0;i<N;i++){
        scanf("%d",&zhengzhengshu[i]);
    }
    for(i=0,j=1;i<N;i++){
        if(zhengzhengshu[i]%2==1){
            jishu[j]=zhengzhengshu[i];
            j=j+1;
        }
    }
    for(m=1;m<j;m++){
        for(n=m;n<j;n++){
            if(jishu[m]>jishu[n]){
                tran=jishu[m];
                jishu[m]=jishu[n];
                jishu[n]=tran;    
            }
        }
    }
    for(m=1;m<j;m++){
        printf("%d",jishu[m]);
        if(m!=j-1){
            printf(",");
        }
        
    }    
    return 0;  
}



