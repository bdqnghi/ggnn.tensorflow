
 int main ()
 {
	 long year,month,day;
	 scanf("%ld%ld%ld",&year,&month,&day);
	 int sumyearday=0;
	 int i,j;
          if(year>400)
          {
               year=400+(year-400)%400;
           }
	 for (i=1;i<year;i++)
	 {
		 if ((i%400==0)||(i%4==0&&i%100!=0))
		 	 sumyearday=sumyearday+(366%7);
		 else 
		 	 sumyearday=sumyearday+(365%7);
	 }
	 int mday[12]={31,28,31,30,31,30,31,31,30,31,30,31};
     int total = 0;
	 for (j=0;j<month-1;j++)
	 {
		 total=total+mday[j];
	 }
	 if ((year%4==0&&year%100!=0&&month>=3)||(year%400==0&&month>=3))
	 {
		 total = total + 1;
	 }
	 int days;
	 days=sumyearday+total%7+day%7;
	 int result;
	 result=days%7;
	 if (result==1)printf("Mon.\n");
	 else if (result==2)printf("Tue.\n");
	 else if (result==3)printf("Wed.\n");
	 else if (result==4)printf("Thu.\n");
	 else if (result==5)printf("Fri.\n");
	 else if (result==6)printf("Sat.\n");
	 else if (result==0)printf("Sun.\n");
	 return 0;
 }

