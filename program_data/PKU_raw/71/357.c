int rn(int n)
{
    if(n%400==0||(n%4==0&&n%100!=0))
    return 1;
    else return 0;
}
int day(int a,int b)
{
    int c,d;
    d=(b>=8)?(b+1)/2:b/2;
    if(b==1)  c=1;
    if(b==2)  c=32;
    if(rn(a)==1)
      if(b>2)   c=61+31*(d-1)+30*(b-2-d);
    if(rn(a)==0)
      if(b>2)   c=60+31*(d-1)+30*(b-2-d);
      return(c);
      }
main()
{
      int n,i,p,q,a,b,c;
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
          scanf("%d %d %d",&a,&b,&c);
          p=day(a,b);
          q=day(a,c);
          if((p-q)%7==0)
          printf("YES\n");
          else
          printf("NO\n");
      } 
      getchar();getchar();
      }
