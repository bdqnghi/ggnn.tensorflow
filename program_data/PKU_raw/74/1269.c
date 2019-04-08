int sushu(int m)
{int i,j,k=1;
j=m/2;
for(i=2;i<=j;i++)
if(m%i==0)k=0;
if(k==1)return(1);
else return(0);}
int huiwen(int m)
{int t=0;
while(m)
{t=t*10+m%10;
m=m/10;}
return(t);}
void main()
{int m,n,i,j,t=0;
scanf("%d %d",&m,&n);
for(i=m;i<=n;i++)
{if(sushu(i)&&(i==huiwen(i)))
{if(t==0)printf("%d",i);
else printf(",%d",i);
t++;}}
if(t==0)printf("no");}