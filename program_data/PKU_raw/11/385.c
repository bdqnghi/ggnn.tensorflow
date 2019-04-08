int main(int argc, char* argv[])
{
	int year,month,date;
	int s=0;
	int i;
	scanf("%d %d %d",&year,&month,&date);
	if ((year%400==0)||((year%100!=0)&(year%4==0)))
	{
	   int n[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	   for (i=0;(i+1)<month;i++)
	   {
		 s+=n[i];
	   }
	   s=s+date;
	}
	else
	{
	   int n[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	   for (i=0;(i+1)<month;i++)
	   {
		 s+=n[i];
	   }
	   s=s+date;
	}
	printf("%d\n",s);
	return 0;
}

