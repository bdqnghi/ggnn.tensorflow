int main()
{
   int a;
   scanf("%d",&a);
   if(a==1)
      printf("End");
      else
      {
        do{
        if(a%2==0)
          {printf("%d",a);
           a=a/2;
           printf("/2=%d\n",a);
          }
        else 
          {
           printf("%d*3+1=",a);
           a=3*a+1;
           printf("%d\n",a);
          }
          }
        while(a!=1);
        printf("End");
      }
   getchar();
   getchar(); 
   return 0;
}