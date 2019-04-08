int main()
{
    double male[50],female[50];
    double hit,t;
    char str[10];
    int n,i,j=0,k=0,l;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%s%lf",str,&hit);
        if (str[0]=='m') {
                         male[j]=hit;
                         j++;
                         }
                         else {
                              female[k]=hit;
                              k++;
                              }
        }
    for (i=0;i<j;i++){
        for (l=i;l<j;l++) {
            if (male[i]>male[l]){
               t=male[i];
               male[i]=male[l];
               male[l]=t;
               }
        }
    }
    for (i=0;i<k;i++){
        for (l=i;l<k;l++) {
            if (female[i]<female[l]){
               t=female[i];
               female[i]=female[l];
               female[l]=t;
               }
        }
    }
    for (i=0;i<j-1;i++){
        printf("%.2lf ",male[i]);
        }
    printf("%.2lf",male[j-1]);
    for (i=0;i<k;i++){
        printf(" %.2lf",female[i]);
        }
    return 0;
}