int main()
{
 int n,a,b,c;
 a=3;
 b=5;
 c=7;
  scanf("%d",&n);
  if (n%3==0){
    printf("%d",a);
    if(n%5==0){
     printf(" %d",b);
     if (n%7==0)
      printf(" %d",c);
 }
   else if(n%7==0)
     printf(" %d",c);
  }
  else if(n%5==0){
     printf("%d",b);
     if (n%7==0)
      printf(" %d",c);
   }
  else if(n%7==0)
    printf("%d",c);
  else
  printf("n\n"); 
  
   return 0;
}  
