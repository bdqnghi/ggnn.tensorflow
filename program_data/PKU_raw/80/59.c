void main()
{
  int yone,monone,dayone;
  int ytwo,montwo,daytwo;
  scanf("%d%d%d",&yone,&monone,&dayone);
  scanf("%d%d%d",&ytwo,&montwo,&daytwo);
  int mon[12]={31,28,31,30,31,30,31,31,30,31,30,31};
  int i,j;
  int day=0;
  if(yone==ytwo)
  {
	  if(monone==montwo) day=daytwo-dayone;
	  else
	  {
		  if(yone%4==0&&yone%100!=0||yone%400==0) mon[1]=29;
		  for(i=monone;i<montwo;i++)
			  day=day+mon[i-1];
		  day=day+daytwo;
		  day=day-dayone;
	  }
	  mon[1]=28;
  }
  else
  {
	  if(yone%4==0&&yone%100!=0||yone%400==0) mon[1]=29;
	  for(i=monone;i<=12;i++) day=day+mon[i-1];
	  day=day-dayone;
	  mon[1]=28;
	  if(ytwo%4==0&&ytwo%100!=0||ytwo%400==0) mon[1]=29;
	  for(i=1;i<montwo;i++) day=day+mon[i-1];
	  day=day+daytwo;
	  mon[1]=28;
	  if(yone+1<ytwo)
	  {
		  for(j=yone+1;j<ytwo;j++)
		  {
			  day=day+365;
		      if(j%4==0&&j%100!=0||j%400==0) day=day+1;
		  }
	  }
  }
  printf("%d",day);
}

		  
