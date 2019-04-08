
int main()
{
  // for every point i, point[2i] stands for [i,i], point[2i+1] stands for (i,i+1)
  // if point[i] == 1, it stands that this interval is included
  int n, point[2001];
  scanf("%d", &n);
  int i;
  int left = 2001;
  int right = 0;
  for (i = 1 * 2; i <= 1000 * 2; i++)
    point[i] = 0;
  for (i = 1; i <= n; i++)
    {
      int a, b;
      scanf("%d%d", &a, &b);
      if (a < left)
	left = a; // find the leftest point
      if (b > right)
	right = b; // find the rightest point
      int j;
      for (j = a * 2; j <= b * 2; j++)
	point[j] = 1;
    }
  int in = 0; // if in an interval, then value is 1, or the value is 0
  int num = 0; // number of interval(s)
  for (i = 1 * 2; i <= 1000 * 2; i++)
    if (point[i] == 1)
      {
	if (in == 0)
	  {
	    in = 1;
	    num++;
	  }
      }
    else 
      if (in == 1)
	in = 0;
  if (num == 1)
    printf("%d %d\n", left, right);
  else
    printf("no\n");

  return 0;
}
