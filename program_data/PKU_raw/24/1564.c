int main(){
    int i,j=0,p,q,k,c,x=-1,d=-1,m;
    int b[10000];
    char a[10000];
    gets(a);
    k=strlen(a);
    for(i=0;i<k+1;i++){
                         if(a[i]==' '||a[i]==','){
                                                  b[j]=i;
                                                  j+=1;
                                                  }
                                                  }
    b[j]=k;
    c=b[0];
    p=c;
    q=c;
    for(i=1;i<j+1;i++){
                       c=b[i]-b[i-1]-1;
                       if(c>0){
                       if(c>p){
                               d=i-1;
                               p=c;
                               }
                       if(c<q){
                               x=i-1;
                               q=c;
                               }
                       else {
                            m=0;
                            }
                            }
                            else {
                                 m=0;
                                 }
                               }
                               if(d==-1){
                                        for(i=0;i<b[0]-1;i++){
                                  printf("%c",a[i]);
                                  }
                                  printf("%c\n",a[i]);
                                  }
                                  else {
    for(i=b[d]+1;i<b[d+1]-1;i++){
                                 printf("%c",a[i]);
                                 }
                                 
    printf("%c\n",a[i]);
}
    if(x==-1){
              for(i=0;i<b[0];i++){
                                  printf("%c",a[i]);
                                  }
                                  }
    else {
         for(i=b[x]+1;i<b[x+1];i++){
                                    printf("%c",a[i]);
                                    }
                                    }
    return 0;
}
                               
    
    
