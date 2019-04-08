int main()
{
    int n,k=0;
    scanf("%d",&n);
    if(n%3==0)
    {
         printf("3");
         k++;
    }
    if(n%5==0)
    {
         if(k==0)
         {
                 printf("5");
                 k++;
         }
         else
         {printf(" 5");k++;}
    }
    if(n%7==0)
    {
         if(k==0)
         {
                 printf("7");
                 k++;
         }
         else
         {printf(" 7");k++;}
    }
    if(k==0)
    printf("n");
    return 0;
}
