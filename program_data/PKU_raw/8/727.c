int main()
{
    int p,q,i,num;
    cin>>p>>q;
    int a[10],b[10];
    for(i=1;i<=p;i++)
    {
                     cin>>num;
                     a[i]=num;
    }
    for(i=1;i<=q;i++)
    {
                     cin>>b[i];
    }
    int pai(int a[],int x);
    pai(a,p);
    pai(b,q);
    for(i=1;i<=p;i++)
    {
                     cout<<a[i]<<" ";
    }
    for(i=1;i<=q-1;i++)
    {
                       cout<<b[i]<<" ";
    }
    cout<<b[q];
    return 0;
}
int pai(int a[],int x)
{
    int i,j;
    int m;
    for(i=1;i<=x-1;i++)
    {
                       for(j=1;j<=x-i;j++)
                       {
                                          if(a[j]>a[j+1])
                                          {
                                                         m=a[j+1];
                                                         a[j+1]=a[j];
                                                         a[j]=m;
                                          }
                       }
    }
    return a[x];
}