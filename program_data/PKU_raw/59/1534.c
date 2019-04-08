//******************************
//* ????????          ** 
//* ?????? 1300012948   ** 
//* ???2013.11.2           ** 
//******************************
int main()
{
     char str[102][102] = {'#'};
     int n, m, count = 0;
     cin >> n;// ???????? 
     cin.get();// ???? 
     for(int i = 1; i <= n; i++)// ???????????? 
     {
             cin.getline(str[i],102); 
     }
     cin >> m;// ???? 
     if(m == 1)// ??????????????????? 
     {
          for(int i = 1; i <= n; i++)
          {
                  for(int k = 0; k <= n - 1; k++)
                  {
                          if(str[i][k] == '@')
                          count++;
                  }
          }
          cout << count << endl;
     }
     else // ??????????????????????? 
     {
         for(int j = 1; j < m; j++)// ?m????????m - 1? 
         {
                 for(int i = 1; i <= n; i++)// ??n??n?????^???j?????? 
                 {
                         for(int k = 0; k <= n - 1; k++)
                         {
                                 if(str[i][k] == '@')
                                 {
                                          if(str[i - 1][k] == '.')
                                          str[i - 1][k] = '^';
                                          if(str[i + 1][k] == '.')
                                          str[i + 1][k] = '^';
                                          if(str[i][k + 1] == '.')
                                          str[i][k + 1] = '^';
                                          if(str[i][k - 1] == '.')
                                          str[i][k - 1] = '^';
                                 }
                         }
                 }
                 for(int i = 1; i <= n; i++)// ??n??n?????@???j????? 
                 {
                         for(int k = 0; k <= n - 1; k++)
                         {
                                 if(str[i][k] == '^')
                                 str[i][k] = '@';
                         }
                 }
         }
         for(int i = 1; i <= n; i++)// ??????????m?????? 
         {
                 for(int k = 0; k <= n - 1; k++)
                 {
                         if(str[i][k] == '@')
                         count++;
                 }
         }
         cout << count << endl;// ???m?????? 
     }
     return 0;
} 