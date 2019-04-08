int main()
{
    char a[100],b[100];
    int i,j,k1,k2,l,l0;
    cin>>a;
    cin>>b;
    l=strlen(a);
    l0=strlen(b);
    if(l==l0)
    {
    k1=k2=l;
    for(i=0;i<l;i++)
    {
        for(j=0;j<l;j++)
        {
            if(a[i]==b[j])
            {
                k2--;
                b[j]='0';
                break;
            }
        }
        k1--;
    }
    if(k1==0&&k2==0)
    cout<<"YES";
    else
    cout<<"NO";
    }
    else
    cout<<"NO";
   
    return 0;
}
