int main()
{
int a,b,c,d;
scanf("%d",&a);
if (a==10000)
printf("00001");
else
if (a>=1000)
{
	b=a%10;
a=(a-b)/10;
c=a%10;
a=(a-c)/10;
d=a%10;
a=(a-d)/10;
printf("%d%d%d%d",b,c,d,a);}
else
    if(a>=100)
	{b=a%10;
a=(a-b)/10;
c=a%10;
a=(a-c)/10;
printf("%d%d%d",b,c,a);}
    else
      if(a>=10)
	  {b=a%10;
a=(a-b)/10;
printf("%d%d",b,a);}
else
printf ("%d",a);
return 0;
}
