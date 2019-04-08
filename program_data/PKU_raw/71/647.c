int type(int a)
{
    if(a % 4 != 0 || (a % 100 == 0 && a % 400 != 0))
    return 0;
    else 
    return 1;
}
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
            int m[2][13] = {0,31,28,31,30,31,30,31,31,30,31,30,31,0,31,29,31,30,31,30,31,31,30,31,30,31};
            int y,m1,m2;
            int sum = 0;
            cin >> y >> m1 >> m2;
            if(m1 > m2)
            {
                  for(int k = m2; k < m1; k++)
                  {
                          sum += m[type(y)][k];
                  }
                  if(sum%7==0)
                  {cout << "YES" << endl;}
                  else
                  {cout << "NO" << endl;}
            }         
            if(m1 < m2)   
            {
                  for(int k = m1; k < m2; k++)
                  {
                          sum += m[type(y)][k];
                  }
                  if(sum%7==0)
                  {cout << "YES" << endl;}
                  else
                  {cout << "NO" << endl;}
            }    
    }                                  
    return 0;
}