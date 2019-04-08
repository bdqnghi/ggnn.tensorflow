
int main(){
    int n,i,j,k,m,f;
    char t;
    double e,d;
    char a[40][7];
    double b[40];
    double male[40];
    double female[40];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    scanf("%c%s %lf",&t,&a[i],&b[i]);
    }
    j=0;k=0;
    for(i=0;i<n;i++)
    {
    if(a[i][0]=='m') {male[j]=b[i];j++;}
    if(a[i][0]=='f') {female[k]=b[i];k++;}
    }
    for(i=0;i<j;i++){
                     for(m=i;m<j;m++){
                                      if(male[m]<male[i]){
                                                          e=male[m];
                                                          male[m]=male[i];
                                                          male[i]=e;
                                                          }
                                      }
                     }
    for(i=0;i<k;i++){
                     for(f=i;f<k;f++){
                                      if(female[f]>female[i]){
                                                          d=female[f];
                                                          female[f]=female[i];
                                                          female[i]=d;
                                                          }
                                      }
                     }
                     if(male[0]){printf("%.2lf",male[0]);}
    for(i=1;i<j;i++){
                     printf(" %.2lf",male[i]);
                     }
    for(i=0;i<k;i++){
                     printf(" %.2lf",female[i]);
                     }
    
    return 0;
}
