
void order(int s[1000],int *p)
{
 int j=0,r=0;
 for (j=*p-1;j>=1;j--)
 {
     for(r=0;r<=j-1;r++)
     {
                     if(s[r]<s[r+1])
                     {
                                    int temp=0;
                                    temp=s[r+1];
                                    s[r+1]=s[r];
                                    s[r]=temp;
                                    }
                     }
     }    
     }
main()
{  int a[1000];
   int b[1000];
   int n=1,i=0,win=0,lose=0,tie=0,money=0,t1=0,t2=0,q1=0,q2=0;

   for(;;)
   {
  
          
   scanf("%d",&n);
 
   if(n==0)
   break;
   else
   for(i=0;i<=n-1;i++)
   scanf("%d",&a[i]);
   for(i=0;i<=n-1;i++)
   scanf("%d",&b[i]);
   order(a,&n);
   order(b,&n);
  
   
   t1=0;t2=n-1;q1=0;q2=n-1;			
	win=0;lose=0;money=0;tie=0;


	for(;(t1!=t2)&&(q1!=q2);)    
	{
		if (a[t1]>b[q1])		
		{
			win++;
			t1++;			
			q1++;				
			continue;
		}
		else if(a[t2]>b[q2])	
			{
				win++;
				t2--;		
				q2--;			
				continue;
			}
		else if(a[t2]==b[q1])  
		{
			tie++;
			t2--;
			q1++;
		}
		else if(a[t2]<b[q1])    
		{
			lose++;
			t2--;
			q1++;
		}
	}
	if(a[t1]==b[q1])      
	{
		tie++;
	}
	else if(a[t1]>b[q1])
	{
		win++;
	}
	else
	{
		lose++;
	}
																
												
	money=200*win-200*lose;

		printf("%d\n",money);
	
					}
    
                      
}
