void main()
{
 int x,a,b,c,d,e;
 scanf("%d",&x);
 a=x%10;
 b=(x%100-a)/10;
 c=(x%1000-b*10-a)/100;
 d=(x%10000-c*100-b*10-a)/1000;
 e=(x%100000-d*1000-c*100-b*10-a)/10000;
 if(e!=0) printf("%d%d%d%d%d",a,b,c,d,e);
 if((e==0) && (d!=0)) printf("%d%d%d%d",a,b,c,d);
 if((e==0) && (d==0) && (c!=0)) printf("%d%d%d",a,b,c);
 if((e==0) && (d==0) && (c==0) && (b!=0)) printf("%d%d",a,b);
 if((e==0) && (d==0) && (c==0) && (b==0)) printf("%d",a);
 
}
