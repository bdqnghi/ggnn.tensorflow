void main()
{int a[13]={0},b=0,c,d,i,n,j,x;
scanf("%d",&x);
for(i=1;i<=12;i++)
{if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)a[i]=31;
a[2]=28;
if(i==4||i==6||i==9||i==11)a[i]=30;}
for(i=1;i<=12;i++)
{ b=0;
	for(j=1;j<i;j++)b=b+a[j];
b=b+12;
b=b%7;
b=b+x;
if(b>7)
b=b-7;
if(b==5)
printf("%d\n",i);
}}