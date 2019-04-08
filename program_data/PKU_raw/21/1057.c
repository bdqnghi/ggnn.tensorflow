int main()
{
    int n,i,j,s[310],temp,y=0;
    double sum=0,p,c;
    cin>>n;
    for (i=0;i<n;i++)
    {
        cin>>s[i];
        sum+=s[i];
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<n-1-i;j++)
        {
            if (s[j]>s[j+1])
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
    p=sum/((double)n);
    if (p-s[0]<s[n-1]-p)
        c=s[n-1]-p;
    else
        c=p-s[0];
    for (i=0;i<n;i++)
    {
        if (fabs(p-s[i]-c)<1e-9||fabs(s[i]-p-c)<1e-9)
        {
            if (y!=0)
                cout<<",";
            y++;
            cout<<s[i];
        }
    }
    return 0;
}