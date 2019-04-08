void h(int x[],int y)
{  
 int i,j,t;
  for(i=1;i<y;i++)
     for(j=y;j>i;j--)
     if(x[j]>x[j-1])
   {   
  t=x[j-1];
         x[j-1]=x[j];
         x[j]=t;  
   }
   }
   
   void g(int x[],int y)
{   int i,j,t;
     for(i=1;i<y;i++)
     for(j=y;j>i;j--)
     if(x[j]<x[j-1])
   {     t=x[j-1];
         x[j-1]=x[j];
         x[j]=t;     }
 }

void c(int b[],int m,int n)  
{     int i; 
      for(i=n;i<=m;i++)
           b[i]=b[i+1];
           }
          


main()
{ int n,l,i,j,t,r,s,w;
  int a[10000];
  int b[10000];
for(;;)
{ 
 scanf("%d",&n);
   if(n==0) break;
  
  for(i=1;i<=n;i++)
  scanf("%d",&a[i]);
  for(i=1;i<=n;i++)
  scanf("%d",&b[i]);
  l=n;t=0;r=0;
  g(a,l);h(b,l);
  
  for(i=1;i<=l;i++)
  for(j=1;j<=l;j++)
      if(a[i]>b[j])
{    
 t=t+1;
      l=l-1;
       c(b,l,j);
       c(a,l,i);
        i=i-1;
       break;
}    


   for(w=l,i=1;i<=w;i++)
   for(j=1;j<=w;j++)
      if(a[i]==b[j])
{    
 r=r+1;
      w=w-1;
      c(b,w,j);
      c(a,w,i);
      i=i-1;
       break;
}    

    s=(t-(n-t-r))*200;
    printf("%d\n",s);
}
}
