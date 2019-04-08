int main()
{int a,b,c,d,e,f,g;
while(1)
{scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
if(a+b+c+d+e+f==0) return 0;
else printf("%d\n",(d+12-a)*3600+(e-b)*60+f-c);}}
