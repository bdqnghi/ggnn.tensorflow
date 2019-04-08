int main()
{
  int a;
  scanf("%d",&a);
  if(a==0) printf("0");
  while (a!=0)
  {
    printf("%d",a-(a/10)*10);
    a=a/10; 
  } 
}