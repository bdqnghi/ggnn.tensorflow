int main()
{
    int a[100000];
    int n;
    int a1,a2,a3,a4,a5;
    int c;
    int b;
    int k;
    cin>>n;
    for(a1=0;a1<n;a1++)
    {
        cin>>a[a1];
    }
    cin>>k;
    for(a2=n-1;a2>=0;a2--)
    {
        if(a[a2]!=k)
        break;
    }
    for(b=0,a3=a2;a3>=0;a3--)
    {
        if(a[a3]==k)
        {
            b=b+1;
        }
    }
    for(c=0,a4=0;a4<=a2;)
    {
        if(a[a4]!=k)
        {
            a[c]=a[a4];
            c++;
            a4++;
        }
        else
        {
            a4++;
            continue;
        }
    }
    for(a5=0;a5<=c-1;a5++)
    {
        if(a5!=c-1)
        cout<<a[a5]<<" ";
        if(a5==c-1)
        cout<<a[a5];
    }
    return 0;
}
