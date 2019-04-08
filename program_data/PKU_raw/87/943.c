void main()
{int a,b,c,d,e,f,s;
while (1){scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);if(!(a+b+c+d+e+f))break;
s=3600*(12+d-a)+60*(e-b)+f-c;printf("%d\n",s);
}}