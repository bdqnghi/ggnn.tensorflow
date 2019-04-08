
void function(int,int);

int main()
{
   int n;
   int i;
   int k=0;

   scanf("%d",&n);
   for(i=0;i<3;i++)
   {
      if(n%(2*i+3)==0)
      {
         k++;
      }
   }
   for(i=0;i<3;i++)
   {
      if(n%(2*i+3)==0)
      {
         printf("%d",(2*i+3));
         if(k>1)
         {
            printf(" ");
            k--;
         }
      }

   }
   if(k==0)
   {
      printf("n");
   }
   return 0;

}