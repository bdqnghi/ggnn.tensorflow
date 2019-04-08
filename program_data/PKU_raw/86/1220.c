

int main()

{
    int count;
    int sum = 0;
    int num;
    int n;
    int i;
    int j, k, l;
    int a[1000];
    cin >> count;
    for(l = 1; l <= count; l++)
    {
          sum = 0;
          cin >> n;
          if (n == 0)
          {
              cout << "60" <<endl;
              continue;
          }
          for (i = 0; i <= 999; i++)
          {
              a[i] = 1;
          }
          for (i = 0;i < n; i++)
          {
              cin >> num;
              a[num + 1 + 3 * i] = 0;
              a[num + 2 + 3 * i] = 0;
              a[num + 3 + 3 * i] = 0;
          }
          for (i = 1; i <= 60; i++)
          {
              sum = sum + a[i];
          }
          cout << sum <<endl;
    }
    return 0;
}