

int main()
{

   int s,a;
   scanf("%d",&s);
   for(a=1;a<=12;a++)
   {
      if((Day(a)+s-1)%7==5)
        printf("%d\n",a);
   }

   return 0;

}

int Day(a)
{
  int ii,aaa=0;
  for(ii=1;ii<a;ii++)
    {
    if(ii==1||ii==3||ii==5||ii==7||ii==8||ii==10||ii==12)
      aaa=aaa+31;
    if(ii==4||ii==6||ii==9||ii==11)
      aaa=aaa+30;
    if(ii==2)
      aaa=aaa+28;
    }

  return (aaa+13);
}