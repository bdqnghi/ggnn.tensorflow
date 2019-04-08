int reverse(int num)
{
    int a=0,b=0,c=0;
    if (num==0) {c=num;}
    else if (num<0)
    {
         a=-num;
         do
         {b=a%10;
         c=(c+b)*10;
         a=a/10;}
         while (a>9);
         c=-c-a;
    }
    else
    {
         a=num;
         do
         {b=a%10;
         c=(c+b)*10;
         a=a/10;}
         while (a>9);
         c=c+a;
    }
    return c;
}
int main()
{
    int m,i;
    for (i=1;i<=6;i++)
    {scanf ("%d",&m);
    printf ("%d\n",reverse(m));}
    return 0;
}