int main()
{
    int n,i,j,a,p=1,q=1,e;
    float  sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d",&a);
        for(j=1;j<=a;j++){
           e=p;
           p=p+q;
           q=e;
           sum+=(float)p/q;  
        }
        printf("%.3f\n",(float)sum);
        sum=0;
        p=1;
        q=1;
    }
    return 0;
}