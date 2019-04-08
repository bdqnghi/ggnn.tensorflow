int calculate(int);
int main()
{
    int n, i, j = 0;
    int flag = 0, a;
    int str1[100000]; 
    int str2[100000];
    cin >> n;
    if(n == 0)
    {
        cout << "1" << endl;
        return 0;
    }
    else
    {
        if(n == 1)
        {
             cout << "2" << endl;
             return 0;
        }
    memset(str1, -1, sizeof(str1));
    memset(str2, 0, sizeof(str2));
    str1[0] = 2;
    for(i = 1; i < n; i++)
    {
          while(str1[j] != -1)
          {
                  str2[j] = str1[j] * 2 + str2[j];
                  if(str2[j] >= 10)
                  {
                        str2[j] = str2[j] - 10;
                        str2[j + 1]++;
                  }
                  j++;
          }
          if(i == n - 1)
                  break;
          for(j = 0; j < 1000; j++)
          {
                  str1[j] = str2[j];
                  str2[j] = 0;
          }
          j = 0;
    }
    j = 100000 - 1;
    while(str2[j] == 0)
          j--;
    for(i = j; i >= 0; i--)
    {
          cout << str2[i];
    }
}
    return 0;
}