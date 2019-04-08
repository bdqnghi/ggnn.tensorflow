long num;
long digit[5];
int main()
{
   int count=0,i;
   long number;
   do
       {
           scanf("%ld",&num);
       }
   while(num<0||num>99999);
   count=0;
   number=num;
   do
       {
           digit[count++]=number%10;
           number=number/10;
       }
   while(number>0);
   for(i=0;i<count;i++)
       printf("%ld",digit[i]);
}