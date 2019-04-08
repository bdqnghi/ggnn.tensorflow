int main()
{
	int n,a,b,c,d,e,f,a1,b1,c1,d1,e1;
 scanf("%d",&n);
 a=(int)n/100;
 a1=n-a*100;
b=(int)a1/50;
b1=a1-b*50;
c=(int)b1/20;
c1=b1-c*20;
d=(int)c1/10;
d1=c1-d*10;
e=(int)d1/5;
e1=d1-e*5;
f=(int)e1/1;

printf("%d\n",a);
printf("%d\n",b);
printf("%d\n",c);
printf("%d\n",d);
printf("%d\n",e);
printf("%d\n",f);
}

