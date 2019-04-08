main()
{
   int m,i,n,j,a=0,k,p,q,r=0,x=0;
   int b[5000];
   scanf("%d %d",&m,&n) ;
   for(i=m;i<=n;i++)
   {
                    if(i>=0&&i<=9)
                    {
                                  r++;
                                 if(r==1)
                                 {x++;
                                  printf("%d",i);
                                  }
                                else
                                {x++;
                                  printf(",%d",i);}
                    }
                    q=0;
                    for(j=2;j<=i/2;j++)
                    if(i%j==0)
                    {
                      a=0;
                      break;
                    }
                    else
                      a++;
                    if(a!=0)
                    {
                        k=10;
                        for(j=1;;j++)
                        {
                          b[0]=0;
                          b[j]=(i%k-b[j-1]*(k/100))/(k/10); 
                          if(i%k==i)  
                            break;
                          else
                            k=k*10; 
                        }
                        for(p=1;p<=j/2;p++)
                          if(b[p]!=b[j-p+1])
                          {
                                          q++;
                                          break;
                          }
                        if(q==0)
                        {
                                r++;
                                if(r==1)
                                {x++;
                                  printf("%d",i);}
                                else
                                {x++;
                                  printf(",%d",i);}
                        }
                        
                          
                    }
                    
   } 
   if(x==0)
   printf("no\n");    
     
}
