

int main()
{
  int yibai=0;
  int wushi=0;
  int ershi=0;
  int shi=0;
  int wu=0;
  int yi=0;
  int money=0;
  int leftmoney=0;

  scanf("%d", &money);
  leftmoney = money;
  for ( ; ; )
  {
    if (leftmoney>=0)
	{
		leftmoney -= 100;
	    ++yibai;
	}		
	else
    {
	  if (yibai==0);
	  else --yibai;
	  break;
	}

  }
  leftmoney += 100;
  for ( ; ; )
  {
    if (leftmoney>=0)
	{
		leftmoney -= 50;
	    ++wushi;
	}		
	else
    {
	  if (wushi==0);
	  else --wushi;
	  break;
	}
  }
  leftmoney += 50;
  for ( ; ; )
  {
    if (leftmoney>=0)
	{
		leftmoney -= 20;
	    ++ershi;
	}		
	else
    {
	  if (ershi==0);
	  else --ershi;
	  break;
	}
  }
  leftmoney += 20;

  for ( ; ; )
  {
    if (leftmoney>=0)
	{
		leftmoney -= 10;
	    ++shi;
	}		
	else
    {
	  if (shi==0);
	  else --shi;
	  break;
	}
  }
  leftmoney += 10;
  for ( ; ; )
  {
    if (leftmoney>=0)
	{
		leftmoney -= 5;
	    ++wu;
	}		
	else
    {
	  if (wu==0);
	  else --wu;
	  break;
	}
  }
   leftmoney+=5;
  for ( ; ; )
  {
    if (leftmoney>=0)
	{
		leftmoney -= 1;
	    ++yi;
	}		
	else
    {
	  if (yi==0);
	  else --yi;
	  break;
	}
  }

  printf("%d\n%d\n%d\n%d\n%d\n%d\n", yibai, wushi, ershi, shi, wu, yi);

  return 0;
}