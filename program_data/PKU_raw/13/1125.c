int main()
{
    int n,i,j,l,f,m,k,t=0;
    scanf("%d", &n);
    int x[n],y,z[n];
    for(i=0;i<=n-1;i++){
                        scanf("%d", &x[i]);
                        z[i]=0;
                        }    
    for(j=0;j<=n-1;j++){
                        f=0;
                        for(l=0;l<=j-1;l++){
                                            y=x[j]-x[l];
                                            if(y==0){f=1;}
                                            }
                        if(f==0){z[t]=x[j];
                                  t+=1;
                                  }
                        }
    for(m=0;m<=n-1;m++){
                        if(z[m]==0){break;}
                        }
    for(k=0;k<=m-1;k++){if(z[k]!=0){printf("%d", z[k]);}
                        if(k<=m-2){printf(" ");}
                       }                        
                        return 0;
}
    
