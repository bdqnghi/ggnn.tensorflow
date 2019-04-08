int main()
{
int a,b,c,d,e;
scanf("%d",&a);
b=a/1000;
c=(a-1000*b)/100;
d=(a-1000*b-100*c)/10;
e=a-1000*b-100*c-10*d;
if (a==10000) printf("00001");
else b!=0?printf("%d%d%d%d",e,d,c,b):c!=0?printf("%d%d%d",e,d,c):d!=0?printf("%d%d",e,d):printf("%d",e);


return 0;
}