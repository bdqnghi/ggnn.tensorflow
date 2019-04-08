int b[40000]={0};
void zhishu(int n)
{
     int i,j;
     for(i=2;i<sqrt(n);i++)
     {
                     for (j=2;j<n/i+1;j++)
                     {
                         b[i*j]=1;
                     }
     }
}
int fenjie(int n,int m)
{
    int s=0,i;
    if (n<m) return 0;
    if (n==m||b[n]==0) return 1;
    for (i=m;i<n;i++)
    {
        if (n%i==0)
        {
                  s=s+fenjie(n/i,i);
        }
    }
    return s+1;
}
int main()
{
    int n,i,max=0,a[1000];
    cin>>n;
    for (i=0;i<n;i++) 
    {
        cin>>a[i];
        if (a[i]>max) max=a[i];
    }
    zhishu(max);
    for (i=0;i<n;i++) cout<<fenjie(a[i],2)<<endl;
    return 0;
}
