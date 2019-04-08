int f1(int x)
{
      int n=1,i,p;
      for(i=0;i<12;i++)
{
      x=x/2;
      n++;
      if(x==1)break;
}
      return n;      
}
int f2(int x,int y)
{
     int i;
     for(i=0;i<y;i++)
     x=x/2;
     return x;
}
int main()
{
     int a,b,c,d,e,f;
     cin>>a>>b;
     e=f1(a);
     f=f1(b);
     for(c=0;c<e;c++)
     for(d=0;d<f;d++)
     if(f2(a,c)==f2(b,d))
{
     cout<<f2(a,c);
     c=e+1;
     d=f+1;
} 
     return 0;
}