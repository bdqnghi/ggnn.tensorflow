
struct d
{int y,m,d;};

long days(struct d d1,struct d d2)
{
int mon[2][13]= {{0,31,28,31,30,31,30,31,31,30,31,30,31},
{0,31,29,31,30,31,30,31,31,30,31,30,31}};

int i; long td=0;
for(i=d1.y;i<d2.y;i++)
td+=leap(i)?366:365;

for(i=1;i<d1.m;i++)
  td-=mon[leap(d1.y)][i];
td-=d1.d-1;

for(i=1;i<d2.m;i++)
  td+=mon[leap(d2.y)][i];
td+=d2.d-1;

return td;
}


int main()
{struct d d1,d2;
long td;
scanf("%d %d %d",&d1.y,&d1.m,&d1.d);
scanf("%d %d %d",&d2.y,&d2.m,&d2.d);
td=days(d1,d2);
printf("%ld",td);
return 0;
}
