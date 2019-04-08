int main(){int n,k,i,j,m,t;
    scanf("%d,%d",&m,&n);
    int sz[10][10],a[10],b[10];
    for(i=0;i<m;i++){for(j=0;j<n;j++){scanf("%d",&(sz[i][j]));}}
    
    for(i=0;i<m;i++){t=sz[i][0];a[i]=0;
                     for(j=0;j<n;j++){
                                      if(t<sz[i][j]){t=sz[i][j];a[i]=j;}
                                      }}
    for(i=0;i<n;i++){t=sz[0][i];b[i]=0;
                     for(j=0;j<m;j++){
                                      if(t>sz[j][i]){t=sz[j][i];b[i]=j;}
                                      }}
    for(i=0;i<m;i++){
                     if(b[a[i]]==i){printf("%d+%d\n",i,a[i]);break;}
                     if(i==m-1){printf("No");}
                     }
    

    return 0;
    
}
