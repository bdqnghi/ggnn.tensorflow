main()
{
int c[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int n,m,j,a,b,s,i,t;
scanf("%d",&m);
getchar();
for(j=1;j<=m;j++)
{
c[2]=28;
s=0;
scanf("%d %d %d",&n,&a,&b);
if((n%4==0&&n%100!=0)||n%400==0)
{
c[2]=29;
}
if(a>b)
{
    t=a;
    a=b;
    b=t;
}
for(i=a;i<b;i++)
s+=c[i];
if(s%7==0)
{
printf("YES\n");
}
else
printf("NO\n");
}
getchar();
getchar();
}
