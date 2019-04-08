int main(){
    int n,number[300],i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++){
                     scanf("%d",&number[i]);
                     }
    for(i=0;i<n;i++){
                     for(j=i+1;j<n;j++){
                                        if(number[i]==number[j])
                                        number[j]=-3;
                                        }
                     }
    printf("%d",number[0]);
    for(i=1;i<n;i++){
                     if(number[i]>-1)
                     printf(",%d",number[i]);
                     }
    return 0;
}
