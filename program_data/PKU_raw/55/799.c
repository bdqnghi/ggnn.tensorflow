main()
{
int x,y;int rest;int r,s,t;
char NUM[150];
scanf("%d %s %d",&x,NUM,&y);
int LEN;
LEN=strlen(NUM);
int i,j,k;int m=0,n=0;
char a='a',A='A',Z='Z',z='z';
char zero='0',nine='9';
for (i=0;i<LEN;i++)
{
if (NUM[i]>=a&&NUM[i]<=z)
NUM[i]=NUM[i]-a+10;
if (NUM[i]>=A&&NUM[i]<=Z)
NUM[i]=NUM[i]-A+10;
if (NUM[i]>=zero&&NUM[i]<=nine)
NUM[i]=NUM[i]-zero;
}
for (i=0;i<LEN;i++)
{
m=NUM[i];
for (j=1;j<=LEN-i-1;j++)
m*=x;
n+=m;
}
rest=n;
for (i=0;;i++)
{
if (rest==0) break;
rest/=y;
}
int PUT[1000];
int kk=i;
for (;kk>=1;kk--)
{
r=n%y;
n/=y;
PUT[kk-1]=r;
}
if (i==0) printf("0");
else for (j=0;j<i;j++)
{
if (PUT[j]>=10)
printf("%c",PUT[j]-10+A);
else 
printf("%d",PUT[j]);
}
printf("\n");
}
