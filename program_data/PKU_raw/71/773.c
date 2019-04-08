int main()
{
  int a,b,c,n,i;
  void f(int a,int b,int c);
  scanf("%d",&n);
  for(i=0;i<n;i++)
   {
    scanf("%d%d%d",&a,&b,&c);
    f(a,b,c);
   }
  
  return 0;
}
void f(int a,int b,int c)
{
 int t1,t2;
 if((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0))
       {
       if(b==1)  t1=1;  if(c==1)  t2=1;
       if(b==2) t1=32;  if(c==2) t2=32;
       if(b==3) t1=61;  if(c==3) t2=61;
       if(b==4) t1=92;  if(c==4) t2=92;
       if(b==5) t1=122; if(c==5) t2=122;
       if(b==6) t1=153; if(c==6) t2=153;
       if(b==7) t1=183; if(c==7) t2=183;
       if(b==8) t1=214; if(c==8) t2=214;
       if(b==9) t1=245; if(c==9) t2=245;
       if(b==10)t1=275; if(c==10)t2=275;
       if(b==11)t1=306; if(c==11)t2=306;
       if(b==12)t1=336; if(c==12)t2=336;
       }
 else
   {
       if(b==1)  t1=1;  if(c==1)  t2=1;
       if(b==2) t1=32;  if(c==2) t2=32;
       if(b==3) t1=60;  if(c==3) t2=60;
       if(b==4) t1=91;  if(c==4) t2=91;
       if(b==5) t1=121; if(c==5) t2=121;
       if(b==6) t1=152; if(c==6) t2=152;
       if(b==7) t1=182; if(c==7) t2=182;
       if(b==8) t1=213; if(c==8) t2=213;
       if(b==9) t1=244; if(c==9) t2=244;
       if(b==10)t1=274; if(c==10)t2=274;
       if(b==11)t1=305; if(c==11)t2=305;
       if(b==12)t1=335; if(c==12)t2=335;
   }
 if(abs(t1-t2)%7==0) printf("YES\n");
 else printf("NO\n");
}
