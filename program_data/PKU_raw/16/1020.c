void main ()
{
int a,c,d,e,f,g;
scanf("%d",&a);
if(a==10000)
printf("00001");
else if(a>=1000&&a<=9999)
{
c=a/1000;
d=(a-1000*c)/100;
e=(a-1000*c-d*100)/10;
f=a-1000*c-d*100-e*10;
g=f*1000+e*100+d*10+c;
printf("%d%d%d%d",f,e,d,c);
}
else if (a>=100&&a<=999)
{c=0;
d=(a-1000*c)/100;
e=(a-1000*c-d*100)/10;
f=a-1000*c-d*100-e*10;
g=f*100+e*10+d*1+c;
printf("%d%d%d",f,e,d);
}
else if (a>=10&&a<=99)
{c=0;
d=0;
e=(a-1000*c-d*100)/10;
f=a-1000*c-d*100-e*10;
g=f*10+e;
printf("%d%d",f,e);}
else 
{g=a;
printf("%d",g);}

}