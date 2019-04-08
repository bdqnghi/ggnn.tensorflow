
int main()
{
    int n,a1,a2,root1,root2,i,j;
    cin >> n;
    for (i = 6;i <= n;i = i + 2)
    {
        for (a1 = 3;a1 <= i / 2;a1 = a1 + 2)
        {
            root1 = (int)sqrt((double)a1);
            for (j = 2;j <= root1;j ++)
            {
                if (a1 % j == 0)
                break;
            }
            if (j == root1 + 1)
            {
                  a2 = i - a1;
                  root2 = (int)sqrt((double)a2);
                  for (j = 2;j <= root2;j ++)
                  {
                      if (a2 % j == 0)
                      break;
                  }
                  if (j == root2 + 1)
                  {
                        cout << i << "=" << a1 << "+" << a2 << endl;
                        break;
                  }
            }
        }
    }
    return 0;
}
