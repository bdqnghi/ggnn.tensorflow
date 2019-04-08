int main(){
    int n,sz[N],i;
    float sum_a=0,sum_b=0,sum_c=0,sum_d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&sz[i]);
        if(sz[i]<=18){
           sum_a++;}
           else if(sz[i]<=35){
              sum_b++;}
              else if(sz[i]<=60){
                   sum_c++;}
                   else
                   sum_d++;
        }
    sum_a=(float)100.00*sum_a/n;
    sum_b=(float)100.00*sum_b/n;
    sum_c=(float)100.00*sum_c/n;
    sum_d=(float)100.00*sum_d/n;
    printf("1-18: %.2f%%\n19-35: %.2f%%\n36-60: %.2f%%\n60??: %.2f%%",sum_a,sum_b,sum_c,sum_d);
    return 0; 
    }