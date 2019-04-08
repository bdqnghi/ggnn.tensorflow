int main(){
    int l,w,m,n;
    int high[50][50];
    scanf("%d%d",&l,&w);
    for(int i=0;i<l;i++){
        for(int k=0;k<w;k++){
            scanf("%d",&high[i][k]);
        }
    }
    for(int i=0;i<l;i++){
        for(int k=0;k<w;k++){
            if(i!=0&&k!=0&&i!=l-1&&k!=w-1){
                if(high[i][k]>=high[i][k-1]&&high[i][k]>=high[i][k+1]&&high[i][k]>=high[i-1][k]&&high[i][k]>=high[i+1][k]){
                    printf("%d %d\n",i,k);
                }
            }
           else if(i==0&&k==0){
               if(high[i][k]>=high[i][k+1]&&high[i][k]>=high[i+1][k]){ printf("%d %d\n",i,k);}
           }
           else if(i==0&&k==w-1){
               if(high[i][k]>=high[i+1][k]&&high[i][k]>=high[i][k-1]){ printf("%d %d\n",i,k);}
           }
           else if(i==l-1&&k==0){
               if(high[i][k]>=high[i][k+1]&&high[i][k]>=high[i-1][k]){ printf("%d %d\n",i,k);}
           }
           else if(i==l-1&&k==w-1){
               if(high[i][k]>=high[i-1][k]&&high[i][k]>=high[i][k-1]){ printf("%d %d\n",i,k);}
           }
            else if(i==0&&k!=0&&k!=w-1){
               if(high[i][k]>=high[i][k+1]&&high[i][k]>=high[i][k-1]&&high[i][k]>=high[i+1][k]){ printf("%d %d\n",i,k);}
           }
           else if(i==l-1&&k!=0&&k!=w-1){
               if(high[i][k]>=high[i][k+1]&&high[i][k]>=high[i][k-1]&&high[i][k]>=high[i-1][k]){ printf("%d %d\n",i,k);}
           }
           else if(k==0&&i!=0&&i!=l-1){
               if(high[i][k]>=high[i][k+1]&&high[i][k]>=high[i+1][k]&&high[i][k]>=high[i-1][k]){ printf("%d %d\n",i,k);}
           }
           else if(k==w-1&&i!=0&&i!=l-1){
               if(high[i][k]>=high[i][k-1]&&high[i][k]>=high[i+1][k]&&high[i][k]>=high[i-1][k]){ printf("%d %d\n",i,k);}
           }
        }
    }
    return 0;
}
