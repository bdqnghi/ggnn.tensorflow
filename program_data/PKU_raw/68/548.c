int m(int x)
  {int i,c=0;
   for (i=2;i<=sqrt(x);i++)
  {
   if (x%i==0) c=c+1;
  } 
  if (c==0) return (x);
  else return (0);
  }
void f(int y)
{ int i,a,b;
  int m(int x);
  void p (int x,int y);
  for (i=2;i<=y;i++)
   { 
	a=m(i); b=m(y-i);
   if (a+b==y)
   { 
    p (i,y-i);
    break;
   }
  }
}
void p (int x,int y)
{
 printf ("%d=%d+%d\n",x+y,x,y);
}
main()
{int a=0,n=0,i=0;
void f(int y);
scanf("%d",&n);
for (i=6;i<=n;i++)
  {
   if (i%2==0) f(i);
  }
}
