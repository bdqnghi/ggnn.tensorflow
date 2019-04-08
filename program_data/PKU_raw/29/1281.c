int main()
{
    int m,n;
    float sum;
    int a[1000]={0};
    scanf("%d",&m);
    int r=0;
    while(r<m){
    scanf("%d",&n);
    int i=0;
    while(i<=n){
    if(i==0){
    a[i]=1;
    }else if(i==1){
    a[i]=2;
    sum=1.0*a[1]/a[0];
    }else{
    a[i]=a[i-1]+a[i-2];
    sum+=1.0*a[i]/a[i-1];
    }
    i++;
    }
    printf("%.3f\n",sum);
    r++;
    }
    return 0;
}