
int main(int argc, char *argv[])
{
    int p[1000][1000],i,j,a,b,a1,b1,n,s;
    scanf("%d",&n);
    for(i=0;i<n;i++){
                     for(j=0;j<n;j++){
                                      scanf("%d",&p[i][j]);
                                      }
                                      }
    for(i=0;i<n;i++){
                     for(j=0;j<n;j++){
                                      if(p[i][j]==0){
                                                     a=i;
                                                     b=j;
                                                     break;}
}
                                      if(p[a][b]==0){
                                                     break;
                                                     }
                                                     }
    for(i=n-1;i>=0;i--){
                        for(j=n-1;j>=0;j--){
                                            if(p[i][j]==0){
                                                           a1=i;
                                                           b1=j;
                                                           break;
                                                           }
 }
                                            if(p[a1][b1]==0){
                                                             break;
                                                             }
                                                           }
    s=(a1-a-1)*(b1-b-1);
    printf("%d",s);
    return 0;
}