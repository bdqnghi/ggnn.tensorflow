main()
{
int n;
scanf("%d",&n);
int i;
for(i=0;i<n;i++)
{
int y,m1,m2,t,j;
scanf("%d %d %d",&y,&m1,&m2);
t=0;
if(((y%4==0)&&(y%100!=0))||(y%400==0))
{
int a[12]={31,29,31,30,31,30,31,31,30,31,30,31};
if(m1<m2)
{
for(j=m1-1;j<m2-1;j++)
t=t+a[j];
if(t%7==0)
printf("YES\n");
else
printf("NO\n");
}
else
{
for(j=m2-1;j<m1-1;j++)
t=t+a[j];
if(t%7==0)
printf("YES\n");
else
printf("NO\n");
}
}
else
{
int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
if(m1<m2)
{
for(j=m1-1;j<m2-1;j++)
t=t+a[j];
if(t%7==0)
printf("YES\n");
else
printf("NO\n");
}
else
{
for(j=m2-1;j<m1-1;j++)
t=t+a[j];
if(t%7==0)
printf("YES\n");
else
printf("NO\n");
}
}
}
}


