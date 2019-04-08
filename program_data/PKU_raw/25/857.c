

int main()
{
    int n;
    cin>>n;
    int a[1001]={0};
    a[1000]=1;
    int i,j;
    while(n--)
    {
        for(i=1000;i>0;i--)
            a[i]*=2;       //????????*2
         for(i=1000;i>0;i--)
        {
            if(a[i]>=10)      //????????????10???
            {
                a[i]-=10;
                a[i-1]+=1;
            }
        }
    }
    for(i=0;i<=1000;i++)
    {
        if(a[i]!=0)
        {
            for(j=i;j<=1000;j++)       //??
            cout<<a[j];
            break;
        }
    }
    return 0;
}
