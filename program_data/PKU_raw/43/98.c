main()
{
int a,b,c,d,e,f;
scanf("%d",&a);
b=a/2;
if(a==6)
{printf("3 3");
return 0;}
for(c=3;c<=b;c++)
{for(e=0,d=2;d<c;d++)
{if(c%d==0)
e=1;}
if(e==0)
{f=a-c;
for(e=0,d=2;d<f;d++)
{if(f%d==0)
e=1;}
if(e==0)
printf("%d %d\n",c,f);
}
}
getchar();
getchar();
}