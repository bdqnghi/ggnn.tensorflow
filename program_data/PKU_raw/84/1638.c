int main()
{int a,x,i=2,y,m1,m2=0;
 scanf("%d",&a);
 scanf("%d",&x);
 m1=x;
 while (i<=a)
 {scanf("%d",&y);
  if (m1<y)
	  {m2=m1;
       m1=y;}
  else if(m1>=y&&y>m2)
  { m2=y;}
    i++;}
 printf("%d\n%d\n",m1,m2);
return 0;
}
