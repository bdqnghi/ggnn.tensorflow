int main()
{
    int a,b,k;
    char i;
    scanf("%d",&a);
    b=-1;
    while((i=getchar())==',')
    {
      scanf("%d",&k);
      if(k>a)
      {
      b=a;
      a=k;
      }
      if(k>b&&k<a)
      b=k;
      }
      if(a==b||b==-1)
      printf("No");
      else 
      printf("%d",b);
      return 0;
}
