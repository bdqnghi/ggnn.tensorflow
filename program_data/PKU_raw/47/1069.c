int main()
{
    int i=0,n,p=0;
    int a[100]={0};
    cin >> n;
    for(i=0;i<n;i++)
    cin >> a[i];
    for(i=0;i<n/2;i++)
    {
      p=a[i];
      a[i]=a[n-1-i];
      a[n-1-i]=p;
      p=0;
    }
    for(i=0;i<n-1;i++)
    cout << a[i] << " ";
    cout << a[n-1];
    return 0;
}
