int main()
{
    char str[501];
    int i, j, k, l = 0, length, t1, t2, t;
    int a[501] = {0}, b[501] = {0};
    int leng[501] = {0};
    cin.getline(str, 501);
    length = strlen(str);
    for(i = 0; i < length; i++)
    {
          for(j = i + 1; j <length; j++)
          {
                if(str[i] == str[j])
                {
                          for(k = i + 1; k <= (j + i) / 2; k++)
                          {
                                if(str[k] == str[i + j - k])
                                {
                                      continue;
                                }
                                else
                                      break;
                          }
                          if(k - 1 == (j + i) / 2)
                          {
                               a[l] = i;
                               b[l] = j;
                               leng[l] = j - i;
                               l++;
                          }
                }
          }
    }
    for(i = 0; i < l -1; i++)
    {
          for(j = 0; j < l - i - 1; j++)
          {
                if(leng[j] > leng[j + 1])
                {
                           t1 = b[j + 1];
                           b[j + 1] = b[j];
                           b[j] = t1;
                           t2 = a[j + 1];
                           a[j + 1] = a[j];
                           a[j] = t2; 
                           t = leng[j +1];
                           leng[j+1] = leng[j];
                           leng[j] = t;
                }
          }
    }
    for(i = 0; i < l; i++)
    {
          while(a[i] <= b[i])
          {
                     cout << str[a[i]];
                     a[i]++;
          }
          cout << endl;
    }
    return 0;
}
