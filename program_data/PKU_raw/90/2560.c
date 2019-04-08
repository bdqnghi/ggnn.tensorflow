int f(int m , int n)
{
if(m == 1 || n== 1 || m == 0) return 1; 
if(m < n) return f(m, m);
return f(m - n, n) + f(m, n - 1);
}
int main(void)
{
int n , m , z;
scanf("%d", &z);
while(z-- > 0)
{
scanf("%d%d", &m ,&n);
printf("%d\n",f(m, n));
}
return 0;
}