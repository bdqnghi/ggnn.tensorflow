int a[11][11] = {0};
int n;
int tian;
void ff(int a[][11], int k)
{
     int aa[11][11];
     for(int i = 1; i <= 9; ++i)
        for(int j = 1; j <= 9; ++j)
        aa[i][j] = 0;
     for(int i = 1; i <= 9; ++i)
        for(int j = 1; j <= 9; ++j)
        {
                if(a[i][j] != 0)
                {
                    aa[i][j]+=2*a[i][j];
                    aa[i+1][j]+=a[i][j];
                    aa[i-1][j]+=a[i][j];
                    aa[i][j+1]+=a[i][j];
                    aa[i][j-1]+=a[i][j];
                    aa[i+1][j+1]+=a[i][j];
                    aa[i+1][j-1]+=a[i][j];
                    aa[i-1][j+1]+=a[i][j];
                    aa[i-1][j-1]+=a[i][j];
                }
        }
     for(int i = 1; i <= 9; ++i)
        for(int j = 1; j <= 9; ++j)
        a[i][j] = aa[i][j];
     if(k == tian)
     {
          for(int i = 1; i <= 9; ++i)
          {
              cout << a[i][1];
              for(int j = 2; j <= 9; ++j)
              {
                      cout << " " << a[i][j];
              }
              cout << endl;
          }             
     }
     else ff(a,k+1);
}
int main()
{
    cin >> n >> tian;
    a[5][5] = n;
    ff(a,1);
    //while(1);
    return 0;
}
