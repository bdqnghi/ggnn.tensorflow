void main()
{
 int a,b,c,d,e,i,n;
 a=3;b=5;
 scanf("%d",&n);
 if(n<5) printf("empty");
while(b<=n)
 {
 for(i=2;i<(a+1)/2;i++)
 {
  if((a%i)==0) goto loop;
 }
  for(i=2;i<(b-1)/2;i++)
 {
  if((b%i)==0) goto loop;
  }
 printf("%d %d\n",a,b);
 loop:
 a=a+2;
 b=b+2;
 }

}