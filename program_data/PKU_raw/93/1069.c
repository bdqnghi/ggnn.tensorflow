int main()
{
    int a[3]={3,5,7};
    int n;
    cin>>n;
    int i;
    int c[3],k=0;
    for(i=0;i<=2;i++)
    {
                     if(n%a[i]==0)
                     {
                                  c[k]=a[i];
                                  k++;
                      }
    }
    if(k==0)
    {cout<<"n";
    return 0;
    }
    for(i=0;i<k-1;i++)
    cout<<c[i]<<" ";
    cout<<c[k-1];
    return 0;
}
    