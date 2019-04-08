
int t;
int fun(int n)
{
int x;
if (n % 7 == 0) return 0;
while (n >= 10){
x= n - n/10*10;
if (x == 7) return 0;
n=n/10;
}
if (n % 7 == 0) return 0;
return 1;
}

int main()
{
 int n;
 int i,s = 0;
 scanf("%d",&n);
 for (i = 1;i <= n;++i)
 {
// printf("i=%d %d\n",i,fun(i));
s = s + i*i*fun(i);    
 }
 printf("%d",s);
 return 0;
} 