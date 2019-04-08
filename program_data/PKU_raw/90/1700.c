int main()
{
    int way(int x,int y);
    int t,i,m[100],n[100],p[100];
    scanf("%d", &t);
    for(i=1;i<=t;i++){scanf("%d%d", &m[i],&n[i]);
                      p[i]=way(m[i],n[i]);
                      printf("%d\n", p[i]);}
    return 0;
    }
    
int way(int x,int y)
{
    int s[100][100],j,k,w=0;
    for(j=0;j<=50;j++){s[0][j]=1;s[j][1]=1;s[1][j+1]=1;}
    for(j=2;j<=50;j++){
                        for(k=2;k<=50;k++){
                                           if(k>j){s[j][k]=s[j][k-1];}
                                           else{s[j][k]=s[j][k-1]+s[j-k][k];}
                                           }
                        }    
    return(s[x][y]);
    }

