void main()
{int a;
char b,c,d,e;
scanf("%d",&a);
b=(int)(a/1000);
c=(int)((a-1000*b)/100);
d=(int)(a/10)-c*10-100*b;
e=a-10*d-100*c-1000*b;
if(b!=0)
printf("%d%d%d%d",e,d,c,b);
if(b==0&&c!=0)
printf("%d%d%d",e,d,c);
if(a>9&&a<100)
printf("%d%d",e,d);
if(a<10)
printf("%d",e);
}
