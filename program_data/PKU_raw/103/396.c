int main()
{
    char a[1002], t;
    int i, j = 0, k, num[1002], m[1002];
    
    for(i = 0; i <= 1000; i++)
    num[i] = 1;
    
    cin.getline(a, 1001);
    
    m[0] = 0;
    for(i = 0; a[i] != '\0'; i++)
    {
          if( (a[i] == a[i + 1])||(fabs(a[i] - a[i + 1]) == 32) )
          {
                  num[j]++;
                  m[j] = i;
          }
          else
          {
              m[j] = i;
              j++;
          }
    }
    
    for(i = 0; i < j; i++)
    {
          if( (a[m[i]] >= 'a')&&(a[m[i]] <= 'z') )
          {
                     t = a[m[i]] - 32;
                     cout << "(" << t << "," << num[i] << ")";
          }
          else
          {
              t = a[m[i]];
              cout << "(" << t << "," << num[i] << ")";
          }
    }
    
    return 0;
}
    
