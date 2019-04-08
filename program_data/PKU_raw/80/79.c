long sum(int y,int m,int d)
{
int i,x[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
long s=0;
for(i=1;i<y;i++)
  {if(i%4==0&&i%100!=0||i%400==0)s+=366;
  else s+=365;}
if(y%4==0&&y%100!=0||y%400==0)x[2]=29;
for(i=0;i<m;i++)s+=x[i];
s+=d;
return s;
}
void main()
{
int y1,y2,m1,m2,d1,d2;
scanf("%d %d %d",&y1,&m1,&d1);
scanf("%d %d %d",&y2,&m2,&d2);
printf("%ld",sum(y2,m2,d2)-sum(y1,m1,d1));
}