int main()
{
    int n,i,j,k,m,q=0;
    char hb[102][102],tmp[102][102];
    scanf("%d",&n);
    for(i=0;i<n;i++){
    scanf("%s",hb[i]);
    strcpy(tmp[i],hb[i]);
    }
    scanf("%d",&m);
    for(k=1;k<m;k++){
    for(i=0;i<n;i++){
                      for(j=0;j<n;j++){
                      if(hb[i][j]=='@'){
                                        tmp[i][j]='@';
                                        if(hb[i][j+1]=='.'&&j+1<n)
                                        tmp[i][j+1]='@';
                                        if(hb[i][j-1]=='.'&&j-1>=0)
                                        tmp[i][j-1]='@';
                                        if(hb[i-1][j]=='.'&&i-1>=0)
                                        tmp[i-1][j]='@';
                                        if(hb[i+1][j]=='.'&&i+1<n)
                                        tmp[i+1][j]='@';
                                        }
                                        }
                                        }
    for(i=0;i<n;i++){
                     for(j=0;j<n;j++){
                                      hb[i][j]=tmp[i][j];
                                      }
                                      }
                                      }
    for(i=0;i<n;i++){
                      for(j=0;j<n;j++){
                      if(tmp[i][j]=='@'){
                      q++;
                      }
                      }
                      }
    printf("%d",q);
    return 0;
}
