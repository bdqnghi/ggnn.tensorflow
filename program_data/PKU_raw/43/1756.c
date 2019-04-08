int main()
{
  int n,i,j,a,b,c,d,e;
  scanf("%d",&n);
  for(i=3;i<=(n/2);i=i+2)
  {
    a=sqrt(i);b=1;
    for(j=2;j<=a;j++)
    {if(i%j==0) b=j;}
    if(b==1)
   {
     c=n-i;d=sqrt(c);e=1;
     for(j=2;j<=d;j++)
     {if(c%j==0) e=j;}
     if(e==1) printf("%d %d\n",i,c);
    }
  }
}