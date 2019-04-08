main()
{
 int year;
 int month;
 int day;
 int z;
 z=0;
 scanf("%d %d %d",&year,&month,&day);
 int m[12];
 m[0]=31;
 if(year%4==0)
 {
  m[1]=29;
  if(year%100==0)
  m[1]=28;
  if(year%400==0)
  m[1]=29;
 }
 else
 m[1]=28;
 m[2]=31;
 m[3]=30;
 m[4]=31;
 m[5]=30;
 m[6]=31;
 m[7]=31;
 m[8]=30;
 m[9]=31;
 m[10]=30;
 m[11]=31;
 int i;
 for(i=0;i<month-1;i++)
 z=z+m[i];
 printf("%d\n",z+day);
 getchar();
 getchar();
 getchar();
 getchar();
}
