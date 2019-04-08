
int main(int argc, char * argv[]) 
{ 
   int x,a,b,c,d,e,m=0;
   scanf("%d",&x);
   a=x%10;m=10*m+a;
   b=(x/10)%10;m=10*m+b;
   c=(x/100)%10;m=10*m+c;
   d=(x/1000)%10;m=10*m+d;
   e=(x/10000)%10;m=10*m+e;
   if(e==0) m=m/10;
   else m=m;
   if(e==0,d==0) m=m/10;
   else m=m;
   if(e==0,d==0,c==0) m=m/10;
   else m=m;
   if(e==0,d==0,c==0,b==0) m=m/10;
   else m=m;printf("%d",m);
}
