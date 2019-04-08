

void once(int a[1000])
{
    for(int i=0;i<=999;i++)
    a[i]*=2;

    for(int i=0;i<=999-1;i++)
    {
        if(a[i]>=10)
        {
            a[i+1]=a[i]/10+a[i+1];
            a[i]=a[i]%10;
        }
    }
}

int main()
{

    int a[1000]={0};
    a[0]=1;

    int n;
    cin>>n;

    for(;n>=1;n--)
    once(a);

    int end;
    for(int i=999;i>=0;i--)
    if(a[i]!=0){end=i;break;}

    for(int i=end;i>=0;i--)
    cout<<a[i];
    cout<<endl;
}
