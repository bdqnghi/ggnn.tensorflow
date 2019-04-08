

int main()
{
  int n=0;
  int a=0;  int b=0;  int c=0;  int d=0;
  double sum=0;
  int buffer=0;

  scanf("%d", &n);
  for (int i=1; i<=n; ++i)
  {
    scanf("%d", &buffer);
	if (buffer>=1 && buffer<=18)
	{
	  ++a;
	}
	if (buffer>=19 && buffer<=35)
	{
	  ++b;
	}
	if (buffer>=36 && buffer<=60)
	{
	  ++c;
	}
	if (buffer>=61)
	{
	  ++d;
	}
	
  }
  sum = a+b+c+d;
  printf("1-18: %.2lf%%\n", a/sum*100);
  printf("19-35: %.2lf%%\n", b/sum*100);
  printf("36-60: %.2lf%%\n", c/sum*100);
  printf("60??: %.2lf%%\n", d/sum*100);
  return 0;
}