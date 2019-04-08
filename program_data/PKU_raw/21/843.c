

struct A
{
    double data;
    double differences;
}a[300+10],temp;

int n;

double getaverage(int n)
{
    double sum=0;
    for(int i=0;i<=n-1;i++)
    sum+=a[i].data;
    return sum/n;
}
int main()
{
    cin>>n;
    for(int i=0;i<=n-1;i++)
    cin>>a[i].data;
    double average=getaverage(n);
    for(int i=0;i<=n-1;i++)
    {
        a[i].differences=a[i].data-average;
        if(a[i].differences<0)
        {
            a[i].differences=-a[i].differences;
        }
    }
    for(int i=0;i<=n-1;i++)
        for(int j=n-1;j>i;j--)
        {
            if(a[i].differences<a[j].differences)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    double output[300+10];
    output[0]=a[0].data;
    int k=0;
    for(int i=1;i<=n-1;i++)
    {
        if(a[i].differences==a[0].differences)
        output[++k]=a[i].data;
    }

    for(int i=0;i<=k;i++)
        for(int j=k;j>=i;j--)
        {
            if(output[i]>output[j])
            {
                double temp1=output[i];
                output[i]=output[j];
                output[j]=temp1;
            }
        }

    for(int i=0;i<=k-1;i++)
    cout<<output[i]<<",";
    cout<<output[k]<<endl;

    return 0;
}
