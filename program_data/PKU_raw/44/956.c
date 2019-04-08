void main()
{
    int f(int x);
    int m[6],i,out;
    for(i=0;i<6;i++)
    {
    scanf("%d\n",&m[i]);
    out=f(m[i]);
    printf("%d\n",out);
    }
}
int f(int x)
{
   int a,b,c,d,e,z;
   a=x/10000;
   b=(x-10000*a)/1000;
   c=(x-10000*a-1000*b)/100;
   d=(x-10000*a-1000*b-100*c)/10;
   e=x-10000*a-1000*b-100*c-10*d;
   if(a!=0)
   z=e*10000+d*1000+c*100+b*10+a;
   else if(a==0&&b!=0)
   z=e*1000+d*100+c*10+b;
   else if(a==0&&b==0&&c!=0)
   z=e*100+d*10+c;
   else if(a==0&&b==0&&c==0&&d!=0)
   z=e*10+d;
   else if(a==0&&b==0&&c==0&&d==0)
   z=e;
   return(z);
}
   
    