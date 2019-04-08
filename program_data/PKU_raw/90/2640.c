int num(int m, int n)
{
 if(m <= 1) return 1;
 if(n == 1) return 1;
 int sum = 0, i;
 for(i = 1; i <= n; i++)
 {
  if(i > m) break;
  sum += num(m - i, i);
 } 
 return sum;
}
int main()
{
 int n, i;
 scanf("%d", &n);
 for(i = 0; i < n; i++)
 {
  int M, N;
  scanf("%d%d", &M, &N);
  int r = num(M, N);
  printf("%d\n", r);
 }
 return 0;
}