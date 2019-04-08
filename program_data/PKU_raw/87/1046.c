int main()
{
int y[6][10000],i,h,m,s,sumk,sum[10000],l;
l=0;
for(l=0;l<10000;l++)
{
for(i=0;i<6;i++)
{
scanf("%d",&(y[i][l]));

}
if(y[0][l]==0)
{break;}}

for(i=0;i<l;i++)
{
y[3][i]=y[3][i]+12;
h=y[3][i]-y[0][i];
m=y[4][i]-y[1][i];
sumk=h*60+m;
s=y[5][i]-y[2][i];
sum[i]=sumk*60+s;

}
for(i=0;i<l;i++)
{printf("%d\n",sum[i]);}
return 0;
}
