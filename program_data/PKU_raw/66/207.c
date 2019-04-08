

int main (int argc, char *argv[])
{
  long y,m,d,sum=0,a,y1;
  int i;
  int monthdays[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
  scanf("%ld%ld%ld",&y,&m,&d);
  for(i=1;i<=m;i++)
  {sum+=monthdays[i-1];}
  if(m>2&&((y%4==0&&y%100!=0)||y%400==0))
   {sum+=1;}
  for(i=y-1;i>=0;i--)
  {
     if(i%400==0)
     {y1=i;
     break;}
  }
  for(i=y1+100;i<y;i+=100)
  {
     if(i%400!=0)
     {sum-=1;}
  }
  a=(sum+365*(y-y1-1)+d+(y-y1-1)/4)%7;
  if(a==0)printf("Sun.\n");
  else if(a==1)printf("Mon.\n");
  else if(a==2)printf("Tue.\n");
  else if(a==3)printf("Wed.\n");
  else if(a==4)printf("Thu.\n");
  else if(a==5)printf("Fri.\n");
  else printf("Sat.\n");
  return 0;
}
