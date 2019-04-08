//********************************
//* ???12.7??—????   **
//* ??:?? ???1000012888  **
//********************************
int main()
{
    int n, i, j, t, b, k, c;
    cin >> n;
    int a[100000][2];
    i = 0;
    cin >> a[i][0] >> a[i][1];
    while ((a[i][0] + a[i][1])!= 0)
    {
          i = i + 1;
          cin >> a[i][0] >> a[i][1];
    }
    t = i - 1;
    for (j = 0; j <= n - 1; j++)
    {
          b = 0;
          for (i = 0; i <= t; i++)
          {
                if (a[i][0] == j) 
                {
                            b = 1;
                            break;
                
                }
          }
          if(b == 0)
          {
               k = j;
               break; 
          }
    }
   c = 0;
   for (i = 0; i <= t; i++)
   {
       if (a[i][1] == k)
       c = c + 1;
   }
   if (c == n - 1)
   cout << k << endl;
   else 
   cout << "NOT FOUND" << endl;
   return 0;
} 
          