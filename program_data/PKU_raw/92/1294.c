
void h(int x[],int y)
{   int i,j,t;
  for(i=1;i<y;i++)
     for(j=y;j>i;j--)
     if(x[j]>x[j-1])
   {     t=x[j-1];
         x[j-1]=x[j];
         x[j]=t;     }
}
   
int c(int a[],int b[],int m)  
{     int i; int j;
      if(a[m]>b[m])
       return (1);
       if(a[m]<b[m])
       {   for(i=1;i<=m-1;i++)
           b[i]=b[i+1];
           return (-1);   
        }   
       if(a[m]==b[m]&&a[1]>b[1])
       {      for(i=1;i<=m-1;i++)
              { b[i]=b[i+1];
                a[i]=a[i+1]; }
            return (1);            }
       if(a[m]==b[m]&&a[1]<b[1])
        {  for(i=1;i<=m-1;i++)
               b[i]=b[i+1];
               return (-1);        }
       if(a[m]==b[m]&&a[1]==b[1])
     {        
           if(a[m]==b[1])    
             j=0;
             if(a[m]<b[1])   
             j=-1;
              for(i=1;i<=m-1;i++)
              b[i]=b[i+1]; 
             return (j);
             }        
    }         
main()
{ int n,l,i,j,t;
  int a[10000];
  int b[10000];
for(;;)
{  scanf("%d",&n);
   if(n==0) break;
  
  for(i=1;i<=n;i++)
  scanf("%d",&a[i]);
  for(i=1;i<=n;i++)
  scanf("%d",&b[i]);
  l=n;t=0;
  h(a,l);h(b,l);
 
  for(i=1;i<=n;i++)
{
     t=t+c(a,b,l);            
       l--;
                   }  
    t=t*200;
    printf("%d\n",t);
}


      }
