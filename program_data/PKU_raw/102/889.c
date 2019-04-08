int main(){
    int n,i,j;
    float sg[45],e;
    char xb[45][8],f[8];
    scanf("%d",&n);
    for(i=0;i<n;i++){
          scanf("%s",xb[i]);
          scanf("%f",&sg[i]);
    }
    for(j=1;j<=n;j++){
        for(i=0;i<n-j;i++){
                if(xb[i][0]<xb[i+1][0]||
                   (xb[i][0]==xb[i+1][0]&&xb[i][0]=='f'&&sg[i]<sg[i+1])||
                   (xb[i][0]==xb[i+1][0]&&xb[i][0]=='m'&&sg[i]>sg[i+1])){
                          e=sg[i];
                          sg[i]=sg[i+1];
                          sg[i+1]=e;
                          strcpy(f,xb[i]);
                          strcpy(xb[i],xb[i+1]);
                          strcpy(xb[i+1],f);
                }
        }
    }
    printf("%.2f",sg[0]);
    for(i=1;i<n;i++){
                     printf(" %.2f",sg[i]);
    }
    scanf("%d",&n);
    return 0;
}