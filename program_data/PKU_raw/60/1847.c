int main()
{
  int n,i,t1,t2,k,a,b,s;
  scanf("%d",&n);
  s=0;
  for (a=3;a<=n;a++)
   {  
     b=a+2;
     t1=1;
     t2=1;
     for (i=2;i<a;i++) {if (a%i==0) t1=0;}
     for (k=2;k<b;k++) {if (b%k==0) t2=0;}
     if ((t1*t2==1)&&(b<=n)) {printf("%d %d\n",a,b);s=1;}
    }
  if (s==0) printf("empty");
  return 0;
}