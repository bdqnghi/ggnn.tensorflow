int main()
{
int a,b,c,i,d,e=0;
int m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
i=0;
scanf("%d %d %d",&a,&b,&c);
	i=a-1+(a-1)/4+(a-1)/400-(a-1)/100;
if(a%400==0||a%4==0&&a%100!=0)
m[2]=29;
else
m[2]=28;
for(e=0;e<b;e++)
{
	i+=m[e];
}
i=i+c;
d=i%7;
if(d==1)
{
	printf("Mon.\n");
}
if(d==2)
{
	printf("Tue.\n");
}
if(d==3)
{
	printf("Wed.\n");
}
if(d==4)
{
	printf("Thu.\n");
}
if(d==5)
{
	printf("Fri.\n");
}
if(d==6)
{
	printf("Sat.\n");
}
if(d==0)
{
	printf("Sun.\n");
}
return 0;
}
