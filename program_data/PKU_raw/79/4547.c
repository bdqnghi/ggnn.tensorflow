
int s(int x,int y)
{
   int t;
   t=x%y;
   return t;
}

int main()
{
      int i=0,j=0,k=0,n=0,m=0,x=0,y=0,z=0,p=0,q=0;
      int a[300],b[300],c[300];
   
  for(p=0;p<100;p++)
  {         
     int i=0,j=0,k=0,n=0,m=0,x=0,y=0,z=0,p=0,q=0;       
     memset(a,0,300*sizeof(int));
     memset(b,0,300*sizeof(int));
     memset(c,0,300*sizeof(int));
        
     scanf("%d %d\n",&n,&m);
     if (n==0 &&m==0)
     break;
     
     else
  {     
     
     
     for (i=0;i<n;i++)
     {
        a[i]=i+1;
        b[i]=a[i];
        c[i]=a[i];
     }

     
   for (j=n;j>1;j--)   
   {  
       k=0;
       if (j>=m)
        {
          k=m-1;
          a[k]=0;
          
         } 
       else 
       {
            k=s(m,j)-1;
            a[k]=0;
       }
      
      for(x=k+1,y=0;x<j;x++,y++)
      {
               a[y]=c[x];     
      }
         
      for(x=0,z=y;x<k;x++,z++)     
      {
            a[z]=c[x];
      }    
      
      for(i=0;i<j;i++)
      c[i]=a[i];
      
   }  
 
  for( i=0;i<n;i++)
   if (b[i]==a[0])
   printf("%d\n",i+1);
} 
}

 
}   
