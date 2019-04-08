
int main()
{
     int acc[256] = { 0 };
     int count = 0, len = 0;
     char s1[201], s2[201];
     char* p = NULL;

     scanf("%s%s", s1, s2);
     for (p = s1; *p; p++) {
          acc[(int)*p]++;
          count++;
          len++;
     }
     for (p = s2; *p; p++) {
          if (acc[(int)*p] > 0) {
               acc[(int)*p]--;
               count--;
          }
          len--;
     }
     printf("%s\n", (len == 0 && count == 0) ? "YES" : "NO");
     return 0;
}
