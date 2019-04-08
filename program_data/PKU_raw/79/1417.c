main()
{
      char n[300]={'\0'};
      int m,i,j,k,d;
      int x=1;
      int num;
      
      for(x=1;x<=2;)
      {
                    scanf("%d %d",&num,&m);
                    if(num==0&&m==0)
                    break;
                    if(num==1)
                    {
                              printf("1\n");
                              continue;
                    }
      for(i=0;i<=num-1;i++)
      {
              n[i]='1';
      }
      int count=0;j=1;i=0;
      for(d=1;;d++)
      {
              
              j=0;
            for(;i<=num;)
            {               
                              if(n[i]!='\0')
                              {             j=j+1;
                                           if(j==m)
                                           { n[i]='\0';
                                           count++;
                                            break;}
                                            if(i==num-1&&j<m)
                                            {
                                            i=-1;
                                            }
                                
                                }
                                i=i+1;
                                if(i>=num)
                                i=0;
                   
            }
            if(count==num-1)
            break;
      }
      for( i=0;i<=num;i++)
      {
                         if(n[i]!='\0')
                         break;
      }
      printf("%d\n",i+1);
      }
}

