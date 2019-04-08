
int main(int argc, char *argv[])
{
  int a[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
  int b[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
  int count1=0,count2=0,year1,year2,month1,month2,date1,date2,i,sum=0;
  scanf("%d %d %d%d %d %d",&year1,&month1,&date1,&year2,&month2,&date2);
  for (i=1;i<=month1;i++)
  {
      if ((year1%4==0)&&(year1%100!=0)||(year1%400==0))
      count1+=a[i-1];
      else
      count1+=b[i-1];
  }
  count1+=date1;
  for (i=1;i<=month2;i++)
  {
      if ((year2%4==0)&&(year2%100!=0)||(year2%400==0))
      count2+=a[i-1];
      else
      count2+=b[i-1];
  }
  count2+=date2;
  if (year1==year2)
  sum=0;
  else
  for (i=year1;i<=year2-1;i++)
  {
      if ((i%4==0)&&(i%100!=0)||(i%400)==0)
      sum+=366;
      else
      sum+=365;
  }
  printf("%d",sum-count1+count2);	
  return 0;
}