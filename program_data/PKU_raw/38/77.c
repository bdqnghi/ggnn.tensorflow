int main()
{
    int m,n,j;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>n;
        double a[100];
        double (*p)=a;
        for( j=0;j<n;j++) cin>>*(p+j);
        double averge,sum=0,s;
        for( j=0;j<n;j++) sum=sum+*(p+j);
        averge=sum/n;
        sum=0;
        for( j=0;j<n;j++) sum=sum+(*(p+j)-averge)*(*(p+j)-averge);
        s=sqrt(sum/n);
        printf("%.5f\n", s);
    }
    return 0;
}
