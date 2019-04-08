int f(int n)
{
   if (n==1)
      return 1;
   else if (n==2)
      return 1;
   else if (n>2)
      return(f(n-1)+f(n-2));
}
int main()
{
   int m,a;
   scanf("%d",&m);
   while (m--)
   {
      scanf("%d",&a);
      printf("%d\n",f(a));
   }

}
