main()
{
int a[5][5];
int p=0;
int max,min,t,c;
int i,j;
for(i=0;i<5;i++)
for(j=0;j<5;j++)
scanf("%d",&a[i][j]);
for(i=0;i<5;i++)
{
max=a[i][0];
t=0;
for(j=1;j<5;j++)
{
if(a[i][j]>max)
{max=a[i][j];
t=j;
}
}
min=max;
for(j=0;j<5;j++)
{
if(a[j][t]<min)
{
min=a[j][t];
break;}
}
if(max==min)
{printf("%d %d %d",i+1,t+1,max);
p=1;}
}
if(p==0)
printf("not found");
}
