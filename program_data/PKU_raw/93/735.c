
int main()
{
  int a;
  scanf("%d",&a);
  if(a%105==0) 
     printf("3 5 7");
  else
 {
  if(a%15==0)  printf("3 5");
  if(a%21==0)  printf("3 7");
  if(a%35==0)  printf("5 7");
  if(a%3==0&&a%5!=0&&a%7!=0) printf("3");
  if(a%5==0&&a%3!=0&&a%7!=0) printf("5");
  if(a%7==0&&a%5!=0&&a%3!=0) printf("7");
  if(a%7!=0&&a%5!=0&&a%3!=0) printf("n");


 }
 return 0;
}