int main()
{
    double a[301];
    int n;
    double sum=0;
    int i;
    cin>>n;
    for(i=1;i<=n;i++)
    {

        cin>>a[i];
        sum+=a[i];

    }
    double aver=sum/n;

    double b[301];
    double max=0.0;
    for(i=1;i<=n;i++)
    {
        if(a[i]>aver) b[i]=a[i]-aver;
        else b[i]=aver-a[i];
        if(b[i]>max) max=b[i];
    }
    int num=0;

    double c[301];

    for(i=1;i<=n;i++)
    {
        if(b[i]==max)
        {
            num++;
            c[num]=a[i];
        }

    }
    for(i=1;i<num;i++) cout<<c[i]<<",";
    if(i==num) cout<<c[i];
    return 0;


}
