int main()
{
    int n,i,x,y;
    int a[100000];

    cin>>n;
    for(i=0;i<n;i++) a[i]=1;
    int judge1,judge2;
    cin>>judge1>>judge2;
    if(judge1==0&&judge2==0) {cout<<"NOT FOUND"; return 0;}
    while(judge1!=0||judge2!=0)
    {
        if(judge1==judge2)
        {
            cin>>judge1>>judge2;
            continue;
        }
        else
        {
            a[judge1]=0;
            cin>>judge1>>judge2;
        }
    }
    int num=0,sum=0;

    for(i=0;i<n;i++)
    {
        if(a[i]==1)
        {
            sum++;
            num=i;
        }
    }
    if(sum==0||sum>1) cout<<"NOT FOUND";
    else cout<<num;
    return 0;
}
