int main()
{
    int a;
    double b;
    char d;
    scanf("%d",&a);
    if(a%3==0&&a%5==0&&a%7==0)
    {
      printf("3 5 7\n",b);
      }
    else if(a%3==0&&a%5==0)
    {
      printf("3 5\n",b);
      }
    else if(a%3==0&&a%7==0)
    {
         printf("3 7\n",b);
         }
    else if(a%5==0&&a%7==0)
    {
         printf("5 7\n",b);
         }
    else if(a%3==0)
    {
         printf("3\n",b);
         }
    else if(a%5==0)
    {
         printf("5\n",b);
         }
    else if(a%7==0)
    {
         printf("7\n",b);
         }
    else
    {
        printf("n",d);
        }
    return 0;
}