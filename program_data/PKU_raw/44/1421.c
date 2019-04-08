int reverse(int num)
{
  int a=0,i,b=1,j=0;
  int m[5]={0};
  for(i=0;(i<=5)&&(num!=0);i++)
  {
     m[i]=num%10;
     num=num/10;
     j++;
  }
     for(i=j-1;i>=0;i--)
     {
        a=a+m[i]*b;
        b=b*10;
     }
  return a;
}
main()
{
  int i,n,c;
  for(i=1;i<=6;i++)
  {
      scanf("%d",&n);
      c=reverse(n);
      printf("%d\n",c);
  } 
  getchar();
  getchar();
}
