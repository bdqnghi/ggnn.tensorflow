int main() {
int n,m,i,s=0,j,p,q,w;
char sz[150][150];
scanf("%d",&n);

        for (i=0;i<n;i++) {
        scanf("%s",sz[i]);
          for (j=0;j<n;j++) {
         if (sz[i][j]=='@') {
                                     s++;
                           }
                           }
                           }    
scanf("%d",&m);
for (i=1;i<m;i++) {   
    for (j=0;j<n;j++) {
        for (p=0;p<n;p++) {
            if (sz[j][p]=='.'&&(sz[j+1][p]=='@'||sz[j-1][p]=='@'||sz[j][p+1]=='@'||sz[j][p-1]=='@')) {
                sz[j][p]='+';
               s++;
                 }
                          }
                      }
                 for (q=0;q<n;q++) {
                      for (w=0;w<n;w++){
           if (sz[q][w]=='+') {
                              sz[q][w]='@';
                              
                               }
                                       }
                                    }      
                 }
                 printf("%d\n",s);          
                   
             return 0;
            
             }
             