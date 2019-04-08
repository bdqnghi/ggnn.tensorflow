int main()
{
    struct{
           char xb[7];
           double sg;}xs[50];
    char s1[5]={'m','a','l','e','\0'};
    char s2[7]={'f','e','m','a','l','e','\0'};
    int n,i,j1,j2,m1,m2,k1,k2;
    double m[50],w[50],t;
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
                     scanf("%s %lf\n",xs[i].xb,&xs[i].sg);}
    for(i=0,j1=0;i<n;i++){
                         if(strcmp(xs[i].xb,s1)==0){
                                              m[j1]=xs[i].sg;
                                              j1++;}
                                              }
    for(i=0,j2=0;i<n;i++){
                          if(strcmp(xs[i].xb,s2)==0){
                                              w[j2]=xs[i].sg;
                                              j2++;}
                                              }
    for(m1=1;m1<j1;m1++){
                           for(k1=j1-1;k1>m1-1;k1--){
                                                 if(m[k1-1]>m[k1]){
                                                                 t=m[k1-1];
                                                                 m[k1-1]=m[k1];
                                                                 m[k1]=t;}}}
    for(m2=1;m2<j2;m2++){
                           for(k2=j2-1;k2>m2-1;k2--){
                                                 if(w[k2-1]<w[k2]){
                                                                 t=w[k2-1];
                                                                 w[k2-1]=w[k2];
                                                                 w[k2]=t;}}}
    for(i=0;i<j1;i++){
                        printf("%.2lf ",m[i]);}
    for(i=0;i<j2-1;i++){
                        printf("%.2lf ",w[i]);}
    printf("%.2lf",w[j2-1]);
    return 0;
}