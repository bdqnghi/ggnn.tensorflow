int main(){
    int n,m,sum;
    int i,p,q,r,s;
    char f[102][102],g[102][102]={0};
    scanf("%d",&n);
//    printf("%d",n);
    for(p=1;p<n+1;p++){
        for(q=1;q<n+1;q++){
            scanf("%c",&f[p][q]);
//            printf("%d%d=%c",p,q,f[p][q]);
            if(f[p][q]=='\n'){
                q--;
            }
        }
    }
//    printf("p=%dq=%d\n",p,q);
//     goto lp;
//    printf("%c",f[2][3]);
    scanf("%d",&m);
//    printf("%d\n",m);
//    goto lp;
    for(i=1;i<m;i++){
        for(p=1;p<n+1;p++){
            for(q=1;q<n+1;q++){
                if(f[p][q]=='@'){
//                    printf("%d%d\n",p,q);
//                    for(r=p-1;r<p+2;r++){
//                        for(s=q-1;s<q+2;s++){
//                            if(f[r][s]=='.'){                 
//                                g[r][s]='@';
//                                printf("%c",g[r][s]);
//                                  printf("@=%d%d\n",r,s);
//                            }
//                        }
                    if(f[p-1][q]=='.'){
                        g[p-1][q]='@';
                    } 
                    if(f[p][q-1]=='.'){
                        g[p][q-1]='@';
                    }
                    if(f[p][q+1]=='.'){
                        g[p][q+1]='@';
                    }
                    if(f[p+1][q]=='.'){
                        g[p+1][q]='@';
                    }
                    }
                }
            }
        
//        for(p=1;p<n+1;p++){
//            for(q=1;q<n+1;q++){
//                printf("%c",g[p][q]);
//            }
//        }
//        goto lp;
        for(p=1;p<n+1;p++){
            for(q=1;q<n+1;q++){
                if(g[p][q]=='@'){
                    f[p][q]='@';
                }
            }
        }
    }
    for(p=1,sum=0;p<n+1;p++){
        for(q=1;q<n+1;q++){
            if(f[p][q]=='@'){
                sum++;
            }
//            printf("%c",f[p][q]);
        }
    }
    printf("%d",sum);
    lp:return 0;
}




