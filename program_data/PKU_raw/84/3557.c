int main()
{
    int i;
    scanf("%d",&i);
    int a,max=0,sec=0;
    while(i>0&&i<100)
    {
       scanf("%d",&a);
       if(a>=max)
       {sec=max;
       max=a;}
       if(a<max&&a>sec)
       sec=a;
       i--;
    }
printf("%d\n",max);
printf("%d\n",sec);
return 0;
}