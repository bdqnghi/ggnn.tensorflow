int num[9][9] = {0}, flag[9][9] = {0};
int m;
int main()
{
    int n;
    cin >> m >> n;
    void fun ( int );
	num[4][4] = m;
    fun ( n );
    return 0;
}
void fun ( int n )
{
     if ( n == 0 )
     {
          int i, j;
          for ( i = 0; i < 9; i++ )
          {
              cout << num[i][0];
              for ( j = 1; j < 9; j++ )
              {
                  cout << " " << num[i][j];
              }
              cout << endl;
          }
     }
     else
     {
         int i, j;
         for ( i = 0; i < 9; i++ )
         {
             for ( j = 0; j < 9; j++ )
             {
                 if ( num[i][j] != 0 )
                 {
                      flag[i][j - 1] += num[i][j];
                      flag[i][j + 1] += num[i][j];
                      flag[i + 1][j] += num[i][j];
                      flag[i - 1][j] += num[i][j];
					  flag[i + 1][j - 1] += num[i][j];
					  flag[i - 1][j - 1] += num[i][j];
					  flag[i + 1][j + 1] += num[i][j];
					  flag[i - 1][j + 1] += num[i][j];
					  flag[i][j] += num[i][j];
                 }
             }
         }
         for ( i = 0; i < 9; i++ )
         {
             for ( j = 0; j < 9; j++ )
             {
                 num[i][j] += flag[i][j];
             }
         }
         for ( i = 0; i < 9; i++ )
         {
             for ( j = 0; j < 9; j++ )
             {
                 flag[i][j] = 0;
             }
         }
         fun ( n - 1 );
     }
}