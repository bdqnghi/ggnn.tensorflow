int wer(int a)
{
      int n,i;
      n=a%2;
     if(n==1)
          i=3*a+1;
     else
          i=a/2;
     return i;
}
int main()
{
     int a;
     scanf("%d",&a);
if(a==1)
printf("End");
else
{
     for(;;)
     {
     if(a%2==1)
     {
                    printf("%d*3+1=%d\n",a,wer(a));
                     a=wer(a);
     }
     else
            {
                    printf("%d/2=%d\n",a,wer(a));
                    a=wer(a);
            }
      if(a==1)
      {printf("End");
      break;
      }}}
}
