
int main()
{
    int n;
    int sum,sz=0;
    scanf("%d",&n);
    int a[300],b[300]={0};
    int i,j=0;
    for(i=0;i<n;i++){
                     scanf("%d",&a[i]);
                     }
    printf("%d",a[0]);
    for(i=0;i<n;i++){
                     for(j=0;j<i;j++){
                                      sum=0;
                                      if(a[i]==a[j]){
                                                     sum=sum+1;
                                                     break;}}
                               if(sum==0){
                                             printf(",%d",a[i]);}
                                                 }
    return 0;

}