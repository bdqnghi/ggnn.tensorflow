int a[301];
int b[301];
int select(int n, int m){int tp=0;
                         for(int i=1;i<=n;i++){
                                 b[i]=i;a[i]=i;}/* give number*/
                                 for(int i=1;i<=n;i++){
                                 tp =  m%(n+1-i);
                                 if(tp!=0) {for(int j=1;j<=n-i-tp+1;j++){a[j] = b[j+tp];}
                                            for(int j=n-i-tp+2;j<=n-i;j++){a[j]=b[j-(n-i-tp+1)];}}
                                            for(int j=1;j<=n+1-i;j++){b[j]=a[j];}}
                                
                                 return a[1];
                                 }
                                 


main()
{   int n,m;
 while(1){
    scanf("%d %d",&n,&m);
    if(m==0&&n==0){break;}
    printf("%d\n",select(n,m)) ;}
      }
