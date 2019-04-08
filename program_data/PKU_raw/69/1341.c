

const int maxn = 250 + 10;

int a[maxn], b[maxn], c[maxn];
int la, lb, lc;
char s[maxn], t[maxn];

int main()
{
    //freopen("8.in", "r", stdin);
    
    while (scanf("%s%s",  s, t) != EOF)
    {
          int la = strlen(s);
          int lb = strlen(t);
          memset(a, 0, sizeof(a));
          memset(b, 0, sizeof(b));
          memset(c, 0, sizeof(c));
          for (int i = 0; i < la; i ++)
              a[la - i - 1] = s[i] - '0';
          for (int i = 0; i < lb; i ++)
              b[lb - i - 1] = t[i] - '0';
          while (a[la - 1] == 0 && la > 1)
                la --;
          while (b[lb - 1] == 0 && lb > 1)
                lb --;
          if (la > lb)
             lc = la;
          else lc = lb;
          int add = 0;
          for (int i = 0; i < lc;i ++)
          {
              c[i] = (add + a[i] + b[i]) % 10;
              add = (add + a[i] + b[i]) / 10;
          }
          if (add != 0)
             c[lc ++] = add;
          for (int i = lc - 1; i >= 0; i --)
              printf("%d", c[i]);
          printf("\n");
    }
    
    //while (1);
}
