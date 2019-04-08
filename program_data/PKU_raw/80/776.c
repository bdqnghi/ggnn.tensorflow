int main()
{
  int y1,m1,d1,y2,m2,d2,i,days;
  int day[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
  scanf("%d%d%d%d%d%d",&y1,&m1,&d1,&y2,&m2,&d2);
  days=0;
  if (y1==y2)
  {
		while ((m1<m2)||((m1==m2)&&(d1<d2)))
		{
			if ((y1%4==0&&y1%100!=0)||(y1%400==0))
			{day[2]++;}
			d1++;
			days++;
			if (d1>day[m1])
			{
				d1=0;
				m1++; 
			}
		}
  }
  else
  {
	  for (i=y1+1;i<=y2-1;i++){
		  if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))days+=366;
		  else days+=365;
	  }
      days+=day[m1]-d1;
	  for (i=m1+1;i<=12;i++) days+=day[i];
	  if ((m1==1)&&((y1%4==0&&y1%100!=0)||(y1%400==0))){days++;}
	  for (i=1;i<=m2-1;i++) days+=day[i];
         if ((m2>2)&&((y2%4==0&&y2%100!=0)||(y2%400==0))){days++;}
         days+=d2;
  }
   printf("%d",days);
   return 0;
}
  
  
	  