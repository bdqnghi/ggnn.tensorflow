main()
{
 int a,b;
 scanf("%d",&a);
 if(a==1)
  printf("End");
 else
 {
  while(a!=1)
 {
  while(a%2==0)
 {
  b=a/2;
  printf("%d/2=%d\n",a,b);             
  a=b;
 }
 while(a%2!=0 && a!=1)
 {
  b=a*3+1;
  printf("%d*3+1=%d\n",a,b);
  a=b;             
 }
 }
 printf("End");
 }     
}
