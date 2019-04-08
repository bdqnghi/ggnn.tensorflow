int main()
{
    int n,k = 0,flag = 0,i,j,a[200][200],o[4][2]={{0,1},{0,-1},{1,0},{-1,0}},l,ans = 0,min;
    double b[1000],t,p,q;
    cin >>n;
    for (t = 1;t<=n;t++)
    {
    ans = 0;
    for (i = 0; i<= n-1; i++)
     for (j = 0; j<= n-1; j++)
     cin >>*(*(a+i)+j);
    for (k = 1;k<=n -1;k++)
    {
     for (i = 0; i<= n-k; i++)
       {
       min=**(a+i);
       
     for (j = 1; j<= n-k; j++)
     if (*(*(a+i)+j)<min)
     min =*(*(a+i)+j);
      for (j = 0; j<= n-k; j++)
      *(*(a+i)+j)= *(*(a+i)+j) -min;
      }
      
      for (j = 0; j<= n-k; j++)
       {
       min=*(*a+j);
     for (i = 1; i<= n-k; i++)
     if (*(*(a+i)+j)<min)
     min =*(*(a+i)+j);
      for (i = 0; i<= n-k; i++)
      *(*(a+i)+j)= *(*(a+i)+j) -min;
      }
       ans = ans + *(*(a+1)+1);
       for (i = 1; i<= n-k-1; i++)
       for (j = 0;j <= n-k;j++)
       *(*(a+i)+j) = *(*(a+i+1)+j);
       for (j = 1; j<= n-k-1; j++)
       for (i = 0;i<=n-k;i++)
        *(*(a+i)+j) = *(*(a+i)+j + 1);
       
       }
       cout<<ans<<endl;
        
    }


}
