int main(int argc, char* argv[])
{
	int year,math,day;
	int date;
	scanf ("%d %d %d",&year,&math,&day);
	if(year%4==0&&year%100!=0||year%400==0)
	{
	  if (math==1)
	  {
	   	date=day;
	  }
	  if (math==2)
	  {
		date=31+day;
	  }
      if (math==3)
	  {
		date=31+29+day;
	  }
      if (math==4)
	  {
		date=31+29+31+day;
	  }
      if (math==5)
	  {
		date=31+29+31+30+day;
	  }
	  if (math==6)
	  {
		date=31+29+31+30+31+day;
	  }
	  if (math==7)
	  {
		date=31+29+31+30+31+30+day;
	  }
	  if (math==8)
	  {
		date=31+29+31+30+31+30+31+day;
	  }
	  if (math==9)
	  {
		date=31+29+31+30+31+30+31+31+day;
	  }
	  if (math==10)
	  {
		date=31+29+31+30+31+30+31+31+30+day;
	  }
	  if (math==11)
	  {
		date=31+29+31+30+31+30+31+31+30+31+day;
	  }
	  if (math==12)
	  {
		date=31+29+31+30+31+30+31+31+30+31+30+day;
	  }
	}
	if (year%4!=0||(year%100==0)&&year%400!=0)
	{
	  if (math==1)
	  {
	   	date=day;
	  }
	  if (math==2)
	  {
		date=31+day;
	  }
      if (math==3)
	  {
		date=31+28+day;
	  }
      if (math==4)
	  {
		date=31+28+31+day;
	  }
      if (math==5)
	  {
		date=31+28+31+30+day;
	  }
	  if (math==6)
	  {
		date=31+28+31+30+31+day;
	  }
	  if (math==7)
	  {
		date=31+28+31+30+31+30+day;
	  }
	  if (math==8)
	  {
		date=31+28+31+30+31+30+31+day;
	  }
	  if (math==9)
	  {
		date=31+28+31+30+31+30+31+31+day;
	  }
	  if (math==10)
	  {
		date=31+28+31+30+31+30+31+31+30+day;
	  }
	  if (math==11)
	  {
		date=31+28+31+30+31+30+31+31+30+31+day;
	  }
	  if (math==12)
	  {
		date=31+28+31+30+31+30+31+31+30+31+30+day;
	  }
	}




	printf("%d",date);
	return 0;
}