int main()
{
  char c=',';
  int n,a=-1,b=-1;
  while(c==',')
  {
    scanf("%d%c",&n,&c);
    if(n>a)
    {
      b=a;
      a=n;
    }
	else
	{
      if(n>b&&n<a)
	  {
	    b=n;
	  }
 
	}
  }
  if(b!=-1)
  {
    printf("%d",b);
  }
  else
  {
    printf("No");
  }
  return 0;
}