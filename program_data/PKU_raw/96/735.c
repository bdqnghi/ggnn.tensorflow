//*************************
//*  ?????13 
//*  ????? 
//*  ???1200012941 
//*  ???2012?11?12? 
//*************************
int main()
{
    int i, count = 0, y;
    char num[100];
    int s[100] = {0};
    cin >> num;
    y = num[0] - '0';
    for (i = 1; num[i] != '\0'; i++)
    {
         s[i] = (y * 10 + num[i] - '0') / 13;
         y = (y * 10 + num[i] - '0') % 13;
         count++;
    }
    if (count == 0)
    {
       cout << 0 << endl << y << endl;
    }
    if (count > 0)
    {
       if (((num[0] - '0') * 10 + num[1] - '0') / 13 == 0)
       {
          if (s[2] == 0)
          {
             cout << 0 << endl << (num[0] - '0') * 10 + num[1] - '0' << endl;
          }
          else
          {
             for (i = 2; i <=  count; i++)
             {
                 cout << s[i]; 
             }
             cout << endl << y << endl;
          }
       }
       else
       {
          for (i = 1; i <=  count; i++)
          {
              cout << s[i]; 
          }
          cout << endl << y << endl;
       }
    }
    return 0;
}                 