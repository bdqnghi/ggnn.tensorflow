
int z, q, s, l;

void check(int num)
{
     if (z == num) cout << "z " << num*10 << endl;
     if (q == num) cout << "q " << num*10 << endl;
     if (s == num) cout << "s " << num*10 << endl;
     if (l == num) cout << "l " << num*10 << endl;
     return ;
}

int main()
{
    for (z = 1; z <= 5; ++z)
      for (q = 1; q <= 5; ++q)
        if (z != q)
        {
              for (s = 1; s <= 5; ++s)
                if (z != s && q != s)
                  for (l = 1; l <= 5; ++l)
                    if (z != l && q != l && s != l)
                    {
                          if ((z + q) == (s + l) &&
                              (z + l) > (s + q) &&
                              (z + s) < q)
                              {
                                   check(5);
                                   check(4);
                                   check(3);
                                   check(2);
                                   check(1);
                              }
                    }
        }
    return 0;
}
