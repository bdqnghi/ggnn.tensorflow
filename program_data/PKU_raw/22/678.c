int main()
{
    int x[300],l,i,j,m,n,o,y,g=0,f=0;
    for(l=0;l<=300;l++){x[l]=99999;}
    for(i=0;i<=300;i++){scanf("%d,", &x[i]);}
    for(i=0;i<=300;i++) if (x[i]==100000) x[i]=99999; 
    for(j=0;j<=300;j++){
                        y=x[0]-x[j];
                        if(y<-89999&&g==0){f=1;}
                        if(y!=0){g=1;}                     
                        }
    
    if(f==1){printf("No");} 
    if(g==1&&f==0){
    if(x[0]>x[1]){m=x[0];
                  n=x[1];}
    else{m=x[1];
         n=x[0];}
    if(m==n) n = -99999;
    for(o=2;o<=300;o++){if(x[o]!=99999)
                       {
                        if(x[o]>m){n=m;
                                   m=x[o];}
                        if(x[o]<m){if(x[o]>n){n=x[o];}}
                        }
                        }
    printf("%d", n);}
    return 0;
}
