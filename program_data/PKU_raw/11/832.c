main()
{     int a,b,c;
      scanf("%d%d%d",&a,&b,&c);
      int f[12]={31,28,31,30,31,30,31,31,30,31,30,31};
      int i,k;  
      if(a%100==0&&a%400==0)
     {f[1]=29; 
      for(i=0,k=0;b!=i+1;i++)
      k=k+f[i];
      printf("%d",k+c);                      
                            } 
      else if(a%100!=0&&a%4==0)
      {f[1]=29; 
      for(i=0,k=0;b!=i+1;i++)
      k=k+f[i];
      printf("%d",k+c); 
           }
       else 
       {for(i=0,k=0;b!=i+1;i++)
      k=k+f[i];
      printf("%d",k+c); 
            }                   
       
}
