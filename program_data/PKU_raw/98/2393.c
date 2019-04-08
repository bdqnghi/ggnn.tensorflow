
int main()
{
    char a[40], *p;
    int n, s = 0, len = -1, flag = 0;
    p = a;
    cin >> n;
    while (s < n)
    {
          s++;
          cin >> a;
          len = len + 1 + strlen(a);
          if (len <= 80)
          {
               if (flag == 0)
               {
                    cout << a;
                    flag = 1;
               }
               else
               {
                   cout << ' ' << a;
               }
          }
          if (len > 80)
          {
               cout << endl;
			   cout << a;
               len = strlen(a);
          }
    }      
	return 0;
}
