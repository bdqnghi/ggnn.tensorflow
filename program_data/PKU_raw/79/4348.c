
int main(void)
{
int i,j;
int s = 0;
int n;
int m;
for(j=1;j<=9;j++){
scanf("%d%d\n", &n,&m);
for (i = 1; i <= n; i++)
{
s = (s + m) % i;
}

printf("%d\n", s + 1);}

return 0;
}