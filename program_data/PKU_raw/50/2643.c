
main()
{
      int a[13];
      a[0]=0;
      a[1]=31;
      a[2]=28;
      a[3]=31;
      a[4]=30;
      a[5]=31;
      a[6]=30;
      a[7]=31;
      a[8]=31;
      a[9]=30;
      a[10]=31;
      a[11]=30;
      a[12]=31;
      int w;
      int i; 
      scanf("%d",&w);
      int sum=13; 
      for(i=0;i<12;i++)
      {
             sum=sum+a[i];
           
                    if(w>=5)
                    {
                            if((sum-13+w)%7==0)
                            printf("%d\n",i+1);
                    }
                    else if(w<5)
                    {
                         if((sum-6+w)%7==0)
                         printf("%d\n",i+1);
                    }
                    else continue;
             
                        
      }
      
    }
