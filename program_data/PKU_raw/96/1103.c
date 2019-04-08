main()
{
 int m,n,i,j=0,x=0,y,b[101],d[101];
 char a[101],c[101];
 scanf("%s",a);
 n=strlen(a);
 
   for(i=0;i<n;i++)
   {
      b[i]=a[i]-'0'; 
   } 
   
    for(i=0,j=0;i<n-1;i++)
    {
      while( b[i]<13 && i<n-2 )
      {  
        d[i]=0;    
        b[i+1]=10*b[i]+b[i+1];
        i++;        
       }        
        d[i]=b[i]/13;               
        b[i+1]=b[i]%13*10+b[i+1];  
    } 
             
    d[n-1]=b[n-1]/13; 
    y=b[n-1]%13;
    
   for (i=0;i<=n-1;i++)
   {
    x+=d[i];
   }
    
    if( x==0)
    printf("%d",x);
    else
   {
     for (i=0,j=0;i<=n-1;i++,j++)
      {
        if (d[i]!=0)
        break;    
      } 
     for(m=j;m<=n-1; m++)
     printf("%d",d[m]);
    }
    
  printf("\n");
  printf("%d",y);
    
 }    
      