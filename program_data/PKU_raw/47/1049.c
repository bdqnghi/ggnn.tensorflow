int main ()
{
    int n,i,j;
    cin >>n;
    int a[1000],b[1000];
    for (i=0;i<n;i++)
    cin >>a[i];
    for (i=n-1;i>=1;i--)
    {
        cout <<a[i] <<' ';
    }
    cout <<a[0]<<endl;
    return (0);
}
