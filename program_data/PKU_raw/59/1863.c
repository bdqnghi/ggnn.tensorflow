int main(){
    int q,p,n,m,i,s;
    char a[200][200];
    scanf("%d",&n);
    for(q=0;q<n;q++){
        for(p=1;p<n+2;p++){
            scanf("%c",&a[q][p]);
        }
    }
    scanf("%d",&m);
    for(i=1;i<m;i++){
        for(q=0;q<n;q++){
            for(p=1;p<n+2;p++){
                if(a[q][p]=='@'){
                    if(a[q-1][p]=='.'){
                        a[q-1][p]='*';
                    }
                    if(a[q+1][p]=='.'){
                        a[q+1][p]='*';
                    }
                    if(a[q][p-1]=='.'){
                        a[q][p-1]='*';
                    }
                    if(a[q][p+1]=='.'){
                        a[q][p+1]='*';
                    }
                }
            }
        }
        for(q=0;q<n;q++){
            for(p=1;p<n+2;p++){
               if(a[q][p]=='*'){
                   a[q][p]='@';
               }
            }
        }
    }
    s=0;
    for(q=0;q<n;q++){
        for(p=1;p<n+2;p++){
            if(a[q][p]=='@'){
               s=s+1;
            }
        }
    }
    printf("%d",s);
    return 0;
}










