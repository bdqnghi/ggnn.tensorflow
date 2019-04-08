int main(){
    int n,i,f,m;
    char sex[40][7];
    double height[40],female[40],male[40],c;
    scanf("%d",&n);
    f=0;
    m=0;
    for(i=0;i<n;i++){
                     scanf("%s %lf",sex[i],&height[i]);
                     if(sex[i][0]=='f'){
                                        female[f]=height[i];
                                        f++;
                                        }
                     if(sex[i][0]=='m'){
                                        male[m]=height[i];
                                        m++;
                                        }
                                        }
    for(n=1;n<m;n++){
                     for(i=0;i<m-n;i++){
                                        if(male[i]>male[i+1]){
                                                              c=male[i];
                                                              male[i]=male[i+1];
                                                              male[i+1]=c;
                                                              }
                                                              }
                                                              }
    for(n=1;n<f;n++){
                     for(i=0;i<f-n;i++){
                                        if(female[i]<female[i+1]){
                                                              c=female[i];
                                                              female[i]=female[i+1];
                                                              female[i+1]=c;
                                                              }
                                                              }
                                                              }
    for(i=0;i<m;i++){
                     printf("%.2lf ",male[i]);
                     }
    for(i=0;i<f-1;i++){
                       printf("%.2lf ",female[i]);
                       }
    printf("%.2lf",female[i]);
    return 0;
}