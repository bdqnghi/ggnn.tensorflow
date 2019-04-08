

main()



{
      int x,y,i,j,n;
      char test1[100];
      char test2[100];
      char a[100];
      char b[100];
      char c[100];
      
      scanf("%d",&n);
      
      for(j=0;j<n;j++)
      
    { scanf("%s",test1);
      x=strlen(test1);
      for(i=0;i<x;i++)
      a[i]=test1[x-i-1];
      for(i=x;i<100;i++)
      a[i]='0';
           
      scanf("%s",test2);
      y=strlen(test2);
      for(i=0;i<y;i++)
      b[i]=test2[y-i-1];
      for(i=y;i<100;i++)
      b[i]='0';
                
      for(i=0;i<x;i++)
      {
          if(a[i]>=b[i])
          c[i]=a[i]-b[i]+'0';
          else
          {
              c[i]=a[i]-b[i]+10+'0';
              a[i+1]=a[i+1]-1;          
          }       
      }   
      
      
      for(i=x-1;i>=0;i--)
      printf("%c",c[i]);
      printf("\n");
    } 
}
