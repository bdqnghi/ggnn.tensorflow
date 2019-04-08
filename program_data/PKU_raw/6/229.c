int main()
{
    int k,n,m,i,j,s;
    int a[100][100];
    int (*p)[100];
    int sum[100] = {0};
    cin >> k;
    for(s = 0;s < k;s++)
    {
       p = a;
       cin >> n >> m;
       for(i=0;i<n;i++)
       {
          for(j=0;j<m;j++)
          cin >> *(*(p+i)+j);
       }
       for(i = 0;i<n;i++)
       {
             if((i == 0)||(i == n-1))
             for(j = 0;j<m;j++)
             sum[s] = sum[s] + *(*(p+i)+j);
             else
             sum[s] = sum[s] + *(*(p+i))+*(*(p+i)+m-1);
          }
       }
    for(i = 0;i<k;i++)
    cout << sum[i] << endl;
    return 0;
}