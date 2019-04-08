int main()
{
  int y1,m1,d1,y2,m2,d2;
  cin>>y1>>m1>>d1>>y2>>m2>>d2;
  int f(int,int,int);
  cout<<f(y2,m2,d2)-f(y1,m1,d1)<<endl;
  return 0;
}
int f(int y,int m,int d)
{  
  int num,i,j,k,s1=0,s2=0; 
  int c[3100];
  int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
  int b[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
  for(i=0;i<=3050;i++)
   {
   if(i%4!=0||i%100==0&&i%400!=0) c[i]=365;
   else c[i]=366;
   }
     for(i=0;i<=y-1;i++)
   s1=s1+c[i];
   for(i=0;i<=m-1;i++)
   {
   if(y%4!=0||y%100==0&&y%400!=0)
       s2=s2+a[i];
   else s2=s2+b[i];
  }
 num=s1+s2+d;
return (num);
}

    
     
  
  
  