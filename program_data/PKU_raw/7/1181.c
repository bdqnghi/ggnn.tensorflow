//***************************** 
//*  ??: ???? 
//*  ????? 
//*  ???1200012941 
//*  ???2012?12?24? 
//***************************** 
int main()
{
    int i, j, k, flag = 0;
    char str[512], substr[256], replace[256];
    cin.getline(str, 512);
    cin.getline(substr, 256);
    cin.getline(replace, 256);
    int len1 = strlen(str);
    int len2 = strlen(substr);
    int len3 = strlen(replace);
    for (i = 0; i <= len1 - len2; i++)
    {
         k = i;
         for (j = 0; j < len2; j++)
         {
              if (str[k++] != substr[j])
                  break;
         }
         if (j == len2 && flag == 0)
         {
             int ii;
             for (ii = i; ii < i + len3; ii++)
             {
                  str[ii] = replace[ii - i];
             }
             flag = 1;
         }
    }
    for (i = 0; str[i] != '\0'; i++)
    {
        cout << str[i];
    }
    return 0;
}