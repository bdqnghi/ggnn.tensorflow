int main()
{
    int i,j,row,n;
    double s[1001],sum,c,ave,*f;
    scanf("%d",&row);
    for(i=1;i<=row;i++)
    {
        sum=0;
        f=s;
        scanf("%d",&n);
        for(j=0;j<n;f++,j++)
        {
            scanf("%lf",f);
            sum+=*f;
        }
        ave=sum/n;
        f=s;
        sum=0;
        for(j=0;j<n;f++,j++)
        {
            sum+=(*f-ave)*(*f-ave);
        }
        c=sqrt(sum/n);
        printf("%.5f\n", c);
    }
}
