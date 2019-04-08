

int main()
{
    int count, num, i, j, n, flag = 0;
    char str[100001];
    int check[26];
    cin >> num;
    for( count = 1; count <= num; count ++)
    {
         flag = 0;
         int check[26] = {0};
         cin >> str;
         n = strlen(str);
         for (i = 0; i < n; i++)
         {
             check[str[i] - 'a']++;
         }
         for (i = 0; i < n; i++)
         {
             if (check[str[i] - 'a'] == 1)
             {
                 cout << str[i] << endl;
                 flag = 1;
             }
             if(flag)
             break;
         }
             if(!flag)
             cout << "no" << endl;
    }
    return 0;
}