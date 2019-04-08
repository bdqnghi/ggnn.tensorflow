void multiple(char a[],char b[])
{
    char c[1500]={0};
    int i,j,alen,blen;
    for(i=0;i<700;i++)
        for(j=0;j<700;j++)
        {
            c[i+j]+=a[i]*b[j];
            c[i+j+1]+=(c[i+j])/10;
            c[i+j]=c[i+j]%10;
        }
    for(i=0;i<1499;i++)    a[i]=c[i];
}

int main()
{
    int n,len,i;
    char tep[1500]={0},out[1500]={0};
    tep[0]=2;
    out[0]=1;
    cin>>n;
    while(n>0)
    {
        if(n%2==1)  multiple(out,tep);
        multiple(tep,tep);
        n=(n)/2;
    }
    i=1499;
    while(out[i]==0)i--;
    for(;i>=0;i--)
    cout<<(int)out[i];
    return 0;
}
