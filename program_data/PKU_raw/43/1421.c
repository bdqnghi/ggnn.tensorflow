int sushu(int m)
{ int i;
  for(i=2;i<=m;i++)
  if(m%i==0)break;
  if(i<m)return 0;
  else return 1;
}
main()
{  int n,a,b,x,y;
   scanf("%d",&n);
   a=3;b=n-a;
   while(a<=b)
   { x=sushu(a);
     y=sushu(b);
     if(x==1&&y==1)
     {printf("%d %d\n",a,b);a=a+2;b=b-2;}
   else {a=a+2;b=b-2;}
   }
}