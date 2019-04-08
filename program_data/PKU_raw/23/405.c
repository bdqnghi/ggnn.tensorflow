int main()
{
    char a[100], b[20][10];
    int i, j, k, t = 0, sign = 0;
    
    for(i = 0;i <= 20;i++)
    {
          for(j = 0;j <= 10;j++)
          {
                b[i][j] = '\0';
          }
    }
    
    cin.getline(a, 100);
    for(j = 0;sign != 1;j++)
    {
          for(k = 0, i = t;a[i] != ' ';k++, i++)
          {
                if(a[i] == '\0')
                {
                        sign = 1;
                        break;
                }
                b[j][k] = a[i];
          }
          t = i + 1;
    }
    
    for(i = 10;i > 0;i--)
    {
          if(b[i][0] != '\0')
          cout << b[i] << " ";
    }
    cout << b[0];
    
    return 0;
}