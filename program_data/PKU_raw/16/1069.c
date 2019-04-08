int main()
{
     int a;
     scanf("%d",&a);
     int b;
     if(a==0) printf("0\n");
     else
     {
         while(a!=0)
         {
                b=a%10;
                a=a/10;
                printf("%d",b);
         }
         printf("\n");
     }
     getchar();
     getchar();
     getchar();
}
                
     
