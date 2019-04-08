
int main()
{
    int i=0,j=0,n;
    int a[10000]={0},b[100]={0};
    b[0]=1;b[1]=1;
    cin >> n;
    for(i=0;i<n;i++)
     {cin >> a[i];}
    for(j=2;j<22;j++)
     {b[j]=b[j-1]+b[j-2];}
    for(i=0;i<n;i++)
    cout << b[a[i]-1] << endl;
  
    return 0;
}
