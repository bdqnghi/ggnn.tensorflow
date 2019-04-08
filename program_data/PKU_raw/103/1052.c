main()
{
      int r=0,n,i=0,j=0,x=0,y=0,z[1000];
      char a[1000];
      
      scanf("%s",a);
      n=strlen(a);
      
      for(i=0;i<n;i++)
       {
         if ( a[i]>='a' && a[i]<='z')
         a[i]=a[i]-32;
        } 
      
      
      
      for( x=0;x<=n;x++)
       {
         j=0;
         z[x]=0; 
         if (x>0 && a[x]==a[x-1])
         continue;     
        for(y=x;y<=n;y++)
         {
           if (a[y]==a[x])
            z[x]++;
           else 
           {
            printf("(%c,%d)",a[x],z[x]);
            break;
           }    
         }  
       }
      
     
 }
   