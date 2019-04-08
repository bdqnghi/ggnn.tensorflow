main()
{
	char a[200];
    int b[200];
	scanf("%s",a); 
	
      int num=0,i,m=0;
      for (i=0;a[i]!='\0';i++)
	
		{
			num=num*10+a[i]-'0';
			int d ,e;
			if (num>=13)
			{
				d=num%13;
				if (d==0)
				{
					e=num/13;
					b[i]=e;
					num=0;
				}
				else
				{
					e=(num-d)/13;
					b[i]=e;
					num=d; 
				}
			}
			else
			{
                num=num;
			    b[i]=0;
             }
            m++; 
		}
	int yu;
	yu =num;
      
      if (m==1)
      {   
        printf ("%d\n",b[0]);
        printf ("%d",yu);       
               }    
      else 
      {
           if (m==2)
          {
           printf ("%d\n",b[1]);
           printf("%d",yu);
           }      	
          else    
          {
          int s,l=0;
          for (s=0;b[s]==0;s++)
          l++;
          int r ;
          for (r=l;r<=m-1;r++)
          printf ("%d",b[r]);
        
          printf("\n%d",yu);	
          }  	
      }
		} 