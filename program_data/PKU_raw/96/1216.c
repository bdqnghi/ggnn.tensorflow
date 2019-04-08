
main()
{
    char a[100];
    int b[100],c[100],d[100],i,j,k,m;
    scanf("%s",a);
    k=strlen(a);
    for(i=0;i<k;i++)
    {
        b[i]=a[i]-'0';    
    }
    if(k==1)
    printf("0\n%d",b[0]);
    else
    {
        if(k==2&&b[0]*10+b[1]<13)
        {
            m=b[0]*10+b[1];
            printf("0\n");
            printf("%d",m);
         }    
         else
         {
              memset(d,0,100*sizeof(int));
              memset(c,0,100*sizeof(int));
              for(i=0;i<k;i++)
              {
                  d[i]+=b[i];
                  if(d[i]>=13)
                  {
                      c[i]=d[i]/13;
                      d[i+1]=(d[i]%13)*10;
                  }    
                  else
                  {
                      c[i]=0;
                      d[i+1]=d[i]*10;
                  } 
              }
              m=d[k]/10;
              if(c[1]==0)
              {
                  for(i=2;i<k;i++)
                  {
                      printf("%d",c[i]);
                  }
                      printf("\n");
                      printf("%d",m);
                  
              }     
              else 
              {
                  for(i=1;i<k;i++)
                  {
                      printf("%d",c[i]); 
                  }
                      printf("\n");
                      printf("%d",m);
                 
              }  
                  
              
          }           
        
    }
    


  
}