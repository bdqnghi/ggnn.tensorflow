main()
{
  int l,n,m,i,j,k,r,s,t1,t2,w,x;
  char a[500];
  scanf("%d",&n);
  scanf("%s",a);
                                                                     
  m=strlen(a);                         
  l=m+1-n;                                                       
  char b[l][n];
  int c[l];  
  j=0;  k=-1; 
  for(i=0;i<m;i++)
   {
    k++;
    b[j][k]=a[i];                          
    if((k+1)%n==0)
    {
     k=-1;
     j++;
     i=i-n+1;
    }
   }                  

  memset(c,0,l*4);
  for(j=0;j<m-n+1;j++)   
      for(k=j+1;k<m-n+1;k++)
         {
           r=0;
           for(i=0;i<n;i++)
              if(b[j][i]==b[k][i])
                r++;
           if(r==n)  
              c[j]++; 
         }

 for(j=0;j<m-n;j++)
     for(k=0;k<m-n-j;k++)
       if(c[k]<c[k+1])
         {
             t1=c[k];
             c[k]=c[k+1];
             c[k+1]=t1;
           for(i=0;i<n;i++)
            { 
             t2=b[k][i];
             b[k][i]=b[k+1][i];
             b[k+1][i]=t2;
            }       
         } 

     w=0;  x=1;
   for(i=0;i<m-n;i++)  
       if(c[i]!=c[i+1])
         {
         w=i+1;
         x=c[i]+1;
         break;
         }                  
         
   if(x<=1)
     printf("NO\n");
   else if(x>1)
  {
   printf("%d\n",x);
   for(j=0;j<w;j++)
    {
     for(k=0;k<n;k++)
       printf("%c",b[j][k]);
     printf("\n");  
    }  
  } 
}
