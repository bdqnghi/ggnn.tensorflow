int main()
{
int y,m,d,i,x;
scanf("%d%d%d",&y,&m,&d);
x=0;
if(y%4!=0||(y%100==0&&y%400!=0))
{for(i=1;i<m;i++)
{if(i==1||i==3||i==5||i==7||i==8||i==10)
{x=x+31;}
else if(i==4||i==6||i==9||i==11){x=x+30;}
else if(i==2){x=x+28;}
}}
else
{for(i=1;i<m;i++)
{if(i==1||i==3||i==5||i==7||i==8||i==10)
{x=x+31;}
else if(i==4||i==6||i==9||i==11){x=x+30;}
else if(i==2){x=x+29;}
}}
x=x+d;
printf("%d",x);
return 0;
}