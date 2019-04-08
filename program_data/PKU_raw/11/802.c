int f(int x)
{
 int z;
 if((x%4==0)&&(x%100!=0)||(x%400==0)) z=1;
 else z=0;
 return z;
 }
main()
{
 int year,month,day;
 scanf("%d %d %d",&year,&month,&day);
 int z,i,sum=0;
 z=f(year);
 int a[12];
 a[0]=31;a[2]=31;a[3]=30;a[4]=31;a[5]=30;a[6]=31;a[7]=31;a[8]=30;a[9]=31;a[10]=30;a[11]=31;
 if(z==1) a[1]=29;
 else a[1]=28;
 for(i=0;i<month-1;i++)
 {
 sum=sum+a[i];
 }
 sum=sum+day;
 printf("%d",sum);
 getchar();
 getchar();
 return 0;
 }
